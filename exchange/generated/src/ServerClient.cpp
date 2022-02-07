
// AUTO GENERATED by vnxcppcodegen

#include <mmx/exchange/package.hxx>
#include <mmx/exchange/ServerClient.hxx>
#include <mmx/Block.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/exchange/Server_approve.hxx>
#include <mmx/exchange/Server_approve_return.hxx>
#include <mmx/exchange/Server_cancel.hxx>
#include <mmx/exchange/Server_cancel_return.hxx>
#include <mmx/exchange/Server_execute.hxx>
#include <mmx/exchange/Server_execute_return.hxx>
#include <mmx/exchange/Server_get_history.hxx>
#include <mmx/exchange/Server_get_history_return.hxx>
#include <mmx/exchange/Server_get_orders.hxx>
#include <mmx/exchange/Server_get_orders_return.hxx>
#include <mmx/exchange/Server_get_price.hxx>
#include <mmx/exchange/Server_get_price_return.hxx>
#include <mmx/exchange/Server_get_trade_pairs.hxx>
#include <mmx/exchange/Server_get_trade_pairs_return.hxx>
#include <mmx/exchange/Server_match.hxx>
#include <mmx/exchange/Server_match_return.hxx>
#include <mmx/exchange/Server_ping.hxx>
#include <mmx/exchange/Server_ping_return.hxx>
#include <mmx/exchange/Server_place.hxx>
#include <mmx/exchange/Server_place_return.hxx>
#include <mmx/exchange/Server_reject.hxx>
#include <mmx/exchange/Server_reject_return.hxx>
#include <mmx/exchange/amount_t.hxx>
#include <mmx/exchange/limit_order_t.hxx>
#include <mmx/exchange/matched_order_t.hxx>
#include <mmx/exchange/order_t.hxx>
#include <mmx/exchange/trade_entry_t.hxx>
#include <mmx/exchange/trade_order_t.hxx>
#include <mmx/exchange/trade_pair_t.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/txio_key_t.hxx>
#include <mmx/ulong_fraction_t.hxx>
#include <vnx/ModuleInterface_vnx_get_config.hxx>
#include <vnx/ModuleInterface_vnx_get_config_return.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info_return.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code_return.hxx>
#include <vnx/ModuleInterface_vnx_restart.hxx>
#include <vnx/ModuleInterface_vnx_restart_return.hxx>
#include <vnx/ModuleInterface_vnx_self_test.hxx>
#include <vnx/ModuleInterface_vnx_self_test_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config.hxx>
#include <vnx/ModuleInterface_vnx_set_config_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_stop.hxx>
#include <vnx/ModuleInterface_vnx_stop_return.hxx>
#include <vnx/TopicPtr.hpp>
#include <vnx/addons/MsgServer.h>

#include <vnx/Generic.hxx>
#include <vnx/vnx.h>


namespace mmx {
namespace exchange {

ServerClient::ServerClient(const std::string& service_name)
	:	Client::Client(vnx::Hash64(service_name))
{
}

ServerClient::ServerClient(vnx::Hash64 service_addr)
	:	Client::Client(service_addr)
{
}

::vnx::Object ServerClient::vnx_get_config_object() {
	auto _method = ::vnx::ModuleInterface_vnx_get_config_object::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::Object>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

::vnx::Variant ServerClient::vnx_get_config(const std::string& name) {
	auto _method = ::vnx::ModuleInterface_vnx_get_config::create();
	_method->name = name;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::Variant>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

void ServerClient::vnx_set_config_object(const ::vnx::Object& config) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config_object::create();
	_method->config = config;
	vnx_request(_method, false);
}

void ServerClient::vnx_set_config_object_async(const ::vnx::Object& config) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config_object::create();
	_method->config = config;
	vnx_request(_method, true);
}

void ServerClient::vnx_set_config(const std::string& name, const ::vnx::Variant& value) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config::create();
	_method->name = name;
	_method->value = value;
	vnx_request(_method, false);
}

void ServerClient::vnx_set_config_async(const std::string& name, const ::vnx::Variant& value) {
	auto _method = ::vnx::ModuleInterface_vnx_set_config::create();
	_method->name = name;
	_method->value = value;
	vnx_request(_method, true);
}

::vnx::TypeCode ServerClient::vnx_get_type_code() {
	auto _method = ::vnx::ModuleInterface_vnx_get_type_code::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::vnx::TypeCode>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

std::shared_ptr<const ::vnx::ModuleInfo> ServerClient::vnx_get_module_info() {
	auto _method = ::vnx::ModuleInterface_vnx_get_module_info::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_get_module_info_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::shared_ptr<const ::vnx::ModuleInfo>>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

void ServerClient::vnx_restart() {
	auto _method = ::vnx::ModuleInterface_vnx_restart::create();
	vnx_request(_method, false);
}

void ServerClient::vnx_restart_async() {
	auto _method = ::vnx::ModuleInterface_vnx_restart::create();
	vnx_request(_method, true);
}

void ServerClient::vnx_stop() {
	auto _method = ::vnx::ModuleInterface_vnx_stop::create();
	vnx_request(_method, false);
}

void ServerClient::vnx_stop_async() {
	auto _method = ::vnx::ModuleInterface_vnx_stop::create();
	vnx_request(_method, true);
}

vnx::bool_t ServerClient::vnx_self_test() {
	auto _method = ::vnx::ModuleInterface_vnx_self_test::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::vnx::ModuleInterface_vnx_self_test_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::bool_t>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

void ServerClient::execute(std::shared_ptr<const ::mmx::Transaction> tx) {
	auto _method = ::mmx::exchange::Server_execute::create();
	_method->tx = tx;
	vnx_request(_method, false);
}

void ServerClient::execute_async(std::shared_ptr<const ::mmx::Transaction> tx) {
	auto _method = ::mmx::exchange::Server_execute::create();
	_method->tx = tx;
	vnx_request(_method, true);
}

::mmx::exchange::matched_order_t ServerClient::match(const ::mmx::exchange::trade_order_t& order) {
	auto _method = ::mmx::exchange::Server_match::create();
	_method->order = order;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_match_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::mmx::exchange::matched_order_t>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

std::vector<::mmx::exchange::trade_pair_t> ServerClient::get_trade_pairs() {
	auto _method = ::mmx::exchange::Server_get_trade_pairs::create();
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_get_trade_pairs_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::exchange::trade_pair_t>>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

std::vector<::mmx::exchange::order_t> ServerClient::get_orders(const ::mmx::exchange::trade_pair_t& pair, const int32_t& limit) {
	auto _method = ::mmx::exchange::Server_get_orders::create();
	_method->pair = pair;
	_method->limit = limit;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_get_orders_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::exchange::order_t>>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

std::vector<::mmx::exchange::trade_entry_t> ServerClient::get_history(const ::mmx::exchange::trade_pair_t& pair, const int32_t& limit) {
	auto _method = ::mmx::exchange::Server_get_history::create();
	_method->pair = pair;
	_method->limit = limit;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_get_history_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::exchange::trade_entry_t>>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

::mmx::ulong_fraction_t ServerClient::get_price(const ::mmx::addr_t& want, const ::mmx::exchange::amount_t& have) {
	auto _method = ::mmx::exchange::Server_get_price::create();
	_method->want = want;
	_method->have = have;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_get_price_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<::mmx::ulong_fraction_t>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

std::vector<::mmx::exchange::order_t> ServerClient::place(const uint64_t& client, const ::mmx::exchange::trade_pair_t& pair, const ::mmx::exchange::limit_order_t& order) {
	auto _method = ::mmx::exchange::Server_place::create();
	_method->client = client;
	_method->pair = pair;
	_method->order = order;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::mmx::exchange::Server_place_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<std::vector<::mmx::exchange::order_t>>();
	} else {
		throw std::logic_error("ServerClient: invalid return value");
	}
}

void ServerClient::cancel(const uint64_t& client, const std::vector<::mmx::txio_key_t>& orders) {
	auto _method = ::mmx::exchange::Server_cancel::create();
	_method->client = client;
	_method->orders = orders;
	vnx_request(_method, false);
}

void ServerClient::cancel_async(const uint64_t& client, const std::vector<::mmx::txio_key_t>& orders) {
	auto _method = ::mmx::exchange::Server_cancel::create();
	_method->client = client;
	_method->orders = orders;
	vnx_request(_method, true);
}

void ServerClient::reject(const uint64_t& client, const ::mmx::hash_t& txid) {
	auto _method = ::mmx::exchange::Server_reject::create();
	_method->client = client;
	_method->txid = txid;
	vnx_request(_method, false);
}

void ServerClient::reject_async(const uint64_t& client, const ::mmx::hash_t& txid) {
	auto _method = ::mmx::exchange::Server_reject::create();
	_method->client = client;
	_method->txid = txid;
	vnx_request(_method, true);
}

void ServerClient::approve(const uint64_t& client, std::shared_ptr<const ::mmx::Transaction> tx) {
	auto _method = ::mmx::exchange::Server_approve::create();
	_method->client = client;
	_method->tx = tx;
	vnx_request(_method, false);
}

void ServerClient::approve_async(const uint64_t& client, std::shared_ptr<const ::mmx::Transaction> tx) {
	auto _method = ::mmx::exchange::Server_approve::create();
	_method->client = client;
	_method->tx = tx;
	vnx_request(_method, true);
}

void ServerClient::ping(const uint64_t& client) {
	auto _method = ::mmx::exchange::Server_ping::create();
	_method->client = client;
	vnx_request(_method, false);
}

void ServerClient::ping_async(const uint64_t& client) {
	auto _method = ::mmx::exchange::Server_ping::create();
	_method->client = client;
	vnx_request(_method, true);
}


} // namespace mmx
} // namespace exchange
