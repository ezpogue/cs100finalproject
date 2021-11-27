#ifndef __POKEMON_HPP__
#define __POKEMON_HPP__

#include "move.hpp"
#include "type.hpp"
#include <utility>

class Pokemon{

protected:
	std::string name;
	std::pair<Pokemon_Type,Pokemon_Type> type;
	Move* move[4];
	int stats[4];// {HP,ATK,DEF,SPD}

public:
	Move* useMove();
	void catchMove(Move*);
	std::pair<Pokemon_Type,Pokemon_Type> getType();
	int getHP();
	int getATK();
	int getDEF();
	int getSPD();
};
#endif
