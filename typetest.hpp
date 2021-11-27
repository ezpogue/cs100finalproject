#include "gtest/gtest.h"
#include "type.hpp"
#include <utility>

class Pokemon{};

TEST(Type, getName){
	Type test("testing");
	ASSERT_EQ(test.getName(),"testing");	
}
