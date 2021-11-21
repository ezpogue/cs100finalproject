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

std::string Battle::getWinner(){return winner;}

void Battle::turn(unsigned int p, unsigned int e)
{

}
