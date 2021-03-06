#ifndef __TRAINERTEST_HPP__
#define __TRAINERTEST_HPP__

#include "gtest/gtest.h"

#include "trainer.hpp"
#include "pokemon.hpp"
#include "move.hpp"
#include "type.hpp"

Pokemon_Type Fire("Fire");
Pokemon_Type Water("Water");
Pokemon_Type Grass("Grass");

Pokemon* Ponyta = new Pokemon("Ponyta", Fire, Fire, new Attack_Move("move1", new Poison_Move(), 100, 0, 50), new Attack_Move("move1", new Poison_Move(), 100, 0, 50), new Attack_Move("move1", new Poison_Move(), 100, 0, 50), new Attack_Move("move1", new Poison_Move(), 100, 0, 50), 101, 81, 61, 41);
Pokemon* Seel = new Pokemon("Seel", Water, Water, new Attack_Move("move1", new Poison_Move(), 100, 0, 50), new Attack_Move("move2", new Psychic_Move(), 100, 0, 4000), new Attack_Move("move1", new Poison_Move(), 100, 0, 50), new Attack_Move("move1", new Poison_Move(), 100, 0, 50), 102, 82, 62, 42);
Pokemon* Bellsprout = new Pokemon("Bellsprout", Grass, Grass, new Attack_Move("move1", new Poison_Move(), 100, 0, 50), new Attack_Move("move1", new Poison_Move(), 100, 0, 50), new Attack_Move("move1", new Poison_Move(), 100, 0, 50), new Attack_Move("move1", new Poison_Move(), 100, 0, 50), 103, 83, 63, 43);

Trainer George("George", Ponyta, Seel, Bellsprout);

TEST(Trainer,GetName){
	ASSERT_EQ(George.getName(), "George");
}

TEST(Trainer,GetHP){
	ASSERT_EQ(George.getHP(), 101);
}

TEST(Trainer,GetATK){
	ASSERT_EQ(George.getATK(), 81);
}

TEST(Trainer,GetDEF){
	ASSERT_EQ(George.getDEF(), 61);
}

TEST(Trainer,GetSPD){
	ASSERT_EQ(George.getSPD(), 41);
}

TEST(Trainer, AllFaintedFalse){
	ASSERT_FALSE(George.allfainted());
}

TEST(Trainer, UseMove){
	ASSERT_EQ(George.useMove(1)->getName(), "move1");
}

TEST(Trainer, GetMove){
	ASSERT_EQ(George.getMove(1)->getName(), "move1");
}

TEST(Trainer,SwitchPokemon){
	George.switchPokemon(1);
	ASSERT_EQ(George.getHP(), 102);
}

TEST(Trainer, CatchMove){
	George.catchMove(Seel->getMove(0), Ponyta);
	ASSERT_EQ(George.getHP(),36); //50 * 81/62 = 66; 102 - 66 = 36 
}

TEST(Trainer, AllFaintedTrue){
	Ponyta->catchMove(Seel->getMove(1), Ponyta);
	Seel->catchMove(Seel->getMove(1), Ponyta);
	Bellsprout->catchMove(Seel->getMove(1), Ponyta);
	ASSERT_TRUE(George.allfainted());
}

#endif
