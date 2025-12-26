// bitcoin.h

#ifndef BITCOIN_H
#define BITCOIN_H

// Network parameters
#define NETWORK_ID 1 // Mainnet
#define P2SH_ADDRESS_VERSION 5
#define DEFAULT_MAX_TX_SIZE 1000

// Bitcoin constants
#define SIEVE_SIZE (1024 * 1024) // memory size for sieve algorithm
#define BIP32_NODE_COUNT 10

typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

#endif  // BITCOIN_H