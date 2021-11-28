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

	power = 90;
	pp  = 15;
	priority = 0;
	acc = 1;
	
}

class Hurricane(Pokemon pokemon) {

	power = 110;
	acc  = .70;
	pp = 10;
	priority = 0;
}

class DragonClaw (Pokemon pokemon) {
	power = 80;
	pp = 15;
	acc = 1;
	priority = 0;
}

class BulletSeed (Pokemon pokemon) {
	power = 75;
	pp = 25;
	acc = 1;
	priority = 0;
}

class Earthquake (Pokemon pokemon) {
	power = 100;
	pp = 16;
	acc = 1;
	priority = 0;
}

class GigaDrain (Pokemon pokemon) {
	power = 65;
	pp = 24;
	acc = 1;
	priority = 0;
}

class LeafStorm (Pokemon pokemon) {
	power = 120;
	pp = 5;
	acc = .7;
	priority = 0;
}

class HydroPump (Pokemon pokemon) {
	power = 120;
	pp = 5;
	acc = .7;
	priority = 0;
}

class Scald (Pokemon pokemon) {
	power = 90;
	pp = 16;
	acc = 1;
	priority = 0;
}

class FireFang (Pokemon pokemon) {
	power = 70;
	pp =  24;
	acc = 1;
	priority = 0;
}

class QuickAttack (Pokemon pokemon) {
	power = 40;
	pp = 32;
	acc = 1;
	priority = 1;
}

class FireAttack (Pokemon pokemon) {
	power = 120;
	pp = 5;
	acc = .7;
	priority = 0;
{

class FlameCharge (Pokemon pokemon) {
	power = 50;
	pp = 32;
	acc = 1;
	priority = 0;
}

class Ember (Pokemon pokemon) {
	power = 40;
	pp = 32;
	acc = 1;
	priority = 0;
}

class ExtremeSpeed (Pokemon pokemon) {
	power = 80;
	pp = 5;
	acc = 1;
	priority = 1;
}
