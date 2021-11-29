#ifndef __MOVE_HPP__
#define __MOVE_HPP__

#include "type.hpp"
#include "pokemon.hpp"

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
	int acc = 1;
	int priority = 0;
};

class Move_Set : public Move {
protected:
	Moves* move;
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
	void setPower(int p) { power = p; };
	void setType(Type t) {type = t;};
	void setAcc(int a) {acc = a;};
	void setPriority(int pr) {priority = pr;};
};

class DragonDance : public Buff_Move {}

class ShellSmash : public Buff_Move {}

class Agility : public Buff_Move {}

class TailWhip : public Buff_Move {}

class NastyPlot : public Buff_Move {}
/*
class Flamethrower : public Attack_Move {}

class Hurricane : public Attack_Move {}

class DragonClaw : public Attack_Move {}

class BulletSeed : public Attack_Move {}

class Earthquake : public Attack_Move {}

class GigaDrain : public Attack_Move {}

class LeafStorm : public Attack_Move {}

class HydroPump : public Attack_Move {}

class Scald : public Attack_Move {}

class FireFang : public Attack_Move {}

class QuickAttack : public Attack_Move {}

class FireBlast : public Attack_Move {}

class FlameCharge : public Attack_Move {}

class Ember : public Attack_Move {}

class ExtremeSpeed : public Attack_Move {}
*/


