#ifndef __MOVETEST_HPP__
#define __MOVETEST_HPP__

#include "gtest/gtest.h"
#include "move.hpp"
#include "type.hpp"

TEST(Move, GetName){
	Attack_Move test("testname", new Move_Type("Testing"), 1, 1, 1);
	ASSERT_EQ(test.getName(), "testname");
}

TEST(Move, GetType){
	Attack_Move test("testname", new Move_Type("Testing"), 1, 1, 1);
	ASSERT_EQ(test.getType()->getName(), "Testing");
}

TEST(Move, GetAccuracy){
	Attack_Move test("testname", new Move_Type("Testing"), 100, 1, 1);
	ASSERT_EQ(test.getAccuracy(), 100);
}

TEST(Move, GetPriority){
	Attack_Move test("testname", new Move_Type("Testing"), 100, 0, 1);
	ASSERT_EQ(test.getPriority(), 0);
}

TEST(Attack_Move, GetDamage){
	Attack_Move test("testname", new Move_Type("Testing"), 100, 1, 69);
	ASSERT_EQ(test.getDamage(), 69);
}

TEST(Attack_Move, GetBuffs){
	Attack_Move test("testname", new Move_Type("Testing"), 100, 1, 69);
	ASSERT_EQ(test.getATKBuff(), 1);
	ASSERT_EQ(test.getDEFBuff(), 1);
	ASSERT_EQ(test.getSPDBuff(), 1);
}

TEST(Attack_Move, GetDebuffs){
	Attack_Move test("testname", new Move_Type("Testing"), 100, 1, 69);
	ASSERT_EQ(test.getATKDebuff(), 1);
	ASSERT_EQ(test.getDEFDebuff(), 1);
	ASSERT_EQ(test.getSPDDebuff(), 1);
}

TEST(Buff_Move, GetDamage){
	Buff_Move test("testname", new Move_Type("Testing"), 100, 1, 2, 1);
	ASSERT_EQ(test.getDamage(), 0);
}

TEST(Buff_Move, GetBuffs){
	Buff_Move test("testname", new Move_Type("Testing"), 100, 1, 2,3);
	ASSERT_EQ(test.getATKBuff(), 1);
	ASSERT_EQ(test.getDEFBuff(), 3);
	ASSERT_EQ(test.getSPDBuff(), 1);
}

TEST(Buff_Move, GetDebuffs){
	Buff_Move test("testname", new Move_Type("Testing"), 100, 1, 2, 3);
	ASSERT_EQ(test.getATKDebuff(), 1);
	ASSERT_EQ(test.getDEFDebuff(), 1);
	ASSERT_EQ(test.getSPDDebuff(), 1);
}

TEST(Debuff_Move, GetDamage){
	Debuff_Move test("testname", new Move_Type("Testing"), 100, 1, 1, 2);
	ASSERT_EQ(test.getDamage(), 0);
}

TEST(Debuff_Move, GetBuffs){
	Debuff_Move test("testname", new Move_Type("Testing"), 100, 1, 1, 2);
	ASSERT_EQ(test.getATKBuff(), 1);
	ASSERT_EQ(test.getDEFBuff(), 1);
	ASSERT_EQ(test.getSPDBuff(), 1);
}

TEST(Debuff_Move, GetDebuffs){
	Debuff_Move test("testname", new Move_Type("Testing"), 100, 1, 1, 2);
	ASSERT_EQ(test.getATKDebuff(), 2);
	ASSERT_EQ(test.getDEFDebuff(), 1);
	ASSERT_EQ(test.getSPDDebuff(), 1);
}

Move_Composite test("test", new Move_Type("Testing"), 100, 0, new Attack_Move("move1", new Move_Type("Testing"), 100, 0, 20));

TEST(Move_Composite, GetDamage){
	test.addMove(new Attack_Move("move2", new Move_Type("Testing"), 100, 0, 30));
	test.addMove(new Buff_Move("move3", new Move_Type("Testing"), 100, 0, 3, 2));
	test.addMove(new Buff_Move("move4", new Move_Type("Testing"), 100, 0, 3, 2));
	test.addMove(new Debuff_Move("move5", new Move_Type("Testing"), 100, 0, 2, 3));
	test.addMove(new Debuff_Move("move6", new Move_Type("Testing"), 100, 0, 2, 3));
	ASSERT_EQ(test.getDamage(), 50);
}

TEST(Move_Composite, GetBuffs){
	ASSERT_EQ(test.getATKBuff(), 1);
	ASSERT_EQ(test.getDEFBuff(), 1);
	ASSERT_EQ(test.getSPDBuff(), 4);
}

TEST(Move_Composite, GetDebuffs){
	ASSERT_EQ(test.getATKDebuff(), 1);
	ASSERT_EQ(test.getDEFDebuff(), 9);
	ASSERT_EQ(test.getSPDDebuff(), 1);
}

#endif
