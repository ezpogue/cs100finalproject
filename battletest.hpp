#include "gtest/gtest.h"

#include "battle.hpp"

Pokemon_Type Fire2("Fire");

Attack_Move* Ember = new Attack_Move("Ember", new Fire_Move(), 100, 0, 40);
Attack_Move* FlameCharge = new Attack_Move("Flame Charge", new Fire_Move(),  100, 0, 50);
Buff_Move* Agility = new Buff_Move("Agility", a, 100, 0, 3, 2);
Debuff_Move* TailWhip = new Debuff_Move("Tail Whip", a, 100, 0, 1, 2);
Attack_Move* QuickAttack = new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40);
Attack_Move* FireFang = new Attack_Move("Fire Fang", new Fire_Move(), 100, 0, 70); 
Attack_Move* Flamethrower = new Attack_Move("Flamethrower", new Fire_Move(), 100, 0, 9001);

Pokemon* Ponyta1 = new Pokemon("Ponyta", Fire2, Fire2, Ember, FlameCharge, Agility, TailWhip, 106, 85, 61, 89);
Pokemon* Ponyta2 = new Pokemon("Ponyta", Fire2, Fire2, Ember, FlameCharge, Agility, TailWhip, 106, 85, 61, 89);
Pokemon* Ponyta3 = new Pokemon("Ponyta", Fire2, Fire2, Ember, FlameCharge, Agility, TailWhip, 106, 85, 61, 89);
Pokemon* Growlithe = new Pokemon("Growlithe", Fire2, Fire2, Ember, QuickAttack, FireFang, QuickAttack, 106, 73, 53, 65);
Pokemon* Vulpix1 = new Pokemon("Vulpix", Fire2, Fire2, Ember, Flamethrower, TailWhip, QuickAttack, 88, 47, 47, 66);
Pokemon* Vulpix2 = new Pokemon("Vulpix", Fire2, Fire2, Ember, Flamethrower, TailWhip, QuickAttack, 88, 47, 47, 66);



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
	Ponyta1->catchMove(Flamethrower,Ponyta1);
	Ponyta2->catchMove(Flamethrower,Ponyta1);
	Growlithe->catchMove(Flamethrower,Ponyta1);
	ASSERT_TRUE(b1.battleComplete());
}

TEST(Battle,GetWinner){
	ASSERT_EQ(b1.getWinner(),"Jerry");
}
