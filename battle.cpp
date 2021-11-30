#include <string>
#include "battle.hpp"
#include "trainer.hpp"

Battle::Battle(Trainer* p, Trainer* e):player(p), enemy(e){}

bool Battle::battleComplete()
{
	if (enemy->allfainted()){
		winner = player->getName();
		return true;
	}
	if (player->allfainted()){
		winner = enemy->getName();
		return true;
	}
	return false;
}

bool Battle::speedCheck()
{
if (player->getSPD() >= enemy->getSPD()) return true;
else return false;
}

std::string Battle::getWinner(){return winner;}

void Battle::turn(int p, int e)
{
	bool first = true;
	if (p <= 4){
		if (player->getMove(p)->getPriority() < enemy->getMove(e)->getPriority())
			first = false;
		else if (player->getMove(p)->getPriority() == enemy->getMove(e)->getPriority())
			first = speedCheck();
	}
	if (first = true){
		switch (p) {

		case 1:
		case 2:
		case 3:
		case 4:
			enemy->catchMove(player->useMove(p), player->getPokemon()); //user in catchMove couldbe wrong 
			break;
		case 5:
		case 6:
			player->switchPokemon(p-3);
		}
		player->catchMove(enemy->useMove(e), enemy->getPokemon());
	}
	else{
		player->catchMove(enemy->useMove(e), enemy->getPokemon());
		switch (p){
		case 1:
		case 2:
		case 3:
		case 4:
			enemy->catchMove(player->useMove(p), player->getPokemon());
			break;
		case 5:
		case 6:
			player->switchPokemon(p-3);
		}
	}
}

Trainer* Battle::getTrainer() {

	return enemy;
}
