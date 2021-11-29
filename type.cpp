#include "type.hpp"

#include <set>
#include <string>

Type::Type():name(""){}

Type::Type(std::string n):name(n){}

std::string Type::getName(){return name;}

Move_Type::Move_Type():Type(){}

Move_Type::Move_Type(std::string n):Type(n){}

Move_Type::Move_Type(std::set<std::string> a, std::set<std::string> b,std::set<std::string> c,  std::string n):Type(n), supereffective(a), notveryeffective(b), immune(c){}

float Move_Type::effectiveness(Pokemon_Type type1, Pokemon_Type type2)
{
	float effectiveness = 1;
	if (immune.find(type1.getName()) != immune.end()) return 0;
	if (supereffective.find(type1.getName()) != supereffective.end()) effectiveness = effectiveness*2;
	if (notveryeffective.find(type1.getName()) != notveryeffective.end()) effectiveness = effectiveness/2;
	if (type2.getName() != "" && type2.getName()!=type1.getName()){
		if (immune.find(type2.getName()) != immune.end()) return 0;
		if (supereffective.find(type2.getName()) != supereffective.end()) effectiveness = effectiveness*2;
		if (notveryeffective.find(type2.getName()) != notveryeffective.end()) effectiveness = effectiveness/2;
	} 
	return effectiveness;
}

Pokemon_Type::Pokemon_Type():Type(){}

Pokemon_Type::Pokemon_Type(std::string n):Type(n){}

Bug_Move::Bug_Move():Move_Type("Bug")
{
	supereffective = {"Poison","Grass","Psychic"};
	notveryeffective = {"Fighting","Flying","Ghost","Fire"};
	immune = {};
}

Dragon_Move::Dragon_Move():Move_Type("Dragon")
{
	supereffective = {"Dragon"};
	notveryeffective = {};
	immune = {};
}

Electric_Move::Electric_Move():Move_Type("Electric")
{
	supereffective = {"Flying","Water"};
	notveryeffective = {"Grass","Electric","Dragon"};
	immune = {"Ground"};
}

Fighting_Move::Fighting_Move():Move_Type("Fighting")
{
	supereffective = {"Normal","Rock","Ice"};
	notveryeffective = {"Flying","Poison","Bug","Psychic"};
	immune = {"Ghost"};
}

Fire_Move::Fire_Move():Move_Type("Fire")
{
	supereffective = {"Bug","Grass","Ice"};
	notveryeffective = {"Rock","Fire","Water","Dragon"};
	immune = {};
}

Flying_Move::Flying_Move():Move_Type("Flying")
{
	supereffective = {"Fighting","Bug","Grass"};
	notveryeffective = {"Rock","Electric"};
	immune = {};
}

Ghost_Move::Ghost_Move():Move_Type("Ghost")
{
	supereffective = {"Ghost"};
	notveryeffective = {};
	immune = {"Normal","Psychic"};
}

Grass_Move::Grass_Move():Move_Type("Grass")
{
	supereffective = {"Ground","Rock","Water"};
	notveryeffective = {"Flying","Poison","Bug","Fire","Grass","Dragon"};
	immune = {};
}

Ground_Move::Ground_Move():Move_Type("Ground")
{
	supereffective = {"Poison","Rock","Fire","Ground"};
	notveryeffective = {"Bug","Grass"};
	immune = {"Flying"};
}

Ice_Move::Ice_Move():Move_Type("Ice")
{
	supereffective = {"Flying","Ground","Grass","Dragon"};
	notveryeffective = {"Water","Ice"};
	immune = {};
}

Normal_Move::Normal_Move():Move_Type("Normal")
{
	supereffective = {};
	notveryeffective = {"Rock"};
	immune = {"Ghost"};
}

Poison_Move::Poison_Move():Move_Type("Poison")
{
	supereffective = {"Bug","Grass"};
	notveryeffective = {"Poison","Ground","Rock","Ghost"};
	immune = {};
}

Psychic_Move::Psychic_Move():Move_Type("Psychic")
{
	supereffective = {"Fighting","Poison"};
	notveryeffective = {"Psychic"};
	immune = {};
}

Rock_Move::Rock_Move():Move_Type("Rock")
{
	supereffective = {"Flying","Bug","Fire","Ice"};
	notveryeffective = {"Fighting","Ground"};
	immune = {};
}

Water_Move::Water_Move():Move_Type("Water")
{
	supereffective = {"Ground","Rock","Fire"};
	notveryeffective = {"Water","Grass","Dragon"};
	immune = {};
}
