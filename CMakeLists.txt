cmake_minimum_required(VERSION 3.4)
project(bank-simulation)

set(CMAKE_CXX_FLAGS "-std=c++14")
set(CMAKE_CXX_FLAGS_DEBUG "-std=c++14 -O0 -g")

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/out)

include_directories(include)
#file(GLOB SOURCES "src/*.cpp")
set(SOURCES

        src/system/SimulationLogic.cpp
        src/system/UserInterface.cpp

        src/bank/Account.cpp
        src/bank/JuniorAccount.cpp
        src/bank/PersonalAccount.cpp
        src/bank/StudentsAccount.cpp

        src/bank/Bank.cpp

        src/bank/Transfer.cpp
        )
add_executable(bank-simulation src/main.cpp ${SOURCES})

enable_testing()
set(Boost_USE_MULTITHREADED ON)
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
include_directories(
        include
        ${Boost_INCLUDE_DIRS}
)
link_directories(${Boost_LIBRARY_DIR})
add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIG> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        )

set(TEST_SOURCES
        test/config.cpp
        test/BankTest.cpp
        ${SOURCES}
        )
add_executable(tester ${TEST_SOURCES})
target_link_libraries(tester ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

add_test(test tester)

