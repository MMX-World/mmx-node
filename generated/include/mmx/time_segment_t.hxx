
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_time_segment_t_HXX_
#define INCLUDE_mmx_time_segment_t_HXX_

#include <vnx/Type.h>
#include <mmx/package.hxx>
#include <mmx/hash_t.hpp>


namespace mmx {

struct MMX_EXPORT time_segment_t {
	
	
	uint32_t num_iters = 0;
	std::array<::mmx::hash_t, 2> output = {};
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x344b7baf0798fe2aull;
	
	time_segment_t() {}
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	static std::shared_ptr<time_segment_t> create();
	std::shared_ptr<time_segment_t> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const time_segment_t& _value);
	friend std::istream& operator>>(std::istream& _in, time_segment_t& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void time_segment_t::accept_generic(T& _visitor) const {
	_visitor.template type_begin<time_segment_t>(2);
	_visitor.type_field("num_iters", 0); _visitor.accept(num_iters);
	_visitor.type_field("output", 1); _visitor.accept(output);
	_visitor.template type_end<time_segment_t>(2);
}


} // namespace mmx


namespace vnx {

template<>
struct is_equivalent<::mmx::time_segment_t> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_mmx_time_segment_t_HXX_
