include_directories(${CircuitSimulator_SOURCE_DIR}/include)
file(GLOB CircuitSimulator_SRC
    "*.hpp"
    "*.cpp"
)
add_executable(CircuitSimulator ${CircuitSimulator_SRC})
