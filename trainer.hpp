#ifndef __TRAINER_HPP__
#define __TRAINER_HPP__

#include <string>
#include "pokemon.hpp"
#include "move.hpp"

class Trainer
{
protected:
        std::string name;
        Pokemon* active;
        Pokemon* team[3];

public:
	Trainer(std::string n, Pokemon* a, Pokemon* b, Pokemon* c);
    void switchPokemon(int choice);
    Move* useMove(int choice);
	void catchMove(Move* m);
	int getHP();
	int getATK();
	int getDEF();
	int getSPD();
};
#endif
