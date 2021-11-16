#ifndef __POKEMON_HPP__
#define __POKEMON_HPP__

#include "move.hpp"
#include "type.hpp"

using namespace std;

class Pokemon{

protected:
	string name;
	pair<Type Pokemon_Type, Type Pokemon_Type2> typePair;
	Moves* move;
	int health;
	string status; //must fix

public:
	void outDamage(int rawDamage);
	void inDamage(int rawDamage);
	Type getType();
};