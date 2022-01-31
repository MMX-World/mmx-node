
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_uint_fraction_t_HXX_
#define INCLUDE_mmx_uint_fraction_t_HXX_

#include <vnx/Type.h>
#include <mmx/package.hxx>


namespace mmx {

struct uint_fraction_t {
	
	
	uint32_t value = 0;
	uint32_t inverse = 1;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xe5632136b5a3ed5aull;
	
	uint_fraction_t() {}
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	static std::shared_ptr<uint_fraction_t> create();
	std::shared_ptr<uint_fraction_t> clone() const;
	
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
	
	friend std::ostream& operator<<(std::ostream& _out, const uint_fraction_t& _value);
	friend std::istream& operator>>(std::istream& _in, uint_fraction_t& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void uint_fraction_t::accept_generic(T& _visitor) const {
	_visitor.template type_begin<uint_fraction_t>(2);
	_visitor.type_field("value", 0); _visitor.accept(value);
	_visitor.type_field("inverse", 1); _visitor.accept(inverse);
	_visitor.template type_end<uint_fraction_t>(2);
}


} // namespace mmx


namespace vnx {

template<>
struct is_equivalent<::mmx::uint_fraction_t> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_mmx_uint_fraction_t_HXX_
