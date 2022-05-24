#!/bin/bash

if [ ! -f PASSWD ]; then
	./build/generate_passwd > PASSWD
	./build/vnx-base/tools/vnxpasswd -c config/default/ config/local/ -u mmx-admin -p $(cat PASSWD)
	echo "PASSWD=$(cat PASSWD)"
fi

if [ -f NETWORK ]; then
	NETWORK=$(cat NETWORK)
else
	NETWORK=testnet6
	echo ${NETWORK} > NETWORK
fi

echo NETWORK=${NETWORK}

if [ ! -d config/local ]; then
	cp -r config/local_init config/local
	echo "Initialized config/local/ with defaults."
fi

export MMX_NETWORK=${NETWORK}/
export PATH=$PATH:$PWD/build:$PWD/build/exchange
