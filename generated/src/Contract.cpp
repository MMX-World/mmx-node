
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/Contract.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Context.hxx>
#include <mmx/Contract_calc_cost.hxx>
#include <mmx/Contract_calc_cost_return.hxx>
#include <mmx/Contract_calc_hash.hxx>
#include <mmx/Contract_calc_hash_return.hxx>
#include <mmx/Contract_get_dependency.hxx>
#include <mmx/Contract_get_dependency_return.hxx>
#include <mmx/Contract_get_owner.hxx>
#include <mmx/Contract_get_owner_return.hxx>
#include <mmx/Contract_get_parties.hxx>
#include <mmx/Contract_get_parties_return.hxx>
#include <mmx/Contract_is_spendable.hxx>
#include <mmx/Contract_is_spendable_return.hxx>
#include <mmx/Contract_is_valid.hxx>
#include <mmx/Contract_is_valid_return.hxx>
#include <mmx/Contract_transfer.hxx>
#include <mmx/Contract_transfer_return.hxx>
#include <mmx/Contract_validate.hxx>
#include <mmx/Contract_validate_return.hxx>
#include <mmx/Operation.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/hash_t.hpp>
#include <mmx/tx_out_t.hxx>
#include <mmx/utxo_t.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 Contract::VNX_TYPE_HASH(0x26b896ae8c415285ull);
const vnx::Hash64 Contract::VNX_CODE_HASH(0x2fd731fcdf7b88aull);

vnx::Hash64 Contract::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Contract::get_type_name() const {
	return "mmx.Contract";
}

const vnx::TypeCode* Contract::get_type_code() const {
	return mmx::vnx_native_type_code_Contract;
}

std::shared_ptr<Contract> Contract::create() {
	return std::make_shared<Contract>();
}

std::shared_ptr<vnx::Value> Contract::clone() const {
	return std::make_shared<Contract>(*this);
}

void Contract::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Contract::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Contract::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_Contract;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, version);
	_visitor.type_end(*_type_code);
}

void Contract::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.Contract\"";
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << "}";
}

void Contract::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Contract::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.Contract";
	_object["version"] = version;
	return _object;
}

void Contract::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "version") {
			_entry.second.to(version);
		}
	}
}

vnx::Variant Contract::get_field(const std::string& _name) const {
	if(_name == "version") {
		return vnx::Variant(version);
	}
	return vnx::Variant();
}

void Contract::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "version") {
		_value.to(version);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Contract& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Contract& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Contract::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Contract::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.Contract";
	type_code->type_hash = vnx::Hash64(0x26b896ae8c415285ull);
	type_code->code_hash = vnx::Hash64(0x2fd731fcdf7b88aull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::Contract);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Contract>(); };
	type_code->methods.resize(9);
	type_code->methods[0] = ::mmx::Contract_calc_cost::static_get_type_code();
	type_code->methods[1] = ::mmx::Contract_calc_hash::static_get_type_code();
	type_code->methods[2] = ::mmx::Contract_get_dependency::static_get_type_code();
	type_code->methods[3] = ::mmx::Contract_get_owner::static_get_type_code();
	type_code->methods[4] = ::mmx::Contract_get_parties::static_get_type_code();
	type_code->methods[5] = ::mmx::Contract_is_spendable::static_get_type_code();
	type_code->methods[6] = ::mmx::Contract_is_valid::static_get_type_code();
	type_code->methods[7] = ::mmx::Contract_transfer::static_get_type_code();
	type_code->methods[8] = ::mmx::Contract_validate::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "version";
		field.code = {3};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> Contract::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
		case 0xb23d047adf8b2612ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_calc_cost>(_method);
			auto _return_value = ::mmx::Contract_calc_cost_return::create();
			_return_value->_ret_0 = calc_cost(_args->params);
			return _return_value;
		}
		case 0x622fcf1cba1952edull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_calc_hash>(_method);
			auto _return_value = ::mmx::Contract_calc_hash_return::create();
			_return_value->_ret_0 = calc_hash();
			return _return_value;
		}
		case 0x989dd3da956ebbd0ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_get_dependency>(_method);
			auto _return_value = ::mmx::Contract_get_dependency_return::create();
			_return_value->_ret_0 = get_dependency();
			return _return_value;
		}
		case 0x8fe2c64fdc8f0680ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_get_owner>(_method);
			auto _return_value = ::mmx::Contract_get_owner_return::create();
			_return_value->_ret_0 = get_owner();
			return _return_value;
		}
		case 0x6f7a46e940a18a57ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_get_parties>(_method);
			auto _return_value = ::mmx::Contract_get_parties_return::create();
			_return_value->_ret_0 = get_parties();
			return _return_value;
		}
		case 0xd12879d16cac3d5cull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_is_spendable>(_method);
			auto _return_value = ::mmx::Contract_is_spendable_return::create();
			_return_value->_ret_0 = is_spendable(_args->utxo, _args->context);
			return _return_value;
		}
		case 0xe3adf9b29a723217ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_is_valid>(_method);
			auto _return_value = ::mmx::Contract_is_valid_return::create();
			_return_value->_ret_0 = is_valid();
			return _return_value;
		}
		case 0xd41bec275faff1ffull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_transfer>(_method);
			auto _return_value = ::mmx::Contract_transfer_return::create();
			transfer(_args->new_owner);
			return _return_value;
		}
		case 0xc2126a44901c8d52ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_validate>(_method);
			auto _return_value = ::mmx::Contract_validate_return::create();
			_return_value->_ret_0 = validate(_args->operation, _args->context);
			return _return_value;
		}
	}
	return nullptr;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::Contract& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.version, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::Contract& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_Contract;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::Contract>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.version);
}

void read(std::istream& in, ::mmx::Contract& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::Contract& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::Contract& value) {
	value.accept(visitor);
}

} // vnx
