#include "gtest/gtest.h"
#include "move.hpp"
#include "type.hpp"

Move_Type* a = new Move_Type("Testing");

TEST(Move, GetName){
	Attack_Move test("testname", a, 1, 1, 1);
	ASSERT_EQ(test.getName(), "testname");
}

TEST(Move, GetType){
	Attack_Move test("testname", a, 1, 1, 1);
	ASSERT_EQ(test.getType()->getName(), "Testing");
}

TEST(Move, GetAccuracy){
	Attack_Move test("testname", a, 100, 1, 1);
	ASSERT_EQ(test.getAccuracy(), 100);
}

TEST(Move, GetPriority){
	Attack_Move test("testname", a, 100, 0, 1);
	ASSERT_EQ(test.getPriority(), 0);
}

TEST(Attack_Move, GetDamage){
	Attack_Move test("testname", a, 100, 1, 69);
	ASSERT_EQ(test.getDamage(), 69);
}

TEST(Attack_Move, GetBuffs){
	Attack_Move test("testname", a, 100, 1, 69);
	ASSERT_EQ(test.getATKBuff(), 1);
	ASSERT_EQ(test.getDEFBuff(), 1);
	ASSERT_EQ(test.getSPDBuff(), 1);
}

TEST(Attack_Move, GetDebuffs){
	Attack_Move test("testname", a, 100, 1, 69);
	ASSERT_EQ(test.getATKDebuff(), 1);
	ASSERT_EQ(test.getDEFDebuff(), 1);
	ASSERT_EQ(test.getSPDDebuff(), 1);
}

TEST(Buff_Move, GetDamage){
	Buff_Move test("testname", a, 100, 1, 2, 1);
	ASSERT_EQ(test.getDamage(), 0);
}

TEST(Buff_Move, GetBuffs){
	Buff_Move test("testname", a, 100, 1, 2,3);
	ASSERT_EQ(test.getATKBuff(), 1);
	ASSERT_EQ(test.getDEFBuff(), 3);
	ASSERT_EQ(test.getSPDBuff(), 1);
}

TEST(Buff_Move, GetDebuffs){
	Buff_Move test("testname", a, 100, 1, 2, 3);
	ASSERT_EQ(test.getATKDebuff(), 1);
	ASSERT_EQ(test.getDEFDebuff(), 1);
	ASSERT_EQ(test.getSPDDebuff(), 1);
}

TEST(Debuff_Move, GetDamage){
	Debuff_Move test("testname", a, 100, 1, 1, 2);
	ASSERT_EQ(test.getDamage(), 0);
}

TEST(Debuff_Move, GetBuffs){
	Debuff_Move test("testname", a, 100, 1, 1, 2);
	ASSERT_EQ(test.getATKBuff(), 1);
	ASSERT_EQ(test.getDEFBuff(), 1);
	ASSERT_EQ(test.getSPDBuff(), 1);
}

TEST(Debuff_Move, GetDebuffs){
	Debuff_Move test("testname", a, 100, 1, 1, 2);
	ASSERT_EQ(test.getATKDebuff(), 2);
	ASSERT_EQ(test.getDEFDebuff(), 1);
	ASSERT_EQ(test.getSPDDebuff(), 1);
}

Attack_Move* move1 = new Attack_Move("move1", a, 100, 0, 20);
Move_Composite test("test", a, 100, 0, move1);
Attack_Move* move2 = new Attack_Move("move2", a, 100, 0, 30);
Buff_Move* move3 = new Buff_Move("move3", a, 100, 0, 3, 2);
Buff_Move* move4 = new Buff_Move("move4", a, 100, 0, 3, 2);
Debuff_Move* move5 = new Debuff_Move("move5", a, 100, 0, 2, 3);
Debuff_Move* move6 = new Debuff_Move("move6", a, 100, 0, 2, 3);


TEST(Move_Composite, GetDamage){
	test.addMove(move2);
	test.addMove(move3);
	test.addMove(move4);
	test.addMove(move5);
	test.addMove(move6);
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

