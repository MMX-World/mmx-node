
// AUTO GENERATED by vnxcppcodegen

#include <mmx/exchange/package.hxx>
#include <mmx/exchange/Server_ping.hxx>
#include <mmx/exchange/Server_ping_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {
namespace exchange {


const vnx::Hash64 Server_ping::VNX_TYPE_HASH(0x7a04c726acd61ce8ull);
const vnx::Hash64 Server_ping::VNX_CODE_HASH(0x38cd8fbfa585a286ull);

vnx::Hash64 Server_ping::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Server_ping::get_type_name() const {
	return "mmx.exchange.Server.ping";
}

const vnx::TypeCode* Server_ping::get_type_code() const {
	return mmx::exchange::vnx_native_type_code_Server_ping;
}

std::shared_ptr<Server_ping> Server_ping::create() {
	return std::make_shared<Server_ping>();
}

std::shared_ptr<vnx::Value> Server_ping::clone() const {
	return std::make_shared<Server_ping>(*this);
}

void Server_ping::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Server_ping::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Server_ping::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::exchange::vnx_native_type_code_Server_ping;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, client);
	_visitor.type_end(*_type_code);
}

void Server_ping::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.exchange.Server.ping\"";
	_out << ", \"client\": "; vnx::write(_out, client);
	_out << "}";
}

void Server_ping::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Server_ping::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.exchange.Server.ping";
	_object["client"] = client;
	return _object;
}

void Server_ping::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "client") {
			_entry.second.to(client);
		}
	}
}

vnx::Variant Server_ping::get_field(const std::string& _name) const {
	if(_name == "client") {
		return vnx::Variant(client);
	}
	return vnx::Variant();
}

void Server_ping::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "client") {
		_value.to(client);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Server_ping& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Server_ping& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Server_ping::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Server_ping::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.exchange.Server.ping";
	type_code->type_hash = vnx::Hash64(0x7a04c726acd61ce8ull);
	type_code->code_hash = vnx::Hash64(0x38cd8fbfa585a286ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::exchange::Server_ping);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Server_ping>(); };
	type_code->is_const = true;
	type_code->return_type = ::mmx::exchange::Server_ping_return::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "client";
		field.code = {4};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx
} // namespace exchange


namespace vnx {

void read(TypeInput& in, ::mmx::exchange::Server_ping& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.client, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::exchange::Server_ping& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::exchange::vnx_native_type_code_Server_ping;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::exchange::Server_ping>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.client);
}

void read(std::istream& in, ::mmx::exchange::Server_ping& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::exchange::Server_ping& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::exchange::Server_ping& value) {
	value.accept(visitor);
}

} // vnx
