#include <string>
#include "trainer.hpp"


        std::string name;
        Pokemon* active;
        Pokemon team[3];

Trainer::Trainer(std::string n, Pokemon a, Pokemon b, Pokemon c):name(n), team[0](a), team[1](b), team[2](c), active(team){}

void Trainer::switchPokemon(int choice){
	active = team + (choice%3) - 1;
}

Move* Trainer::getMove(int choice){
	return active->getMove(choice);
}
	
void Trainer::catchMove(Move* m){
	 active->catchMove(m);
}

int Trainer::getHealth(){
	return active->getHealth();
}

int Trainer::getAttack(){
	return active->getAttack();
}

int Trainer::getDefense(){
	return active->getDefense();
}

int getSpeed(){
	return active->getSpeed();
}

