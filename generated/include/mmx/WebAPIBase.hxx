
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_WebAPIBase_HXX_
#define INCLUDE_mmx_WebAPIBase_HXX_

#include <mmx/package.hxx>
#include <mmx/Block.hxx>
#include <vnx/Module.h>
#include <vnx/TopicPtr.hpp>
#include <vnx/addons/HttpData.hxx>
#include <vnx/addons/HttpRequest.hxx>
#include <vnx/addons/HttpResponse.hxx>


namespace mmx {

class WebAPIBase : public ::vnx::Module {
public:
	
	::vnx::TopicPtr input_blocks = "node.verified_blocks";
	std::string node_server = "Node";
	std::string wallet_server = "Wallet";
	uint32_t max_block_history = 1000;
	uint64_t max_tx_history = 10000;
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xfe90ce601fcc0cc6ull;
	
	WebAPIBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const WebAPIBase& _value);
	friend std::istream& operator>>(std::istream& _in, WebAPIBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	using Super::handle;
	
	virtual void handle(std::shared_ptr<const ::mmx::Block> _value) {}
	virtual void http_request_async(std::shared_ptr<const ::vnx::addons::HttpRequest> request, const std::string& sub_path, const vnx::request_id_t& _request_id) const = 0;
	void http_request_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::addons::HttpResponse>& _ret_0) const;
	virtual void http_request_chunk_async(std::shared_ptr<const ::vnx::addons::HttpRequest> request, const std::string& sub_path, const int64_t& offset, const int64_t& max_bytes, const vnx::request_id_t& _request_id) const = 0;
	void http_request_chunk_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::addons::HttpData>& _ret_0) const;
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};

template<typename T>
void WebAPIBase::accept_generic(T& _visitor) const {
	_visitor.template type_begin<WebAPIBase>(5);
	_visitor.type_field("input_blocks", 0); _visitor.accept(input_blocks);
	_visitor.type_field("node_server", 1); _visitor.accept(node_server);
	_visitor.type_field("wallet_server", 2); _visitor.accept(wallet_server);
	_visitor.type_field("max_block_history", 3); _visitor.accept(max_block_history);
	_visitor.type_field("max_tx_history", 4); _visitor.accept(max_tx_history);
	_visitor.template type_end<WebAPIBase>(5);
}


} // namespace mmx


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_WebAPIBase_HXX_
