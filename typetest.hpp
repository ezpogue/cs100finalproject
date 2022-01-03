#ifndef __TYPETEST_HPP__
#define __TYPETEST_HPP__

#include "gtest/gtest.h"
#include "type.hpp"

TEST(Type, GetName){
	Type test("testing");
	ASSERT_EQ(test.getName(),"testing");	
}

TEST(Move_Type, NotVeryEffective){
	Bug_Move test;
	Pokemon_Type a("Fire");
	Pokemon_Type b("Bug");
	ASSERT_EQ(test.effectiveness(a,b), .5);
}

TEST(Move_Type, SuperEffective){
	Fire_Move test;
	Pokemon_Type a("Grass");
	Pokemon_Type b("Bug");
	ASSERT_EQ(test.effectiveness(a,b), 4);
}

TEST(Move_Type, Immune){
	Normal_Move test;
	Pokemon_Type a("Ghost");
	Pokemon_Type b("Normal");
	ASSERT_EQ(test.effectiveness(a,b), 0);
}

TEST(Move_Type, SingleType){
	Grass_Move test;
	Pokemon_Type a("Psychic");
	Pokemon_Type b("");
	ASSERT_EQ(test.effectiveness(a,b), 1);
}

TEST(Move_Type, NoType){
	Fire_Move test;
	Pokemon_Type a("");
	Pokemon_Type b("");
	ASSERT_EQ(test.effectiveness(a,b), 1);
}

TEST(Move_Type, TwoSameType){
	Psychic_Move test;
	Pokemon_Type a("Fighting");
	Pokemon_Type b("Fighting");
	ASSERT_EQ(test.effectiveness(a,b), 2);
}

#endif