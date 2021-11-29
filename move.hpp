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
	virtual int getDamage();
	virtual float getATKDebuff();
	virtual float getDEFDebuff();
	virtual float getSPDDebuff();
	virtual float getATKBuff();
	virtual float getDEFBuff();
	virtual float getSPDBuff();
};

class Move_Set : public Move {
protected:
	vector<Move*> movelist;
public:
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
	int getDamage();
	float getATKDebuff();
	float getDEFDebuff();
	float getSPDDebuff();
	float getATKBuff();
	float getDEFBuff();
	float getSPDBuff();
};

#endif

