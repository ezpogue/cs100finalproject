#ifndef __BATTLETEST_HPP__
#define __BATTLETEST_HPP__

#include "gtest/gtest.h"

#include "battle.hpp"
#include "trainer.hpp"
#include "pokemon.hpp"
#include "move.hpp"
#include "type.hpp"

Pokemon_Type Fire2("Fire");

Pokemon* Ponyta1 = new Pokemon("Ponyta", Fire2, Fire2, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flame Charge", new Fire_Move(),  100, 0, 50), new Buff_Move("Agility",new Normal_Move(), 100, 0, 3, 2), new Debuff_Move("Tail Whip",new Normal_Move(), 100, 0, 1, 2), 106, 85, 61, 89);
Pokemon* Ponyta2 = new Pokemon("Ponyta", Fire2, Fire2, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flame Charge", new Fire_Move(),  100, 0, 50), new Buff_Move("Agility",new Normal_Move(), 100, 0, 3, 2), new Debuff_Move("Tail Whip",new Normal_Move(), 100, 0, 1, 2), 106, 85, 61, 89);
Pokemon* Ponyta3 = new Pokemon("Ponyta", Fire2, Fire2, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flame Charge", new Fire_Move(),  100, 0, 50), new Buff_Move("Agility",new Normal_Move(), 100, 0, 3, 2), new Debuff_Move("Tail Whip",new Normal_Move(), 100, 0, 1, 2), 106, 85, 61, 89);
Pokemon* Growlithe = new Pokemon("Growlithe", Fire2, Fire2, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), new Attack_Move("Fire Fang", new Fire_Move(), 100, 0, 70), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), 106, 73, 53, 65);
Pokemon* Vulpix1 = new Pokemon("Vulpix", Fire2, Fire2, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flamethrower", new Fire_Move(), 100, 0, 9001), new Debuff_Move("Tail Whip",new Normal_Move(), 100, 0, 1, 2), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), 88, 47, 47, 66);
Pokemon* Vulpix2 = new Pokemon("Vulpix", Fire2, Fire2, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flamethrower", new Fire_Move(), 100, 0, 9001), new Debuff_Move("Tail Whip",new Normal_Move(), 100, 0, 1, 2), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), 88, 47, 47, 66);

Trainer* One = new Trainer("Ben", Ponyta1, Ponyta2, Growlithe);
Trainer* Two = new Trainer("Jerry", Vulpix1, Ponyta3, Vulpix2);

Battle b1 (One,Two);

TEST(Battle,SpeedCheck){
	ASSERT_TRUE(b1.speedCheck());
}

TEST(Battle,BattleCompleteFalse){
	ASSERT_FALSE(b1.battleComplete());
}

TEST(Battle,BattleCompleteTrue){
	Ponyta1->catchMove(Vulpix1->getMove(1),Ponyta1);
	Ponyta2->catchMove(Vulpix1->getMove(1),Ponyta1);
	Growlithe->catchMove(Vulpix1->getMove(1),Ponyta1);
	ASSERT_TRUE(b1.battleComplete());
}

TEST(Battle,GetWinner){
	ASSERT_EQ(b1.getWinner(),"Jerry");
	delete One;
	delete Two;
}
#endif 
