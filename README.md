# Bitcoin Implementation in C

This is a C implementation of the Bitcoin protocol, covering key aspects such as cryptographic primitives, network communication, and transaction verification.

## Project Structure

The project consists of the following files and directories:

*   **bitcoin.h**: Header file containing function declarations, type definitions, and macro constants.
*   **bitcoin.c**: Source file implementing functions and data structures declared in bitcoin.h.
*   **main.c**: Entry point for the program.
*   **lib/`: Directory containing shared libraries for cryptographic primitives.

## Dependencies

The project requires:

*   A C compiler (e.g., GCC)
*   A Unix-like operating system
*   Optional dependencies:
    *   OpenSSL for cryptographic operations
    *   libssl-dev for SSL/TLS support (if using)

## Build Instructions

To build the project, use the following commands:

```bash
mkdir build
cd build
cmake ..
make