# TradingTool

A C++20 market-data engine that reconstructs a limit order book from incoming events. Phase 1 builds and tests the single-threaded book.

## Layout

- `include/trading_tool/` for public headers
- `src/` for implementation files
- `tests/` for GoogleTest tests

## Development on Ubuntu or WSL2

From an Ubuntu shell, run these commands from the project directory. Install the packages if they are missing.

```sh
sudo apt update
sudo apt install build-essential cmake ninja-build git libgtest-dev
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug
cmake --build build
```

The initial CMake project has no build targets or registered tests. Once the first test target is registered, run it with `ctest --test-dir build --output-on-failure`.

If starting with a fresh copy, run `git init` from the project directory.
