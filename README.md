## Build steps

This project uses CMake install here: https://cmake.org/

To build:

```bash
mkdir build
cd build
cmake ..
```

## Git Bash on windows users

Build Makefile with:

```bash
cmake .. -G "MinGW Makefiles" -DCMAKE_SH="CMAKE_SH-NOTFOUND"`
```
