
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_operation_Revoke_HXX_
#define INCLUDE_mmx_operation_Revoke_HXX_

#include <mmx/operation/package.hxx>
#include <mmx/Operation.hxx>
#include <mmx/hash_t.hpp>


namespace mmx {
namespace operation {

class MMX_OPERATION_EXPORT Revoke : public ::mmx::Operation {
public:
	
	::mmx::hash_t txid;
	
	typedef ::mmx::Operation Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xa8f48fce29a667d8ull;
	
	Revoke() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<Revoke> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const Revoke& _value);
	friend std::istream& operator>>(std::istream& _in, Revoke& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method) override;
	
};

template<typename T>
void Revoke::accept_generic(T& _visitor) const {
	_visitor.template type_begin<Revoke>(4);
	_visitor.type_field("version", 0); _visitor.accept(version);
	_visitor.type_field("address", 1); _visitor.accept(address);
	_visitor.type_field("solution", 2); _visitor.accept(solution);
	_visitor.type_field("txid", 3); _visitor.accept(txid);
	_visitor.template type_end<Revoke>(4);
}


} // namespace mmx
} // namespace operation


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_operation_Revoke_HXX_
