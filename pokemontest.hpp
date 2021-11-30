#include "gtest/gtest.h"
#include <string>

#include "pokemon.hpp"
#include "type.hpp"
#include "move.hpp"

Pokemon_Type type1("Fire");
Pokemon_Type type2("Flying");
Move* pokemove1 = new Attack_Move("attack", new Psychic_Move(), 100, 0, 40);
Move* pokemove2 = new Buff_Move("buff", new Rock_Move(), 100, 0, 1,3);
Move* pokemove3 = new Debuff_Move(3,.5);

Pokemon Charizard("Charizard", type1, type2, pokemove1, pokemove2, pokemove3, pokemove3, 100, 80, 120, 40);

TEST(Pokemon, GetName){
	ASSERT_EQ(Charizard.getName(), "Charizard");
}

TEST(Pokemon, GetType1){
	ASSERT_EQ(Charizard.getType1().getName(), "Fire");
}

TEST(Pokemon, GetType2){
	ASSERT_EQ(Charizard.getType2().getName(), "Flying");
}

TEST(Pokemon, GetMaxHP){
	ASSERT_EQ(Charizard.getMaxHP(), 100);
}

TEST(Pokemon, GetATK){
	ASSERT_EQ(Charizard.getATK(), 80);
}

TEST(Pokemon, GetDEF){
	ASSERT_EQ(Charizard.getDEF(), 120);
}

TEST(Pokemon, GetSPD){
	ASSERT_EQ(Charizard.getSPD(), 40);
}

TEST(Pokemon, GetMove){
	ASSERT_EQ(Charizard.getMove(0)->getName(), "attack");
}

TEST(Pokemon, UseMove){
	ASSERT_EQ(Charizard.useMove(1)->getName(), "buff");
	ASSERT_EQ(Charizard.getATK(), 240);
}

TEST(Pokemon, CatchMove){
	Charizard.catchMove(pokemove1, &Charizard);
	Charizard.catchMove(pokemove2, &Charizard);
	Charizard.catchMove(pokemove3, &Charizard);
	ASSERT_EQ(Charizard.getATK(), 240);
	ASSERT_EQ(Charizard.getSPD(), 20);
}

TEST(Pokemon, GetCurrHP){
	ASSERT_EQ(Charizard.getCurrHP(), 20);//40*1*240/120 = 80 ; 100-80=20
}
