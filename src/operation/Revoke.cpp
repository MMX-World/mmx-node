/*
 * Revoke.cpp
 *
 *  Created on: May 9, 2022
 *      Author: mad
 */

#include <mmx/operation/Revoke.hxx>
#include <mmx/write_bytes.h>


namespace mmx {
namespace operation {

hash_t Revoke::calc_hash() const
{
	std::vector<uint8_t> buffer;
	vnx::VectorOutputStream stream(&buffer);
	vnx::OutputBuffer out(&stream);

	write_bytes(out, get_type_hash());
	write_field(out, "version", 	version);
	write_field(out, "address", 	address);
	write_field(out, "txid", 		txid);
	out.flush();

	return hash_t(buffer);
}


} // operation
} // mmx
