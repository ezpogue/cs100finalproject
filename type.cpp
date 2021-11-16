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

Bug_Move::Bug_Move():Move_Type("Bug")
{
	supereffective = {Pokemon_Type("Poison"), Pokemon_Type("Grass"), Pokemon_Type("Psychic")};
	notveryeffective = {Pokemon_Type("Fighting"), Pokemon_Type("Flying"), Pokemon_Type("Ghost"), Pokemon_Type("Fire")};
	immune = {};
}

Dragon_Move::Dragon_Move():Move_Type("Dragon")
{
	supereffective = {Pokemon_Type("Dragon")};
	notveryeffective = {};
	immune = {};
}

Electric_Move::Electric_Move():Move_Type("Electric")
{
	supereffective = {Pokemon_Type("Flying"), Pokemon_Type("Water")};
	notveryeffective = {Pokemon_Type("Grass"), Pokemon_Type("Electric"), Pokemon_Type("Dragon")};
	immune = {Pokemon_Type("Ground")};
}

Fighting_Move::Fighting_Move():Move_Type("Fighting")
{
	supereffective = {Pokemon_Type("Normal"), Pokemon_Type("Rock"), Pokemon_Type("Ice")};
	notveryeffective = {Pokemon_Type("Flying"), Pokemon_Type("Poison"), Pokemon_Type("Bug"), Pokemon_Type("Psychic")};
	immune = {Pokemon_Type("Ghost")};
}

Fire_Move::Fire_Move():Move_Type("Fire")
{
	supereffective = {Pokemon_Type("Bug"), Pokemon_Type("Grass"), Pokemon_Type("Ice")};
	notveryeffective = {Pokemon_Type("Rock"), Pokemon_Type("Fire"), Pokemon_Type("Water"), Pokemon_Type("Dragon")};
	immune = {};
}

Flying_Move::Flying_Move():Move_Type("Flying")
{
	supereffective = {Pokemon_Type("Fighting"), Pokemon_Type("Bug"), Pokemon_Type("Grass")};
	notveryeffective = {Pokemon_Type("Rock"), Pokemon_Type("Electric")};
	immune = {};
}

Ghost_Move::Ghost_Move():Move_Type("Ghost")
{
	supereffective = {Pokemon_Type("Ghost")};
	notveryeffective = {};
	immune = {Pokemon_Type("Normal"), Pokemon_Type("Psychic")};
}

Grass_Move::Grass_Move():Move_Type("Grass")
{
	supereffective = {Pokemon_Type("Ground"), Pokemon_Type("Rock"), Pokemon_Type("Water")};
	notveryeffective = {Pokemon_Type("Flying"), Pokemon_Type("Poison"), Pokemon_Type("Bug"), Pokemon_Type("Fire"), Pokemon_Type("Grass"), Pokemon_Type("Dragon")};
	immune = {};
}

Ground_Move::Ground_Move():Move_Type("Ground")
{
	supereffective = {Pokemon_Type("Poison"), Pokemon_Type("Rock"), Pokemon_Type("Fire"), Pokemon_Type("Ground")};
	notveryeffective = {Pokemon_Type("Bug"), Pokemon_Type("Grass")};
	immune = {Pokemon_Type("Flying")};
}

Ice_Move::Ice_Move():Move_Type("Ice")
{
	supereffective = {Pokemon_Type("Flying"), Pokemon_Type("Ground"), Pokemon_Type("Grass"), Pokemon_Type("Dragon")};
	notveryeffective = {Pokemon_Type("Water"), Pokemon_Type("Ice")};
	immune = {};
}

Normal_Move::Normal_Move():Move_Type("Normal")
{
	supereffective = {};
	notveryeffective = {Pokemon_Type("Rock")};
	immune = {Pokemon_Type("Ghost")};
}

Poison_Move::Poison_Move():Move_Type("Poison")
{
	supereffective = {Pokemon_Type("Bug"), Pokemon_Type("Grass")};
	notveryeffective = {Pokemon_Type("Poison"), Pokemon_Type("Ground"), Pokemon_Type("Rock"), Pokemon_Type("Ghost")};
	immune = {};
}

Psychic_Move::Psychic_Move():Move_Type("Psychic")
{
	supereffective = {Pokemon_Type("Fighting"), Pokemon_Type("Poison")};
	notveryeffective = {Pokemon_Type("Psychic")};
	immune = {};
}

Rock_Move::Rock_Move():Move_Type("Rock")
{
	supereffective = {Pokemon_Type("Flying"), Pokemon_Type("Bug"), Pokemon_Type("Fire"), Pokemon_Type("Ice")};
	notveryeffective = {Pokemon_Type("Fighting"), Pokemon_Type("Ground")};
	immune = {};
}

Water_Move::Water_Move():Move_Type("Water")
{
	supereffective = {Pokemon_Type("Ground"), Pokemon_Type("Rock"), Pokemon_Type("Fire")};
	notveryeffective = {Pokemon_Type("Water"), Pokemon_Type("Grass"), Pokemon_Type("Dragon")};
	immune = {};
}
