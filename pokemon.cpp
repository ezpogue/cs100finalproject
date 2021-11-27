#include "pokemon.hpp"
#include "move.hpp"
#include <iostream>
#include <utility>

Move* Pokemon::useMove(int choice){return move[choice];}

void Pokemon::catchMove(Move* a){
	stats[0] -= a->getDamage(type);	
}

std::pair<Pokemon_Type,Pokemon_Type> Pokemon::getType(){return type;}

int Pokemon::getHP(){return stats[0];}

int Pokemon::getATK(){return stats[1];}

int Pokemon::getDEF(){return stats[2];}

int Pokemon::getSPD(){return stats[3];}
