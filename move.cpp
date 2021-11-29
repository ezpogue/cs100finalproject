#include "move.hpp"
#include "type.hpp"

#include <string>
#include <vector>

Move::Move():name(""), type(nullptr), accuracy(100), priority(0){}

Move::Move(std::string n, Type* t, int acc, int prio):name(n), type(t), accuracy(acc), priority(prio){}

std::string Move::getName(){
	return name;
}

Type* Move::getType(){
	return type;
}
int Move::getAccuracy(){
	return accuracy;
}

int Move::getPriority(){
	return priority;
}

Move_Composite::Move_Composite(std::string n, Type* t, int acc, int prio, Move* m):Move(n,t,acc,prio){
	movelist.push_back(m);
}

void Move_Composite::addMove(Move* m){
	movelist.push_back(m);
}

int Move_Composite::getDamage(){
	int damage;
	for (auto i: movelist)
		damage += i->getDamage();
	return damage;
}

float Move_Composite::getATKDebuff(){
	float debuff;
	for (auto i: movelist)
		debuff *= i->getATKDebuff();
	return debuff;
}

float Move_Composite::getDEFDebuff(){
	float debuff;
	for (auto i: movelist)
		debuff *= i->getDEFDebuff();
	return debuff;
}

float Move_Composite::getSPDDebuff(){
	float debuff;
	for (auto i: movelist)
		debuff *= i->getSPDDebuff();
	return debuff;
} 

float Move_Composite::getATKBuff(){
	float buff;
	for (auto i: movelist)
		buff *= i->getATKBuff();
	return buff;
} 

float Move_Composite::getDEFBuff(){
	float buff;
	for (auto i: movelist)
		buff *= i->getDEFBuff();
	return buff;
} 

float Move_Composite::getSPDBuff(){
	float buff;
	for (auto i: movelist)
		buff *= i->getSPDBuff();
	return buff;
} 

Buff_Move::Buff_Move(int affected, float multiplier):Move(), stataffected(affected), statmultiplier(multiplier){}

Buff_Move::Buff_Move(std::string n, Type* t, int acc, int prio, int affected, float multiplier):Move(n,t,acc,prio), stataffected(affected), statmultiplier(multiplier){}

int Buff_Move::getDamage(){return 0;}

float Buff_Move::getATKDebuff(){return 1;}

float Buff_Move::getDEFDebuff(){return 1;}

float Buff_Move::getSPDDebuff(){return 1;}

float Buff_Move::getATKBuff(){
	if (stataffected == 1)
		return statmultiplier;
	else
		return 1;
}

float Buff_Move::getDEFBuff(){
	if (stataffected == 2)
		return statmultiplier;
	else
		return 1;
}

float Buff_Move::getSPDBuff(){
	if (stataffected == 3)
		return statmultiplier;
	else
		return 1;
}

Debuff_Move::Debuff_Move(int affected, float multiplier):Move(), stataffected(affected), statmultiplier(multiplier){}

Debuff_Move::Debuff_Move(std::string n, Type* t, int acc, int prio, int affected, float multiplier):Move(n,t,acc,prio), stataffected(affected), statmultiplier(multiplier){}

int Debuff_Move::getDamage(){return 0;}

float Debuff_Move::getATKDebuff(){
	if (stataffected == 1)
		return statmultiplier;
	else
		return 1;
}

float Debuff_Move::getDEFDebuff(){
	if (stataffected == 2)
		return statmultiplier;
	else
		return 1;
}

float Debuff_Move::getSPDDebuff(){
	if (stataffected == 3)
		return statmultiplier;
	else
		return 1;
}

float Debuff_Move::getATKBuff(){return 1;}

float Debuff_Move::getDEFBuff(){return 1;}

float Debuff_Move::getSPDBuff(){return 1;}

Attack_Move::Attack_Move(int pow):Move(), power(pow){}

Attack_Move::Attack_Move(std::string n, Type* t, int acc, int prio, int pow):Move(n,t,acc,prio), power(pow){}

int Attack_Move::getDamage(){return power;}

float Attack_Move::getATKDebuff(){return 1;}

float Attack_Move::getDEFDebuff(){return 1;}

float Attack_Move::getSPDDebuff(){return 1;}

float Attack_Move::getATKBuff(){return 1;}

float Attack_Move::getDEFBuff(){return 1;}

float Attack_Move::getSPDBuff(){return 1;}