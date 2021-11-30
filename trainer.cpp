#include <string>
#include <iostream>
#include "trainer.hpp"


Trainer::Trainer(std::string n, Pokemon* a, Pokemon* b, Pokemon* c):name(n){
	team[0] = a;
	team[1] = b;
	team[2] = c;
	active = a;
}

bool Trainer::allfainted(){
	for (auto i : team){
		if (i->getCurrHP() > 0)
			return false;
	}
	return true;
}
void Trainer::switchPokemon(int choice){
	std::cout << getName() << "switched to " << team[(choice)]->getName() << "!" << std::endl;
	active = team[(choice)];
}

Move* Trainer::useMove(int choice){
	return active->useMove(choice);
}

Move* Trainer::getMove(int choice){
	return active->getMove(choice);
}

Pokemon* Trainer::getPokemon() {
	return active;
}

	
void Trainer::catchMove(Move* m, Pokemon* user){
	 active->catchMove(m,user);
}

std::string Trainer::getName(){
	return name;
}

int Trainer::getHP(){
	return active->getCurrHP();
}

int Trainer::getATK(){
	return active->getATK();
}

int Trainer::getDEF(){
	return active->getDEF();
}

int Trainer::getSPD(){
	return active->getSPD();
}

