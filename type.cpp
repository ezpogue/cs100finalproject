#include "type.hpp"

#include <set>
#include <string>
#include <utility> //std::pair

Type::Type(string n):name(n){}

std::string Type::getName(){return name;}

Move_Type::Move_Type(string n):Type(n){}

Move_Type::Move_Type(std::set<Type> a, std::set<Type> b,std::set<Type> c,  std::string n):Type(n), supereffective(a), notveryeffective(b), immune(c){}

float Move_Type::effectiveness(Pokemon p)
{
	float effectiveness = 1;
	std::pair <Pokemon_Type, Pokemon_Type> typecheck = p.getType();
	if (immune.find(typecheck.first.getType()) != immune.end()) return 0;
	if (immune.find(typecheck.second.getType()) != immune.end()) return 0;
	if (supereffective.find(typecheck.first.getType()) != supereffective.end()) effectiveness = effectiveness*2;
	if (supereffective.find(typecheck.second.getType()) != supereffective.end()) effectiveness = effectiveness*2;
	if (notveryeffective.find(typecheck.first.getType()) != notveryeffective.end()) effectiveness = effectiveness/2;
	if (notveryeffective.find(typecheck.second.getType()) != notveryeffective.end()) effectiveness = effectiveness/2;
	return effectiveness;
}

Pokemon_Type::Pokemon_Type(string n):Type(n){}

Bug_Move::Bug_Move()
{
	name = "Bug";
	supereffective = {Pokemon_Type("Poison"), Pokemon_Type("Grass"), Pokemon_Type("Psychic")};
	notveryeffective = {Pokemon_Type("Fighting"), Pokemon_Type("Flying"), Pokemon_Type("Ghost"), Pokemon_Type("Fire")}
	immune = {};
}

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
