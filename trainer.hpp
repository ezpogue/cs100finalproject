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
        Pokemon team[3];

public:
        void switchPokemon(int choice);
       	Move* getMove(int choice);
	void catchMove(Move*);
	int getHealth();
	int getAttack();
	int getDefense();
	int getSpeed();
};
#endif
