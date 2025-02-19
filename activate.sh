#!/bin/bash

if [ -f NETWORK ]; then
	NETWORK=$(cat NETWORK)
else
	NETWORK=testnet5
	echo ${NETWORK} > NETWORK
fi

echo NETWORK=${NETWORK}

if [ ! -d config/local ]; then
	cp -r config/local_init config/local
	echo "Initialized config/local/ with defaults."
fi

export MMX_NETWORK=${NETWORK}/
export PATH=$PATH:$PWD/build:$PWD/build/exchange
