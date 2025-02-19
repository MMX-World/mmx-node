
// AUTO GENERATED by vnxcppcodegen

#include <mmx/contract/package.hxx>
#include <mmx/contract/DataArray_get_parties.hxx>
#include <mmx/contract/DataArray_get_parties_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {
namespace contract {


const vnx::Hash64 DataArray_get_parties::VNX_TYPE_HASH(0xc3ecbeaf6e2182d1ull);
const vnx::Hash64 DataArray_get_parties::VNX_CODE_HASH(0x434910939d7053aeull);

vnx::Hash64 DataArray_get_parties::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string DataArray_get_parties::get_type_name() const {
	return "mmx.contract.DataArray.get_parties";
}

const vnx::TypeCode* DataArray_get_parties::get_type_code() const {
	return mmx::contract::vnx_native_type_code_DataArray_get_parties;
}

std::shared_ptr<DataArray_get_parties> DataArray_get_parties::create() {
	return std::make_shared<DataArray_get_parties>();
}

std::shared_ptr<vnx::Value> DataArray_get_parties::clone() const {
	return std::make_shared<DataArray_get_parties>(*this);
}

void DataArray_get_parties::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void DataArray_get_parties::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void DataArray_get_parties::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::contract::vnx_native_type_code_DataArray_get_parties;
	_visitor.type_begin(*_type_code);
	_visitor.type_end(*_type_code);
}

void DataArray_get_parties::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.contract.DataArray.get_parties\"";
	_out << "}";
}

void DataArray_get_parties::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object DataArray_get_parties::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.contract.DataArray.get_parties";
	return _object;
}

void DataArray_get_parties::from_object(const vnx::Object& _object) {
}

vnx::Variant DataArray_get_parties::get_field(const std::string& _name) const {
	return vnx::Variant();
}

void DataArray_get_parties::set_field(const std::string& _name, const vnx::Variant& _value) {
}

/// \private
std::ostream& operator<<(std::ostream& _out, const DataArray_get_parties& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, DataArray_get_parties& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* DataArray_get_parties::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> DataArray_get_parties::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.contract.DataArray.get_parties";
	type_code->type_hash = vnx::Hash64(0xc3ecbeaf6e2182d1ull);
	type_code->code_hash = vnx::Hash64(0x434910939d7053aeull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::contract::DataArray_get_parties);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<DataArray_get_parties>(); };
	type_code->is_const = true;
	type_code->return_type = ::mmx::contract::DataArray_get_parties_return::static_get_type_code();
	type_code->build();
	return type_code;
}


} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::DataArray_get_parties& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	in.read(type_code->total_field_size);
	if(type_code->is_matched) {
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::contract::DataArray_get_parties& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::contract::vnx_native_type_code_DataArray_get_parties;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::contract::DataArray_get_parties>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
}

void read(std::istream& in, ::mmx::contract::DataArray_get_parties& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::contract::DataArray_get_parties& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::contract::DataArray_get_parties& value) {
	value.accept(visitor);
}

} // vnx
