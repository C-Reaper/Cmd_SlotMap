# Project README

## Overview
This project demonstrates the usage of a SlotMap data structure in C. The SlotMap is a dynamic array that allows fast access to elements using integer indices, while also providing efficient insertion and removal operations.

## Features
- **SlotMap**: A dynamic array-based data structure that supports fast element access, insertion, and deletion.
- **Memory Management**: Automatic memory management for the elements stored in the SlotMap.
- **Cross-Platform Build Support**: Builds on Linux, Windows (using MinGW-w64), Wine for Windows, and WebAssembly.

## Project Structure
```
Cmd_SlotMap/
├── build/              # .exe files produced by Main.c
├── src/                # Source code directory
│   ├── Main.c          # Entry point of the program
│   └── SlotMap.h       # Header file for the SlotMap data structure
└── Makefile.linux      # Linux Build configuration
└── Makefile.windows    # Windows Build configuration
└── Makefile.wine       # Wine Build configuration
└── Makefile.web        # Emscripten Build configuration
└── README.md           # This file
```

### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
To build the project on a Linux system:

```bash
cd Cmd_SlotMap
make -f Makefile.linux all
./build/Main
```

For building and running the project on Windows using MinGW-w64:

```bash
cd Cmd_SlotMap
make -f Makefile.windows all
build\Main.exe
```

To build the project on Wine for Windows:

```bash
cd Cmd_SlotMap
make -f Makefile.wine all
wine build/Main.exe
```

To build the project for WebAssembly using Emscripten:

```bash
cd Cmd_SlotMap
make -f Makefile.web all
wasmtime build/Main.wasm
```

For clean rebuilds and additional options, refer to the Makefile documentation.