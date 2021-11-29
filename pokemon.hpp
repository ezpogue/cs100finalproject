#ifndef __POKEMON_HPP__
#define __POKEMON_HPP__

#include "move.hpp"
#include "type.hpp"

using namespace std;

class Pokemon{

protected:
	string name;
	pair<Type Pokemon_Type, Type Pokemon_Type2> typePair;
	Move move[3];
	int stats[3];
	string status; //must fix

public:
	void outDamage(int rawDamage);
	void inDamage(int rawDamage);
	Type getType();
	void setName(string s) { name = s;};
	void setPair(int s, Type t) { if (s = 1) { t = Pokemon_Type; } else { t = Pokemon_Type2; }};
	void setMove(int slot, Move m) { move[slot] = m; };
	void setStat(int slot, int stat) { stats[slot] = stat; }; 
};
