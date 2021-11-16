#ifndef __MOVE_HPP__
#define __MOVE_HPP__

#include "type.hpp"

class Move{ 

protected: 
	std::string name;
public:
	Move(std::string name);
	std::string getName();
};

class Poke_Move : public Move {
protected:
	Type type;
	int pp;
	int acc;
	int priority;
};

class Move_Set : public Move {
protected:
	Moves* move;
};

class Status_Move : public Poke_Move {
protected:
	std::string statustype;
	int duration;
};

class Buff_Move : public Poke_Move {
protected:
	int stataffected;
	int statchange;
	int statmultiplier;
public:
	void changeStat();
};

class Attack_Move : public Poke_Move {
protected:
	int power;
public:
	void moveDamage();
};

