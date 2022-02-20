
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_contract_PACKAGE_HXX_
#define INCLUDE_mmx_contract_PACKAGE_HXX_

#include <vnx/Type.h>

#include <mmx/package.hxx>
#include <vnx/package.hxx>

#ifdef MMX_CONTRACT_EXPORT_ENABLE
#include <mmx_contract_export.h>
#else
#ifndef MMX_CONTRACT_EXPORT
#define MMX_CONTRACT_EXPORT
#endif
#endif


namespace mmx {
namespace contract {


class Condition;
class Data;
class Locked;
class MultiSig;
class NFT;
class PubKey;
class PuzzleLock;
class Staking;
class Token;
class WebData;
struct compare_e;
struct condition_e;

MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_Condition; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_Data; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_Locked; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_MultiSig; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_NFT; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_PubKey; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_PuzzleLock; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_Staking; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_Token; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_WebData; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_compare_e; ///< \private
MMX_CONTRACT_EXPORT extern const vnx::TypeCode* const vnx_native_type_code_condition_e; ///< \private

} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::Condition& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::Data& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::Locked& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::MultiSig& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::NFT& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::PubKey& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::PuzzleLock& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::Staking& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::WebData& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::compare_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void read(TypeInput& in, ::mmx::contract::condition_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::mmx::contract::Condition& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::Data& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::Locked& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::MultiSig& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::NFT& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::PubKey& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::PuzzleLock& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::Staking& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::WebData& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::compare_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private
void write(TypeOutput& out, const ::mmx::contract::condition_e& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void read(std::istream& in, ::mmx::contract::Condition& value); ///< \private
void read(std::istream& in, ::mmx::contract::Data& value); ///< \private
void read(std::istream& in, ::mmx::contract::Locked& value); ///< \private
void read(std::istream& in, ::mmx::contract::MultiSig& value); ///< \private
void read(std::istream& in, ::mmx::contract::NFT& value); ///< \private
void read(std::istream& in, ::mmx::contract::PubKey& value); ///< \private
void read(std::istream& in, ::mmx::contract::PuzzleLock& value); ///< \private
void read(std::istream& in, ::mmx::contract::Staking& value); ///< \private
void read(std::istream& in, ::mmx::contract::Token& value); ///< \private
void read(std::istream& in, ::mmx::contract::WebData& value); ///< \private
void read(std::istream& in, ::mmx::contract::compare_e& value); ///< \private
void read(std::istream& in, ::mmx::contract::condition_e& value); ///< \private

void write(std::ostream& out, const ::mmx::contract::Condition& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::Data& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::Locked& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::MultiSig& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::NFT& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::PubKey& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::PuzzleLock& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::Staking& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::Token& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::WebData& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::compare_e& value); ///< \private
void write(std::ostream& out, const ::mmx::contract::condition_e& value); ///< \private

void accept(Visitor& visitor, const ::mmx::contract::Condition& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::Data& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::Locked& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::MultiSig& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::NFT& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::PubKey& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::PuzzleLock& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::Staking& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::Token& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::WebData& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::compare_e& value); ///< \private
void accept(Visitor& visitor, const ::mmx::contract::condition_e& value); ///< \private

/// \private
template<>
struct type<::mmx::contract::Condition> {
	void read(TypeInput& in, ::mmx::contract::Condition& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Condition& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Condition& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Condition& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Condition& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Condition& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::Data> {
	void read(TypeInput& in, ::mmx::contract::Data& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Data& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Data& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Data& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Data& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Data& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::Locked> {
	void read(TypeInput& in, ::mmx::contract::Locked& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Locked& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Locked& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Locked& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Locked& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Locked& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::MultiSig> {
	void read(TypeInput& in, ::mmx::contract::MultiSig& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::MultiSig& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::MultiSig& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::MultiSig& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::MultiSig& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::MultiSig& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::NFT> {
	void read(TypeInput& in, ::mmx::contract::NFT& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::NFT& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::NFT& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::NFT& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::NFT& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::NFT& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::PubKey> {
	void read(TypeInput& in, ::mmx::contract::PubKey& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::PubKey& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::PubKey& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::PubKey& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::PubKey& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::PubKey& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::PuzzleLock> {
	void read(TypeInput& in, ::mmx::contract::PuzzleLock& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::PuzzleLock& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::PuzzleLock& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::PuzzleLock& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::PuzzleLock& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::PuzzleLock& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::Staking> {
	void read(TypeInput& in, ::mmx::contract::Staking& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Staking& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Staking& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Staking& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Staking& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Staking& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::Token> {
	void read(TypeInput& in, ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::Token& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::Token& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::Token& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::Token& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::WebData> {
	void read(TypeInput& in, ::mmx::contract::WebData& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::WebData& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::WebData& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::WebData& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::WebData& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::WebData& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::compare_e> {
	void read(TypeInput& in, ::mmx::contract::compare_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::compare_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::compare_e& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::compare_e& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::compare_e& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::compare_e& value, bool special = false);
};

/// \private
template<>
struct type<::mmx::contract::condition_e> {
	void read(TypeInput& in, ::mmx::contract::condition_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::mmx::contract::condition_e& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::mmx::contract::condition_e& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::mmx::contract::condition_e& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::mmx::contract::condition_e& value) {
		vnx::accept(visitor, value);
	}
	const TypeCode* get_type_code();
	void create_dynamic_code(std::vector<uint16_t>& code);
	void create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::contract::condition_e& value, bool special = false);
};


} // namespace vnx

#endif // INCLUDE_mmx_contract_PACKAGE_HXX_
