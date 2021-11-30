CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_COMPILE_OPTIONS(-g -O0 -fno-inline)

ADD_EXECUTABLE(test
    test.cpp
    type.cpp
    move.cpp
    pokemon.cpp
    trainer.cpp
    battle.cpp
)

ADD_EXECUTABLE(main
	main.cpp
	move.cpp
	battle.cpp
	type.cpp
	pokemon.cpp
	trainer.cpp
)

TARGET_LINK_LIBRARIES(test gtest)

TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
