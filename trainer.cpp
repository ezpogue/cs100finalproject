#include <string>
#include "trainer.hpp"


Trainer::Trainer(std::string n, Pokemon* a, Pokemon* b, Pokemon* c):name(n){
	team[0] = a;
	team[1] = b;
	team[2] = c;
	active = a;
}

void Trainer::switchPokemon(int choice){
	active = team[(choice%3) - 1];
}

Move* Trainer::useMove(int choice){
	return active->useMove(choice);
}
	
void Trainer::catchMove(Move* m){
	 active->catchMove(m);
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

