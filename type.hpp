#ifndef __TYPE_HPP__
#define __TYPE_HPP__

#include <string>
#include <vector>

class Type{
protected:
	std::string name;
};

class Move_Type:public Type{
protected:
	std::vector<Type> supereffective;
	std::vector<Type> notveryeffective;
public:
	float effectiveness(Pokemon){}
};

class Pokemon_Type : public Type{};

class Bug_Move:public Move_Type{};

class Dragon_Move:public Move_Type{};

class Electric_Move:public Move_Type{};

class Fighting_Move:public Move_Type{};

class Fire_Move:public Move_Type{};

class Flying_Move:public Move_Type{};

class Ghost_Move:public Move_Type{};

class Grass_Move:public Move_Type{};

class Ground_Move:public Move_Type{};

class Ice_Move:public Move_Type{};

class Normal_Move:public Move_Type{};

class Poison_Move:public Move_Type{};

class Psychic_Move:public Move_Type{};

class Rock_Move:public Move_Type{};

class Water_Move:public Move_Type{};
#endif
