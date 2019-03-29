## Build steps

This project uses CMake install here: https://cmake.org/

To build:

```bash
mkdir build
cd build
cmake ..
```

Set the GTEST_LIBRARY GTEST_MAIN_LIBRARY and GTEST_INCLUDE_DIR on the generated CMakeCache.txt file

## Git Bash on windows users

Build Makefile with:

```bash
cmake .. -G "MinGW Makefiles" -DCMAKE_SH="CMAKE_SH-NOTFOUND"
```
