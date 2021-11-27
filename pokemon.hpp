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
	Pokemon(std::string name, Pokemon_Type type1, Pokemon_Type type2, Move* move1, Move* move2, Move* move3, Move* move4, int hp, int atk, int def, int spd);
	Move* useMove();
	void catchMove(Move*);
	std::pair<Pokemon_Type,Pokemon_Type> getType();
	int getHP();
	int getATK();
	int getDEF();
	int getSPD();
};
#endif
