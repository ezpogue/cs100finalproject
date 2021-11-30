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
		bool speedCheck();
		std::string getWinner();
		void turn(int p, int e);
		Trainer* getTrainer();
    };

#endif
