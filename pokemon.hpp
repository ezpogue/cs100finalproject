#ifndef __POKEMON_HPP__
#define __POKEMON_HPP__

#include "move.hpp"
#include "type.hpp"


class Pokemon{

protected:
	std::string name;
	Pokemon_Type type[2];
	Move* move[4];
	int stats[5];// {HP,ATK,DEF,SPD,CURRENTHP}

public:
	Pokemon(std::string name, Pokemon_Type type1, Pokemon_Type type2, Move* move1, Move* move2, Move* move3, Move* move4, int hp, int atk, int def, int spd);
	~Pokemon();
	Move* useMove(int choice);
	Move* getMove(int choice);
	void catchMove(Move* a, Pokemon* user);
	std::string getName();
	Pokemon_Type getType1();
	Pokemon_Type getType2();
	int getMaxHP();
	int getATK();
	int getDEF();
	int getSPD();
	int getCurrHP();
	
};
#endif
