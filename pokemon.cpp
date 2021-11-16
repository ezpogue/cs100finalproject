#include "pokemon.hpp"

Pokemon::outDamage(int rawDamage) {
	//TO-DO: adjust damage based off of type of pokemon and type of move
	//also change it so function attacks other pokemon
	health = health - rawDamage;	
}

Pokemon::inDamage(int rawDamage) {
	//TO-DO: adjust damage based off of type of pokemon and type of move
	health = health - rawDamage;
}

Pokemon::getType() {
	return typePair;
} 
