Battle::Battle(Trainer* p, Trainer* e):player(p), enemy(e){}

bool Battle::battleComplete()
{
Pokemon* playerTeam, enemyTeam;
playerTeam = getTeam(player);
enemyTeam = getTeam(enemy);
for (auto i : enemyTeam){
	if (i.getHealth() <= 0){
	winner = "player"
	return true;
	}
}
for (auto i : playerTeam){
	if (i.getHealth()<= 0){
	winner = "enemy"
	return true;
	}
}
	return false;
}

bool Battle::speedCheck()
{
if (player->getSpeed() >= enemy->getSpeed()) return true;
else return false;
}

std::string Battle::getWinner(){return winner;}

void Battle::turn(unsigned int p, unsigned int e)
{
	bool first = speedCheck();
	if (first = true){
		switch (p){
		case 1:
		case 2:
		case 3:
		case 4:
			enemy->catchMove(player->getMove(p));
			break;
		case 5:
		case 6:
			player->switchPokemon(p-3);
		}
		player->catchMove(enemy->getMove(e));
	else{
		player->catchMove(enemy->getMove(e));
		switch (p){
		case 1:
		case 2:
		case 3:
		case 4:
			enemy->catchMove(player->getMove(p));
			break;
		case 5:
		case 6:
			player->switchPokemon(p-3);
		}
	}
}
