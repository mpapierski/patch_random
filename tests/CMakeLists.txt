FIND_PACKAGE (PythonInterp REQUIRED)

# Use CPP compiler
ADD_EXECUTABLE (test_rand
	test_rand.cpp
)
TARGET_LINK_LIBRARIES (test_rand
	patch_random
)
ADD_TEST (
	NAME test_rand_cpp
	COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/compare_output.py $<TARGET_FILE:test_rand>
)

# Use C compiler
ADD_EXECUTABLE (test_rand_c
	test_rand.c
)
TARGET_LINK_LIBRARIES (test_rand_c
	patch_random
)
ADD_TEST (
	NAME test_rand_c
	COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/compare_output.py $<TARGET_FILE:test_rand_c>
)