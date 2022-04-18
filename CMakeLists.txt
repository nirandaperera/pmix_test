cmake_minimum_required(VERSION 3.21)
project(pmix_test)

set(CMAKE_CXX_STANDARD 14)

message("Finding MPI")
find_package(MPI REQUIRED COMPONENTS CXX)
message(STATUS "MPI include dir: ${MPI_CXX_INCLUDE_PATH}")
message(STATUS "MPI libs: ${MPI_CXX_LIBRARIES}")
message(STATUS "MPI executable: ${MPIEXEC_EXECUTABLE}")
include_directories(SYSTEM ${MPI_CXX_INCLUDE_PATH})

add_executable(pmix_test main.cpp)
target_link_libraries(pmix_test ${MPI_CXX_LIBRARIES})
#install(TARGETS pmix_test RUNTIME DESTINATION .)
