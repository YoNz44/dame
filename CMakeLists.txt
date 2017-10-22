cmake_minimum_required (VERSION 2.8.11)
project (DAME)

# all files
file(GLOB_RECURSE SRC_LIB
	${PROJECT_SOURCE_DIR}/src/lib/*.cpp)

set(HEADERS_DIR_LIB ${PROJECT_SOURCE_DIR}/src/lib)
file(GLOB_RECURSE HEADERS_LIB
	${HEADERS_DIR_LIB}/*.h)

file(GLOB_RECURSE SRC_EXE
	${PROJECT_SOURCE_DIR}/src/exe/*.cpp)

file(GLOB_RECURSE HEADERS_EXE
	${PROJECT_SOURCE_DIR}/src/exe/*.h)

# CUSTOM LIB
add_library (dame ${SRC_LIB} ${HEADERS_LIB})

# EXE
include_directories(${HEADERS_DIR_LIB})
add_executable (exeDame ${SRC_EXE} ${HEADERS_EXE})

# EXE link
target_link_libraries (exeDame LINK_PUBLIC dame)
target_link_libraries(exeDame LINK_PUBLIC ${ARMADILLO_LIBRARIES})
