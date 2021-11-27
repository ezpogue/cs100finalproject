#include "pokemon.hpp"
#include "move.hpp"
#include <iostream>
#include <utility>

Pokemon(std::string name, Pokemon_Type type1, Pokemon_Type type2, Move* move1, Move* move2, Move* move3, Move* move4, int hp, int atk, int def, int spd):name(name), type.first(type1), type.second(type2), move[0](move1), move[1](move2), move[2](move3), move[3](move4), stats[0](hp), stats[1](atk), stats[2](def), stats[3](spd){}

Move* Pokemon::useMove(int choice){return move[choice];}

void Pokemon::catchMove(Move* a){
	stats[0] -= a->getDamage(type);	
}

std::pair<Pokemon_Type,Pokemon_Type> Pokemon::getType(){return type;}

int Pokemon::getHP(){return stats[0];}

int Pokemon::getATK(){return stats[1];}

int Pokemon::getDEF(){return stats[2];}

int Pokemon::getSPD(){return stats[3];}
