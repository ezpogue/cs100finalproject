#include "move.hpp"
#include "type.hpp"
#include "battle.hpp"
#include "pokemon.hpp"
#include "trainer.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

using  namespace std;
int main(int argc, char* argv[]) {


	srand (time(NULL));	
		
	Move_Composite* Shell_Smash = new Move_Composite("Shell Smash",new Normal_Move() , 100, 0, new Buff_Move(1,2));
        Shell_Smash->addMove(new Buff_Move(3,2));
        Shell_Smash->addMove(new Buff_Move(2, .5));
	Move_Composite* DragonDance = new Move_Composite("Dragon Dance", new Dragon_Move(), 100, 0, new Buff_Move(1,1.5));
	DragonDance->addMove(new Buff_Move(3,1.5));

	Pokemon_Type Fire("Fire");
	Pokemon_Type Water("Water");
	Pokemon_Type Grass("Grass");
	Pokemon_Type Poison("Poison");
	Pokemon_Type Flying("Flying");

		Pokemon* Rapidash = new Pokemon("Rapidash", Fire, Fire, new Attack_Move("Fire Blast", new Fire_Move(), 70, 0, 120), new Attack_Move("Flamethrower", new Fire_Move(), 100, 0, 90), new Debuff_Move("Tail Whip", new Normal_Move(), 100, 0, 1, 2), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), 106, 90, 68, 94);
		Pokemon* Ponyta1 = new Pokemon("Ponyta", Fire, Fire, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flame Charge", new Fire_Move(),  100, 0, 50), new Buff_Move("Agility", new Normal_Move(), 100, 0, 3, 2), new Debuff_Move("Tail Whip", new Normal_Move(), 100, 0, 1, 2), 106, 85, 61, 89);
        Pokemon* Ponyta2 = new Pokemon("Ponyta", Fire, Fire, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flame Charge", new Fire_Move(),  100, 0, 50), new Buff_Move("Agility", new Normal_Move(), 100, 0, 3, 2), new Debuff_Move("Tail Whip", new Normal_Move(), 100, 0, 1, 2), 106, 85, 61, 89);
        Pokemon* Ponyta3 = new Pokemon("Ponyta", Fire, Fire, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flame Charge", new Fire_Move(),  100, 0, 50), new Buff_Move("Agility", new Normal_Move(), 100, 0, 3, 2), new Debuff_Move("Tail Whip", new Normal_Move(), 100, 0, 1, 2), 106, 85, 61, 89);
		Pokemon* Arcanine = new Pokemon("Arcanine", Fire, Fire, new Attack_Move("Fire Blast", new Fire_Move(), 70, 0, 120), new Attack_Move("Flamethrower", new Fire_Move(), 100, 0, 90), new Buff_Move("Agility", new Normal_Move(), 100, 0, 3, 2), new Attack_Move("Extreme Speed", new Normal_Move(), 100, 1, 80), 131, 102, 79, 91);
		Pokemon* Growlithe = new Pokemon("Growlithe", Fire, Fire, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), new Attack_Move("Fire Fang", new Fire_Move(), 100, 0, 70), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), 106, 73, 53, 65);
		Pokemon* Ninetales = new Pokemon("Ninetales", Fire, Fire, new Attack_Move("Fire Blast", new Fire_Move(), 70, 0, 120), new Attack_Move("Flamethrower", new Fire_Move(), 100, 0, 90), new Buff_Move("Nasty Plot", new Psychic_Move(), 100, 0, 1, 2), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), 124, 95, 93, 110);
		Pokemon* Vulpix1 = new Pokemon("Vulpix", Fire, Fire, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flamethrower", new Fire_Move(), 100, 0, 90), new Debuff_Move("Tail Whip", new Normal_Move(), 100, 0, 1, 2), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), 88, 47, 47, 66);
        Pokemon* Vulpix2 = new Pokemon("Vulpix", Fire, Fire, new Attack_Move("Ember", new Fire_Move(), 100, 0, 40), new Attack_Move("Flamethrower", new Fire_Move(), 100, 0, 90), new Debuff_Move("Tail Whip", new Normal_Move(), 100, 0, 1, 2), new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40), 88, 47, 47, 66);
		Pokemon* Charizard = new Pokemon("Charizard", Fire, Flying, new Attack_Move("Fire Blast", new Fire_Move(), 70, 0, 120), new Attack_Move("Dragon Claw", new Dragon_Move(), 100, 0, 80), DragonDance, new Attack_Move("Hurricane", new Flying_Move(), 70, 0, 110), 121, 82, 77, 95);
		Pokemon* Venusaur = new Pokemon("Venusaur", Grass, Poison, new Attack_Move("Leaf Storm", new Grass_Move(), 70, 0, 120), new Attack_Move("Bullet Seed", new Grass_Move(), 100, 0, 75), new Attack_Move("Giga Drain", new Grass_Move(), 100, 0, 65), new Attack_Move("Earthquake", new Ground_Move(), 100, 0, 100), 117, 77, 83, 75);
		Pokemon* Blastoise = new Pokemon("Blastoise", Water, Water, new Attack_Move("Hydro Pump", new Water_Move(), 70, 0, 120), new Attack_Move("Scald", new Water_Move(), 100, 0, 90), new Attack_Move("Earthquake", new Ground_Move(), 100, 0, 100), Shell_Smash, 125, 83, 97, 79);

		Trainer* Me = new Trainer("Red", Charizard, Blastoise, Venusaur);
		Trainer* One = new Trainer("Ben", Ponyta1, Ponyta2, Growlithe);
		Trainer* Two = new Trainer("Jerry", Vulpix1, Ponyta3, Vulpix2);
		Trainer* Leader = new Trainer("Blaine", Rapidash, Arcanine, Ninetales);
	
	Battle b1(Me, One);
	int h = rand() % 4;
	int i = 1;
	int j = 0;	
	cout << "You are battling Trainer Ben as Red!" <<endl;
	cout << endl;
	while(b1.battleComplete() == false) {
		cout << "=======================================" << endl;
                cout << "=======================================" << endl;
		cout << endl;
		cout << b1.getTrainer()->getPokemon()->getName() <<" "<< b1.getTrainer()->getPokemon()->getCurrHP() << "/" << b1.getTrainer()->getPokemon()->getMaxHP() << endl;
		cout << Me->getPokemon()->getName() << " " << Me->getPokemon()->getCurrHP() << "/" << Me->getPokemon()->getMaxHP() << endl;
		cout << endl;
                cout << "=======================================" << endl;
		cout << endl;
		cout << "Choose a move:" << endl;
		cout << "1. "<< Me->getPokemon()->getMove(0)->getName() << " 2. " << Me->getPokemon()->getMove(1)->getName() << " 3. " <<  Me->getPokemon()->getMove(2)->getName() << " 4. " << Me->getPokemon()->getMove(3)->getName() << " " <<endl;
		int x = 0;
		cout << endl;
		cin >> x;
		
		cout << endl;
                cout << "=======================================" << endl;
		cout << endl;
		b1.turn(x, h);
		cout << endl;
		if(b1.getTrainer()->getPokemon()->getCurrHP() <= 0 && i != 3) {
			cout << b1.getTrainer()->getPokemon()->getName() << " fainted!" << endl;
			b1.getTrainer()->switchPokemon(i);
			i++;
		}
		if(Me->getPokemon()->getCurrHP() <= 0) {
			cout << "What Pokemon would you like to switch to?" <<endl;
			if(Me->getSlot(0)->getCurrHP() > 0) {
				cout <<"1. "<< Me->getSlot(0)->getName() << " ";
			} else {
				cout <<"1. "<< Me->getSlot(0)->getName() << " (Fainted) ";
			}
                        if(Me->getSlot(1)->getCurrHP() > 0) {
                                cout <<"2. "<< Me->getSlot(1)->getName() << " ";
                        } else {
				cout <<"2. "<< Me->getSlot(1)->getName() << " (Fainted) ";
			}
                        if(Me->getSlot(2)->getCurrHP() > 0) {
                                cout <<"3. "<< Me->getSlot(2)->getName() << endl;
                        } else {
				cout <<"3. "<< Me->getSlot(2)->getName() << " (Fainted) " << endl;
			}
                        if (Me->getSlot(0)->getCurrHP() < 0 && Me->getSlot(1)->getCurrHP() < 0 && Me->getSlot(2)->getCurrHP() < 0) {
                                break;
                        }
	
			while(Me->getSlot(j)->getCurrHP() < 0) {
				cin >> j;
				j--;
			
				if (Me->getSlot(j)->getCurrHP() < 0) {
					cout << "You cannot choose a fainted Pokemon!" << endl;
				} else {
                        		Me->switchPokemon(j);
				}
			}       
                }
		h = rand() % 4;		
	}	
	cout << endl;
        cout << "=======================================" << endl;
	cout << endl;
	if ("Red" != b1.getWinner()) {
		cout << "Ben wins!" << endl;
		cout << "You lose, game over!" << endl;
		delete Me;
		delete One;
		delete Two;	
		delete Leader;
		return 0;
	} else {
		cout << "Red wins!" << endl;
	}
	for(int g = 0; g < 50; g++) {
		cout << endl;
	}
	Battle b2(Me, Two);
	
	h = rand() % 4;
	i = 1;
	j = 0;
        cout << "You are battling Trainer Jerry as Red!" <<endl;
        cout << endl;
	
	while(b2.battleComplete() == false) {
		cout << "=======================================" << endl;
                cout << "=======================================" << endl;
		cout << endl;
		cout << b2.getTrainer()->getPokemon()->getName() <<" "<< b2.getTrainer()->getPokemon()->getCurrHP() << "/" << b2.getTrainer()->getPokemon()->getMaxHP() << endl;
		cout << Me->getPokemon()->getName() << " " << Me->getPokemon()->getCurrHP() << "/" << Me->getPokemon()->getMaxHP() << endl;
		cout << endl;
                cout << "=======================================" << endl;
		cout << endl;
		cout << "Choose a move:" << endl;
		cout << "1. "<< Me->getPokemon()->getMove(0)->getName() << " 2. " << Me->getPokemon()->getMove(1)->getName() << " 3. " <<  Me->getPokemon()->getMove(2)->getName() << " 4. " << Me->getPokemon()->getMove(3)->getName() << " " <<endl;
		int x = 0;
		cout << endl;
		cin >> x;
		cout << endl;
                cout << "=======================================" << endl;
		cout << endl;
		b2.turn(x, h);
		cout << endl;
		if(b2.getTrainer()->getPokemon()->getCurrHP() <= 0 && i != 3) {
			cout << b2.getTrainer()->getPokemon()->getName() << " fainted!" << endl;
			b2.getTrainer()->switchPokemon(i);
			i++;
		}
		if(Me->getPokemon()->getCurrHP() <= 0) {
			cout << "What Pokemon would you like to switch to?" <<endl;
			if(Me->getSlot(0)->getCurrHP() > 0) {
				cout <<"1. "<< Me->getSlot(0)->getName() << " ";
			} else {
				cout <<"1. "<< Me->getSlot(0)->getName() << " (Fainted) ";
			}
                        if(Me->getSlot(1)->getCurrHP() > 0) {
                                cout <<"2. "<< Me->getSlot(1)->getName() << " ";
                        } else {
				cout <<"2. "<< Me->getSlot(1)->getName() << " (Fainted) ";
			}
                        if(Me->getSlot(2)->getCurrHP() > 0) {
                                cout <<"3. "<< Me->getSlot(2)->getName() << endl;
                        } else {
				cout <<"3. "<< Me->getSlot(2)->getName() << " (Fainted) " << endl;
			}
                        if (Me->getSlot(0)->getCurrHP() < 0 && Me->getSlot(1)->getCurrHP() < 0 && Me->getSlot(2)->getCurrHP() < 0) {
                                break;
                        }
	
			while(Me->getSlot(j)->getCurrHP() < 0) {
				cin >> j;
				j--;
			
				if (Me->getSlot(j)->getCurrHP() < 0) {
					cout << "You cannot choose a fainted Pokemon!" << endl;
				} else {
                        		Me->switchPokemon(j);
				}
			}       
                }
		 h = rand() % 4;		
	}	
	cout << endl;
        cout << "=======================================" << endl;
	cout << endl;
	if ("Red" != b2.getWinner()) {
		cout << "Jerry wins!" << endl;
		cout << "You lose, game over!" << endl;
		delete Me;
		delete One;
		delete Two;	
		delete Leader;
		return 0;
	} else {
		cout << "Red wins!" << endl;
	}
	Battle b3(Me, Leader);	
	 
        for(int g = 0; g < 50; g++) {
                cout << endl;
        }

	h = rand() % 4;
	i = 1;
	j = 0;
        cout << "You are battling Gym Leader Blaine as Red!" <<endl;
        cout << endl;
	
	while(b3.battleComplete() == false) {
		cout << "=======================================" << endl;
                cout << "=======================================" << endl;
		cout << endl;
		cout << b3.getTrainer()->getPokemon()->getName() <<" "<< b3.getTrainer()->getPokemon()->getCurrHP() << "/" << b3.getTrainer()->getPokemon()->getMaxHP() << endl;
		cout << Me->getPokemon()->getName() << " " << Me->getPokemon()->getCurrHP() << "/" << Me->getPokemon()->getMaxHP() << endl;
		cout << endl;
                cout << "=======================================" << endl;
		cout << endl;
		cout << "Choose a move:" << endl;
		cout << "1. "<< Me->getPokemon()->getMove(0)->getName() << " 2. " << Me->getPokemon()->getMove(1)->getName() << " 3. " <<  Me->getPokemon()->getMove(2)->getName() << " 4. " << Me->getPokemon()->getMove(3)->getName() << " " <<endl;
		int x = 0;
		cout << endl;
		cin >> x;
		cout << endl;
                cout << "=======================================" << endl;
		cout << endl;
		b3.turn(x, h);
		cout << endl;
		if(b3.getTrainer()->getPokemon()->getCurrHP() <= 0 && i != 3) {
			cout << b3.getTrainer()->getPokemon()->getName() << " fainted!" << endl;
			b3.getTrainer()->switchPokemon(i);
			i++;
		}
		if(Me->getPokemon()->getCurrHP() <= 0) {
			cout << "What Pokemon would you like to switch to?" <<endl;
			if(Me->getSlot(0)->getCurrHP() > 0) {
				cout <<"1. "<< Me->getSlot(0)->getName() << " ";
			} else {
				cout <<"1. "<< Me->getSlot(0)->getName() << " (Fainted) ";
			}
                        if(Me->getSlot(1)->getCurrHP() > 0) {
                                cout <<"2. "<< Me->getSlot(1)->getName() << " ";
                        } else {
				cout <<"2. "<< Me->getSlot(1)->getName() << " (Fainted) ";
			}
                        if(Me->getSlot(2)->getCurrHP() > 0) {
                                cout <<"3. "<< Me->getSlot(2)->getName() << endl;
                        } else {
				cout <<"3. "<< Me->getSlot(2)->getName() << " (Fainted) " << endl;
			}
                        if (Me->getSlot(0)->getCurrHP() < 0 && Me->getSlot(1)->getCurrHP() < 0 && Me->getSlot(2)->getCurrHP() < 0) {
                                break;
                        }
	
			while(Me->getSlot(j)->getCurrHP() < 0) {
				cin >> j;
				j--;
			
				if (Me->getSlot(j)->getCurrHP() < 0) {
					cout << "You cannot choose a fainted Pokemon!" << endl;
				} else {
                        		Me->switchPokemon(j);
				}
			}       
                }
		h = rand() % 4;
	}
	cout << endl;
        cout << "=======================================" << endl;
	cout << endl;
	if ("Red" != b3.getWinner()) {
		cout << "Blaine wins!" << endl;
		cout << "You lose, game over!" << endl;
		delete Me;
		delete One;
		delete Two;	
		delete Leader;
		return 0;
		} else {
		cout << "Red wins, you earned the Fire Gym Badge!" << endl;
	}
	delete Me;
	delete One;
	delete Two;	
	delete Leader;
	return 0;
}


