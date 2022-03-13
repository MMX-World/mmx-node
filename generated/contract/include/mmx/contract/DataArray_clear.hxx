
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_contract_DataArray_clear_HXX_
#define INCLUDE_mmx_contract_DataArray_clear_HXX_

#include <mmx/contract/package.hxx>
#include <vnx/Value.h>


namespace mmx {
namespace contract {

class MMX_CONTRACT_EXPORT DataArray_clear : public ::vnx::Value {
public:
	
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x529ca01cf4898deull;
	
	DataArray_clear() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<DataArray_clear> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const DataArray_clear& _value);
	friend std::istream& operator>>(std::istream& _in, DataArray_clear& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};

template<typename T>
void DataArray_clear::accept_generic(T& _visitor) const {
	_visitor.template type_begin<DataArray_clear>(0);
	_visitor.template type_end<DataArray_clear>(0);
}


} // namespace mmx
} // namespace contract


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_contract_DataArray_clear_HXX_
