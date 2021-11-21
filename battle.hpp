#ifndef __BATTLE_HPP__
#define __BATTLE_HPP__

#include <string>
#include "trainer.hpp"

class Battle
    {
        protected:
		Trainer* player;
		Trainer* enemy;
		std::string winner;
	public:
		Battle(Trainer* p, Trainer* e);
		bool battleComplete();
		std::string getWinner();
		void turn(unsigned int p, unsigned int e);
    };

#endif
