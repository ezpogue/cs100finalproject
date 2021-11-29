#include "pokemon.hpp"
#include "move.hpp"
#include <iostream>

Pokemon::Pokemon(std::string name, Pokemon_Type type1, Pokemon_Type type2, Move* move1, Move* move2, Move* move3, Move* move4, int hp, int atk, int def, int spd):name(name){
	type[0] = type1;
	type[1] = type2;
	move[0] = move1;
	move[1] = move2;
	move[2] = move3;
	move[3] = move4;
	stats[0] = hp;
	stats[1] = atk;
	stats[2] = def;
	stats[3] = spd;
	stats[4] = hp;
}

Move* Pokemon::useMove(int choice){return move[choice];}

void Pokemon::catchMove(Move* a){
	if (a->getATKDebuff() != 0)
		stats[1] -= a->getATKDebuff();
	if (a->getDEFDebuff() != 0)
		stats[2] -= a->getDEFDebuff();
	if (a->getSPDDebuff() != 0)
		stats[3] -= a->getSPDDebuff();
	if (a->getDamage() != 0)
		stats[5] -= (a->getDamage())/stats[2];	
}

Pokemon_Type Pokemon::getType1(){return type[0];}

Pokemon_Type Pokemon::getType2(){return type[1];}

int Pokemon::getHP(){return stats[0];}

int Pokemon::getATK(){return stats[1];}

int Pokemon::getDEF(){return stats[2];}

int Pokemon::getSPD(){return stats[3];}
