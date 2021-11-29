#ifndef __MOVE_HPP__
#define __MOVE_HPP__

#include "type.hpp"
#include "pokemon.hpp"
#include <vector>
class Move{ 
protected: 
	std::string name;
	Type* type;
	int accuracy;
	int priority;
public:
	Move();
	Move(std::string n, Type* t, int acc, int prio);
	std::string getName();
	virtual int getDamage();
	virtual float getATKDebuff();
	virtual float getDEFDebuff();
	virtual float getSPDDebuff();
	virtual float getATKBuff();
	virtual float getDEFBuff();
	virtual float getSPDBuff();
};

class Move_Composite : public Move {
protected:
	vector<Move*> movelist;
public:
	Move_Composite(std::string n, Type* t, int acc, int prio, Move* m);
	void addMove(Move* m);
	int getDamage();
	float getATKDebuff();
	float getDEFDebuff();
	float getSPDDebuff();
	float getATKBuff();
	float getDEFBuff();
	float getSPDBuff();
};

class Buff_Move : public Move {
protected:
	int stataffected;
	int statchange;
	float statmultiplier;
public:
	Buff_Move(int affected, int change, float multiplier);
	Buff_Move(std::string n, Type* t, int acc, int prio, int affected, int change, float multiplier);
	int getDamage();
	float getATKDebuff();
	float getDEFDebuff();
	float getSPDDebuff();
	float getATKBuff();
	float getDEFBuff();
	float getSPDBuff();
};

class Debuff_Move : public Move {
protected:
	int stataffected;
	int statchange;
	float statmultiplier;
public:
	Debuff_Move(int affected, int change, float multiplier);
	Debuff_Move(std::string n, Type* t, int acc, int prio, int affected, int change, float multiplier);
	int getDamage();
	float getATKDebuff();
	float getDEFDebuff();
	float getSPDDebuff();
	float getATKBuff();
	float getDEFBuff();
	float getSPDBuff();
};

class Attack_Move : public Move {
protected:
	int power;
public:
	Attack_Move(int pow);
	Attack_Move(std::string n, Type* t, int acc, int prio, int pow);
	int getDamage();
	float getATKDebuff();
	float getDEFDebuff();
	float getSPDDebuff();
	float getATKBuff();
	float getDEFBuff();
	float getSPDBuff();
};

#endif

