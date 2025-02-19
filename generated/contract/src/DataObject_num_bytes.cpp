
// AUTO GENERATED by vnxcppcodegen

#include <mmx/contract/package.hxx>
#include <mmx/contract/DataObject_num_bytes.hxx>
#include <mmx/contract/DataObject_num_bytes_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {
namespace contract {


const vnx::Hash64 DataObject_num_bytes::VNX_TYPE_HASH(0x773759a35294d1d5ull);
const vnx::Hash64 DataObject_num_bytes::VNX_CODE_HASH(0x7d66fcd9c84b9cb2ull);

vnx::Hash64 DataObject_num_bytes::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string DataObject_num_bytes::get_type_name() const {
	return "mmx.contract.DataObject.num_bytes";
}

const vnx::TypeCode* DataObject_num_bytes::get_type_code() const {
	return mmx::contract::vnx_native_type_code_DataObject_num_bytes;
}

std::shared_ptr<DataObject_num_bytes> DataObject_num_bytes::create() {
	return std::make_shared<DataObject_num_bytes>();
}

std::shared_ptr<vnx::Value> DataObject_num_bytes::clone() const {
	return std::make_shared<DataObject_num_bytes>(*this);
}

void DataObject_num_bytes::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void DataObject_num_bytes::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void DataObject_num_bytes::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::contract::vnx_native_type_code_DataObject_num_bytes;
	_visitor.type_begin(*_type_code);
	_visitor.type_end(*_type_code);
}

void DataObject_num_bytes::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.contract.DataObject.num_bytes\"";
	_out << "}";
}

void DataObject_num_bytes::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object DataObject_num_bytes::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.contract.DataObject.num_bytes";
	return _object;
}

void DataObject_num_bytes::from_object(const vnx::Object& _object) {
}

vnx::Variant DataObject_num_bytes::get_field(const std::string& _name) const {
	return vnx::Variant();
}

void DataObject_num_bytes::set_field(const std::string& _name, const vnx::Variant& _value) {
}

/// \private
std::ostream& operator<<(std::ostream& _out, const DataObject_num_bytes& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, DataObject_num_bytes& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* DataObject_num_bytes::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> DataObject_num_bytes::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.contract.DataObject.num_bytes";
	type_code->type_hash = vnx::Hash64(0x773759a35294d1d5ull);
	type_code->code_hash = vnx::Hash64(0x7d66fcd9c84b9cb2ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::contract::DataObject_num_bytes);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<DataObject_num_bytes>(); };
	type_code->is_const = true;
	type_code->return_type = ::mmx::contract::DataObject_num_bytes_return::static_get_type_code();
	type_code->build();
	return type_code;
}


} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::DataObject_num_bytes& value, const TypeCode* type_code, const uint16_t* code) {
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

void write(TypeOutput& out, const ::mmx::contract::DataObject_num_bytes& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::contract::vnx_native_type_code_DataObject_num_bytes;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::contract::DataObject_num_bytes>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
}

void read(std::istream& in, ::mmx::contract::DataObject_num_bytes& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::contract::DataObject_num_bytes& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::contract::DataObject_num_bytes& value) {
	value.accept(visitor);
}

} // vnx
