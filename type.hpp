#ifndef __TYPE_HPP__
#define __TYPE_HPP__

#include <string>
#include <set>

class Type{
protected:
	std::string name;
public:
	Type();
	Type(std::string n);
	std::string getName();
};

class Pokemon_Type : public Type{
public:
	Pokemon_Type();
	Pokemon_Type(std::string n);
};

class Move_Type:public Type{
protected:
	std::set<std::string> supereffective;
	std::set<std::string> notveryeffective;
	std::set<std::string> immune;
public:
	Move_Type();
	Move_Type(std::string n);
	Move_Type(std::set<std::string> a, std::set<std::string> b, std::set<std::string> c,  std::string n);
	float effectiveness(Pokemon_Type type1, Pokemon_Type type2);
	
};

class Bug_Move:public Move_Type{
public:
	Bug_Move();
};

class Dragon_Move:public Move_Type{
public:
	Dragon_Move();
};

class Electric_Move:public Move_Type{
public:
	Electric_Move();
};

class Fighting_Move:public Move_Type{
public:
	Fighting_Move();
};

class Fire_Move:public Move_Type{
public:
	Fire_Move();
};

class Flying_Move:public Move_Type{
public:
	Flying_Move();
};

class Ghost_Move:public Move_Type{
public:
	Ghost_Move();
};

class Grass_Move:public Move_Type{
public:
	Grass_Move();
};

class Ground_Move:public Move_Type{
public:
	Ground_Move();
};

class Ice_Move:public Move_Type{
public:
	Ice_Move();
};

class Normal_Move:public Move_Type{
public:
	Normal_Move();
};

class Poison_Move:public Move_Type{
public:
	Poison_Move();
};

class Psychic_Move:public Move_Type{
public:
	Psychic_Move();
};

class Rock_Move:public Move_Type{
public:
	Rock_Move();
};

class Water_Move:public Move_Type{
public:
	Water_Move();
};
#endif
