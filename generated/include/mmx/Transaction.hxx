
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_Transaction_HXX_
#define INCLUDE_mmx_Transaction_HXX_

#include <mmx/package.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Contract.hxx>
#include <mmx/Operation.hxx>
#include <mmx/Solution.hxx>
#include <mmx/TransactionBase.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/hash_t.hpp>
#include <mmx/tx_in_t.hxx>
#include <mmx/tx_note_e.hxx>
#include <mmx/tx_out_t.hxx>


namespace mmx {

class MMX_EXPORT Transaction : public ::mmx::TransactionBase {
public:
	
	uint32_t version = 0;
	uint64_t nonce = 0;
	::mmx::tx_note_e note;
	vnx::optional<::mmx::hash_t> salt;
	std::vector<::mmx::tx_in_t> inputs;
	std::vector<::mmx::tx_out_t> outputs;
	std::vector<::mmx::tx_out_t> exec_outputs;
	std::vector<std::shared_ptr<const ::mmx::Operation>> execute;
	std::vector<std::shared_ptr<const ::mmx::Solution>> solutions;
	std::shared_ptr<const ::mmx::Contract> deploy;
	
	typedef ::mmx::TransactionBase Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xce0462acdceaa5bcull;
	
	Transaction() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	virtual void finalize();
	virtual void add_output(const ::mmx::addr_t& currency = ::mmx::addr_t(), const ::mmx::addr_t& address = ::mmx::addr_t(), const uint64_t& amount = 0, const uint32_t& split = 1);
	virtual void merge_sign(std::shared_ptr<const ::mmx::Transaction> tx = nullptr);
	virtual vnx::bool_t is_valid() const;
	virtual vnx::bool_t is_signed() const;
	virtual ::mmx::hash_t calc_hash() const override;
	virtual std::shared_ptr<const ::mmx::Solution> get_solution(const uint32_t& index = 0) const;
	virtual ::mmx::tx_out_t get_output(const uint32_t& index = 0) const;
	virtual std::vector<::mmx::tx_out_t> get_all_outputs() const;
	virtual uint64_t calc_cost(std::shared_ptr<const ::mmx::ChainParams> params = nullptr) const override;
	
	static std::shared_ptr<Transaction> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const Transaction& _value);
	friend std::istream& operator>>(std::istream& _in, Transaction& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method) override;
	
};

template<typename T>
void Transaction::accept_generic(T& _visitor) const {
	_visitor.template type_begin<Transaction>(11);
	_visitor.type_field("id", 0); _visitor.accept(id);
	_visitor.type_field("version", 1); _visitor.accept(version);
	_visitor.type_field("nonce", 2); _visitor.accept(nonce);
	_visitor.type_field("note", 3); _visitor.accept(note);
	_visitor.type_field("salt", 4); _visitor.accept(salt);
	_visitor.type_field("inputs", 5); _visitor.accept(inputs);
	_visitor.type_field("outputs", 6); _visitor.accept(outputs);
	_visitor.type_field("exec_outputs", 7); _visitor.accept(exec_outputs);
	_visitor.type_field("execute", 8); _visitor.accept(execute);
	_visitor.type_field("solutions", 9); _visitor.accept(solutions);
	_visitor.type_field("deploy", 10); _visitor.accept(deploy);
	_visitor.template type_end<Transaction>(11);
}


} // namespace mmx


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_Transaction_HXX_
