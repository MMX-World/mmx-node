
// AUTO GENERATED by vnxcppcodegen

#include <mmx/contract/package.hxx>
#include <mmx/contract/MutableRelay_lock_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {
namespace contract {


const vnx::Hash64 MutableRelay_lock_return::VNX_TYPE_HASH(0x238c82efab201ab5ull);
const vnx::Hash64 MutableRelay_lock_return::VNX_CODE_HASH(0x276b3de33c481920ull);

vnx::Hash64 MutableRelay_lock_return::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string MutableRelay_lock_return::get_type_name() const {
	return "mmx.contract.MutableRelay.lock.return";
}

const vnx::TypeCode* MutableRelay_lock_return::get_type_code() const {
	return mmx::contract::vnx_native_type_code_MutableRelay_lock_return;
}

std::shared_ptr<MutableRelay_lock_return> MutableRelay_lock_return::create() {
	return std::make_shared<MutableRelay_lock_return>();
}

std::shared_ptr<vnx::Value> MutableRelay_lock_return::clone() const {
	return std::make_shared<MutableRelay_lock_return>(*this);
}

void MutableRelay_lock_return::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void MutableRelay_lock_return::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void MutableRelay_lock_return::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::contract::vnx_native_type_code_MutableRelay_lock_return;
	_visitor.type_begin(*_type_code);
	_visitor.type_end(*_type_code);
}

void MutableRelay_lock_return::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.contract.MutableRelay.lock.return\"";
	_out << "}";
}

void MutableRelay_lock_return::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object MutableRelay_lock_return::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.contract.MutableRelay.lock.return";
	return _object;
}

void MutableRelay_lock_return::from_object(const vnx::Object& _object) {
}

vnx::Variant MutableRelay_lock_return::get_field(const std::string& _name) const {
	return vnx::Variant();
}

void MutableRelay_lock_return::set_field(const std::string& _name, const vnx::Variant& _value) {
}

/// \private
std::ostream& operator<<(std::ostream& _out, const MutableRelay_lock_return& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, MutableRelay_lock_return& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* MutableRelay_lock_return::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> MutableRelay_lock_return::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.contract.MutableRelay.lock.return";
	type_code->type_hash = vnx::Hash64(0x238c82efab201ab5ull);
	type_code->code_hash = vnx::Hash64(0x276b3de33c481920ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_return = true;
	type_code->native_size = sizeof(::mmx::contract::MutableRelay_lock_return);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<MutableRelay_lock_return>(); };
	type_code->build();
	return type_code;
}


} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::MutableRelay_lock_return& value, const TypeCode* type_code, const uint16_t* code) {
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

void write(TypeOutput& out, const ::mmx::contract::MutableRelay_lock_return& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::contract::vnx_native_type_code_MutableRelay_lock_return;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::contract::MutableRelay_lock_return>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
}

void read(std::istream& in, ::mmx::contract::MutableRelay_lock_return& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::contract::MutableRelay_lock_return& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::contract::MutableRelay_lock_return& value) {
	value.accept(visitor);
}

} // vnx
