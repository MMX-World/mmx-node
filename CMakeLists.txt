cmake_minimum_required(VERSION 3.11)
project(mmx-node C CXX ASM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-unused-function")

set(ARITH "easy" CACHE STRING "BLS ARITH")
set(BUILD_BLS_PYTHON_BINDINGS OFF CACHE BOOL "BUILD_BLS_PYTHON_BINDINGS")
set(BUILD_BLS_TESTS OFF CACHE BOOL "BUILD_BLS_TESTS")
set(BUILD_BLS_BENCHMARKS OFF CACHE BOOL "BUILD_BLS_BENCHMARKS")
set(LIBBECH32_BUILD_TESTS OFF CACHE BOOL "LIBBECH32_BUILD_TESTS")
set(LIBBECH32_BUILD_EXAMPLES OFF CACHE BOOL "LIBBECH32_BUILD_EXAMPLES")

add_subdirectory(vnx-base)
add_subdirectory(vnx-addons)
add_subdirectory(vnx-rocksdb)
add_subdirectory(libbech32)
add_subdirectory(bls-signatures)


if (NOT MSVC)
find_package(OpenCL)
find_package(OpenMP REQUIRED)
endif()

find_package(Threads REQUIRED)

find_library(JEMALLOC_LIB NAMES jemalloc)

include(cmake/chiapos.cmake)

if(OpenCL_FOUND)
	add_subdirectory(basic-opencl)
	target_compile_definitions(automy_basic_opencl
		PUBLIC CL_TARGET_OPENCL_VERSION=120
	)
endif()

if(SODIUM_FOUND)
	message(STATUS "Found libsodium")
	include_directories(${SODIUM_INCLUDE_DIR})
endif()

if (WITH_SECP256K1 AND NOT MSVC)
	message(STATUS "Using secp256k1")
	include_directories(secp256k1/include)
	link_directories(secp256k1/.libs)
endif()

file(GLOB GENERATED_SOURCE_FILES
	generated/src/*.cpp
	generated/contract/src/*.cpp
	generated/operation/src/*.cpp
	generated/solution/src/*.cpp
)

add_library(uint256_t OBJECT
	uint256_t/uint128_t.cpp
	uint256_t/uint256_t.cpp
)

target_include_directories(uint256_t PUBLIC uint256_t)


add_library(mmx_iface SHARED
	$<TARGET_OBJECTS:uint256_t>
	${GENERATED_SOURCE_FILES}
	src/Block.cpp
	src/BlockHeader.cpp
	src/Transaction.cpp
	src/Operation.cpp
	src/Context.cpp
	src/Contract.cpp
	src/Solution.cpp
	src/ProofOfTime.cpp
	src/ProofOfSpace.cpp
	src/secp256k1.cpp
	src/hash_t.cpp
	src/txio_key_t.cpp
	src/contract/NFT.cpp
	src/contract/Data.cpp
	src/contract/DataArray.cpp
	src/contract/DataObject.cpp
	src/contract/WebData.cpp
	src/contract/PubKey.cpp
	src/contract/MultiSig.cpp
	src/contract/Token.cpp
	src/contract/Staking.cpp
	src/contract/Locked.cpp
	src/contract/PuzzleLock.cpp
	src/contract/PlotNFT.cpp
	src/contract/VoteSheet.cpp
	src/solution/PubKey.cpp
	src/solution/MultiSig.cpp
	src/solution/PuzzleLock.cpp
	src/solution/PlotNFT.cpp
	src/solution/BLS_PubKey.cpp
	src/operation/Mint.cpp
	src/operation/Spend.cpp
	src/operation/Mutate.cpp
	src/operation/Vote.cpp
)


if(MSVC)
	include(GenerateExportHeader)
	GENERATE_EXPORT_HEADER(mmx_iface)
	set(MMXIFACE_BINARY_DIR "${CMAKE_CURRENT_BINARY_DIR}" CACHE STRING "")
	include_directories("${CMAKE_CURRENT_BINARY_DIR}")
	set_target_properties(mmx_iface PROPERTIES ENABLE_EXPORTS 1)
	set_target_properties(mmx_iface PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS 1)	
endif()

add_library(mmx_modules SHARED
	$<TARGET_OBJECTS:uint256_t>
	src/TimeLord.cpp
	src/Node.cpp
	src/Node_update.cpp
	src/Node_verify.cpp
	src/Node_validate.cpp
	src/Wallet.cpp
	src/Farmer.cpp
	src/Harvester.cpp
	src/Router.cpp
	src/WebAPI.cpp
	src/OCL_VDF.cpp
	src/TimeLordRewards.cpp
)


target_include_directories(mmx_iface
	PUBLIC
		include
		generated/include
		generated/contract/include
		generated/operation/include
		generated/solution/include
		uint256_t
		exchange/generated/include
		exchange/include
)

target_include_directories(mmx_chiapos
	PUBLIC 
		src/chiapos 
	PRIVATE 
		chiapos/src 
		chiapos/lib/include 
		uint256_t
)

if(MSVC)

	target_include_directories(mmx_modules PUBLIC ${AUTOMY_BASIC_OPENCL_BINARY_DIR})
	target_include_directories(mmx_iface PUBLIC ${VNXBASE_BINARY_DIR})
	
	find_library(secp256k1_LIBRARY secp256k1 HINTS ${secp256k1_LIBRARIES})
	add_library(secp256k1 INTERFACE IMPORTED)
	set_target_properties(secp256k1 PROPERTIES INTERFACE_LINK_LIBRARIES "${secp256k1_LIBRARY}")
	target_include_directories(mmx_iface PUBLIC ${secp256k1_INCLUDE_DIR})

	set_target_properties(mmx_iface PROPERTIES LINK_OPTIONS "/NODEFAULTLIB:LIBCMT")
	set_target_properties(mmx_modules PROPERTIES LINK_OPTIONS "/NODEFAULTLIB:LIBCMT")

	set_target_properties(mmx_modules PROPERTIES ENABLE_EXPORTS 1)
	set_target_properties(mmx_modules PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS 1)	

endif()

target_link_libraries(mmx_iface uint256_t secp256k1 bech32 bls vnx_addons vnx_base)
target_link_libraries(mmx_modules vnx_rocksdb mmx_chiapos mmx_iface mmx_exchange)

if(OpenCL_FOUND)
	target_link_libraries(mmx_modules automy_basic_opencl)
	target_compile_definitions(mmx_modules PUBLIC WITH_OPENCL)
endif()

if(JEMALLOC_LIB)
	message(STATUS "Found jemalloc")
	target_link_libraries(mmx_modules ${JEMALLOC_LIB})
	target_compile_definitions(mmx_modules PUBLIC WITH_JEMALLOC)
endif()

add_executable(mmx src/mmx.cpp)
add_executable(mmx_node src/mmx_node.cpp)
add_executable(mmx_farmer src/mmx_farmer.cpp)
add_executable(mmx_wallet src/mmx_wallet.cpp)
add_executable(mmx_timelord src/mmx_timelord.cpp)
add_executable(mmx_harvester src/mmx_harvester.cpp)
add_executable(mmx_timelord_rewards src/mmx_timelord_rewards.cpp)

if(MSVC)
	set_target_properties(mmx PROPERTIES LINK_OPTIONS "/NODEFAULTLIB:LIBCMT")
endif()

target_link_libraries(mmx mmx_iface mmx_exchange)
target_link_libraries(mmx_node mmx_modules mmx_exchange)
target_link_libraries(mmx_farmer mmx_modules)
target_link_libraries(mmx_wallet mmx_modules)
target_link_libraries(mmx_timelord mmx_modules)
target_link_libraries(mmx_harvester mmx_modules)
target_link_libraries(mmx_timelord_rewards mmx_modules)

add_executable(tx_bench src/tx_bench.cpp $<TARGET_OBJECTS:uint256_t>)

target_link_libraries(tx_bench mmx_iface)

