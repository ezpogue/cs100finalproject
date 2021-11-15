#ifndef __TYPE_HPP__
#define __TYPE_HPP__

#include <string>
#include <vector>

class Type{
protected:
	std::string name;
public
	Type(std::string n);
	std::string getName();
};

class Move_Type:public Type{
protected:
	std::vector<Type> supereffective;
	std::vector<Type> notveryeffective;
	std::vector<Type> immune;
public:
	Move_Type(std::vector<Type> a, std::vector<Type> b, std::Vector<Type> c,  std::string n);
	float effectiveness(Pokemon p);
	
};

class Pokemon_Type : public Type{
public:
	Pokemon_Type(std::string n);
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
