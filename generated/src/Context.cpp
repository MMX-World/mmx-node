
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/Context.hxx>
#include <mmx/Contract.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/hash_t.hpp>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 Context::VNX_TYPE_HASH(0x4c0f99bb7370b6ccull);
const vnx::Hash64 Context::VNX_CODE_HASH(0xec97b93d30f43851ull);

vnx::Hash64 Context::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Context::get_type_name() const {
	return "mmx.Context";
}

const vnx::TypeCode* Context::get_type_code() const {
	return mmx::vnx_native_type_code_Context;
}

std::shared_ptr<Context> Context::create() {
	return std::make_shared<Context>();
}

std::shared_ptr<vnx::Value> Context::clone() const {
	return std::make_shared<Context>(*this);
}

void Context::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Context::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Context::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_Context;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, txid);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, height);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, depends);
	_visitor.type_end(*_type_code);
}

void Context::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.Context\"";
	_out << ", \"txid\": "; vnx::write(_out, txid);
	_out << ", \"height\": "; vnx::write(_out, height);
	_out << ", \"depends\": "; vnx::write(_out, depends);
	_out << "}";
}

void Context::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Context::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.Context";
	_object["txid"] = txid;
	_object["height"] = height;
	_object["depends"] = depends;
	return _object;
}

void Context::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "depends") {
			_entry.second.to(depends);
		} else if(_entry.first == "height") {
			_entry.second.to(height);
		} else if(_entry.first == "txid") {
			_entry.second.to(txid);
		}
	}
}

vnx::Variant Context::get_field(const std::string& _name) const {
	if(_name == "txid") {
		return vnx::Variant(txid);
	}
	if(_name == "height") {
		return vnx::Variant(height);
	}
	if(_name == "depends") {
		return vnx::Variant(depends);
	}
	return vnx::Variant();
}

void Context::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "txid") {
		_value.to(txid);
	} else if(_name == "height") {
		_value.to(height);
	} else if(_name == "depends") {
		_value.to(depends);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Context& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Context& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Context::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Context::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.Context";
	type_code->type_hash = vnx::Hash64(0x4c0f99bb7370b6ccull);
	type_code->code_hash = vnx::Hash64(0xec97b93d30f43851ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::Context);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Context>(); };
	type_code->fields.resize(3);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "txid";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 4;
		field.name = "height";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "depends";
		field.code = {13, 5, 11, 32, 1, 16};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::Context& value, const TypeCode* type_code, const uint16_t* code) {
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
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.height, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.txid, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.depends, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::Context& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_Context;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::Context>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.height);
	vnx::write(out, value.txid, type_code, type_code->fields[0].code.data());
	vnx::write(out, value.depends, type_code, type_code->fields[2].code.data());
}

void read(std::istream& in, ::mmx::Context& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::Context& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::Context& value) {
	value.accept(visitor);
}

} // vnx
