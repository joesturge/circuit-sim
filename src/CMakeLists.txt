#build source
include_directories(${CircuitSimulator_SOURCE_DIR}/include)
file(GLOB CircuitSimulator_SRC
    "*.hpp"
    "*.cpp"
)

# exclude test files from source
list(FILTER CircuitSimulator_SRC EXCLUDE REGEX "^.*\\.test\\.cpp$")
add_executable(CircuitSimulator ${CircuitSimulator_SRC})

# build tests
file(GLOB CircuitSimulator_TEST
    "*.hpp"
    "*.cpp"
    "*.test.cpp"
)

# exclude main.cpp from the test build
list(FILTER CircuitSimulator_TEST EXCLUDE REGEX "^.*main\\.cpp$")

add_executable(runTests ${CircuitSimulator_TEST})
target_link_libraries(runTests gtest_main)
add_test(NAME runTests COMMAND runUnitTests)
