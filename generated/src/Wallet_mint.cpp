
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/Wallet_mint.hxx>
#include <mmx/Wallet_mint_return.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/spend_options_t.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 Wallet_mint::VNX_TYPE_HASH(0x3c52811b834fbd3eull);
const vnx::Hash64 Wallet_mint::VNX_CODE_HASH(0xc8a13d2689256a74ull);

vnx::Hash64 Wallet_mint::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Wallet_mint::get_type_name() const {
	return "mmx.Wallet.mint";
}

const vnx::TypeCode* Wallet_mint::get_type_code() const {
	return mmx::vnx_native_type_code_Wallet_mint;
}

std::shared_ptr<Wallet_mint> Wallet_mint::create() {
	return std::make_shared<Wallet_mint>();
}

std::shared_ptr<vnx::Value> Wallet_mint::clone() const {
	return std::make_shared<Wallet_mint>(*this);
}

void Wallet_mint::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Wallet_mint::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Wallet_mint::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_Wallet_mint;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, index);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, amount);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, dst_addr);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, currency);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, options);
	_visitor.type_end(*_type_code);
}

void Wallet_mint::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.Wallet.mint\"";
	_out << ", \"index\": "; vnx::write(_out, index);
	_out << ", \"amount\": "; vnx::write(_out, amount);
	_out << ", \"dst_addr\": "; vnx::write(_out, dst_addr);
	_out << ", \"currency\": "; vnx::write(_out, currency);
	_out << ", \"options\": "; vnx::write(_out, options);
	_out << "}";
}

void Wallet_mint::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Wallet_mint::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.Wallet.mint";
	_object["index"] = index;
	_object["amount"] = amount;
	_object["dst_addr"] = dst_addr;
	_object["currency"] = currency;
	_object["options"] = options;
	return _object;
}

void Wallet_mint::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "amount") {
			_entry.second.to(amount);
		} else if(_entry.first == "currency") {
			_entry.second.to(currency);
		} else if(_entry.first == "dst_addr") {
			_entry.second.to(dst_addr);
		} else if(_entry.first == "index") {
			_entry.second.to(index);
		} else if(_entry.first == "options") {
			_entry.second.to(options);
		}
	}
}

vnx::Variant Wallet_mint::get_field(const std::string& _name) const {
	if(_name == "index") {
		return vnx::Variant(index);
	}
	if(_name == "amount") {
		return vnx::Variant(amount);
	}
	if(_name == "dst_addr") {
		return vnx::Variant(dst_addr);
	}
	if(_name == "currency") {
		return vnx::Variant(currency);
	}
	if(_name == "options") {
		return vnx::Variant(options);
	}
	return vnx::Variant();
}

void Wallet_mint::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "index") {
		_value.to(index);
	} else if(_name == "amount") {
		_value.to(amount);
	} else if(_name == "dst_addr") {
		_value.to(dst_addr);
	} else if(_name == "currency") {
		_value.to(currency);
	} else if(_name == "options") {
		_value.to(options);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Wallet_mint& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Wallet_mint& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Wallet_mint::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Wallet_mint::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.Wallet.mint";
	type_code->type_hash = vnx::Hash64(0x3c52811b834fbd3eull);
	type_code->code_hash = vnx::Hash64(0xc8a13d2689256a74ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::Wallet_mint);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Wallet_mint>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::mmx::spend_options_t::static_get_type_code();
	type_code->is_const = true;
	type_code->return_type = ::mmx::Wallet_mint_return::static_get_type_code();
	type_code->fields.resize(5);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "index";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 8;
		field.name = "amount";
		field.code = {4};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "dst_addr";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "currency";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "options";
		field.code = {19, 0};
	}
	type_code->permission = "mmx.permission_e.SPENDING";
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::Wallet_mint& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.index, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.amount, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 2: vnx::read(in, value.dst_addr, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.currency, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.options, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::Wallet_mint& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_Wallet_mint;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::Wallet_mint>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(12);
	vnx::write_value(_buf + 0, value.index);
	vnx::write_value(_buf + 4, value.amount);
	vnx::write(out, value.dst_addr, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.currency, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.options, type_code, type_code->fields[4].code.data());
}

void read(std::istream& in, ::mmx::Wallet_mint& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::Wallet_mint& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::Wallet_mint& value) {
	value.accept(visitor);
}

} // vnx
