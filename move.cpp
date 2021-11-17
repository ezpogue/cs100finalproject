#include "move.hpp"
#include "pokemon.hpp"

#include <string>

Move::Move(std::string name):name(name) {}

std::string Move::getName() {
	return name;
}

void Buff_Move::changeStat(Pokemon p, int stataffected, int statmultiplier) {

     p.stats[stataffected] = p.stats[stataffected] * statmultiplier;

}

class DragonDance(Pokemon pokemon) {   
                                              

        changeStat(pokemon, 1, 1.5);
	changeStat(pokemon, 3, 1.5);
}

class ShellSmash(Pokemon pokemon) {


        changeStat(pokemon, 1, 2);
        changeStat(pokemon, 2, 0.666);
        changeStat(pokemon, 3, 2);

}


class Agility(Pokemon pokemon) {

        changeStat(pokemon, 3, 2);
}

class TailWhip(Pokemon pokemon) {

	changeStat(pokemon, 2, 0.5);

}

class NastyPlot(Pokemon pokemon) {

	changeStat(pokemon, 1, 2);
}

class Flamethrower(Pokemon pokemon) {


	
}

