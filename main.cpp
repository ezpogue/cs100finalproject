#include "move.hpp"
class Moves {
public:
	void Moves() {
		Move_Type* a = new Move_Type("Dark");
		Attack_Move* Flamethrower = new Attack_Move("Flamethrower", new Fire_Move(), 100, 0, 90);
                Attack_Move* Hurricane = new Attack_Move("Hurricane", new Flying_Move(), 70, 0, 110); 
                Attack_Move* DragonClaw = new Attack_Move("Dragon Claw", new Dragon_Move(), 100, 0, 80); 
                Attack_Move* BulletSeed = new Attack_Move("Bullet Seed", new Grass_Move(), 100, 0, 75); 
                Attack_Move* Earthquake = new Attack_Move("Earthquake", new Ground_Move(), 100, 0, 100); 
                Attack_Move* GigaDrain = new Attack_Move("Giga Drain", new Grass_Move(), 100, 0, 65); 
                Attack_Move* LeafStorm = new Attack_Move("Leaf Storm", new Grass_Move(), 70, 0, 120); 
                Attack_Move* FireFang = new Attack_Move("Fire Fang", new Fire_Move(), 100, 0, 70); 
                Attack_Move* FireBlast = new Attack_Move("Fire Blast", new Fire_Move(), 70, 0, 120); 
                Attack_Move* HydroPump = new Attack_Move("Hydro Pump", new Water_Move(), 70, 0, 120); 
                Attack_Move* Scald = new Attack_Move("Scald", new Water_Move(), 100, 0, 90);
		Attack_Move* QuickAttack = new Attack_Move("Quick Attack", new Normal_Move(), 100, 1, 40);
		Attack_Move* FlameCharge = new Attack_Move("Flame Charge", new Fire_Move(),  100, 0, 50);
                Attack_Move* Ember = new Attack_Move("Ember"_Move(), new Fire, 100, 0, 40);
                Attack_Move* ExtremeSpeed = new Attack_Move("Extreme Speed", new Normal_Move(), 100, 1, 80);

		Buff_Move* NastyPlot = new Buff_Move("Nasty Plot", a, 100, 0, 1, 2);
		Debuff_Move* TailWhip = new DeBuff_Move("Tail Whip", a, 100, 0, 1, 2);
		Move_Composite Shell_Smash("Shell Smash", a, 100, 0, Move* m);
		Buff_Move* ss1 = new Buff_Move("ss1", a, 100, 1, 2);		
                Buff_Move* ss2 = new Buff_Move("ss2", a, 100, 3, 2);
		Debuff_Move* ss3 = new Debuff_Move("ss3", a, 100, 2, 2);
		m.addMove(ss1);
                m.addMove(ss2);
                m.addMove(ss3);
		Move_Composite DragonDance("Dragon Dance", a, 100, 0, Move* m1);
                Buff_Move* dd1 = new Buff_Move("dd1", a, 100, 1, 1.5);
                Buff_Move* dd2 = new Buff_Move("dd2", a, 100, 3, 1.5);
		m1.addMove(dd1);
		m1.addMove(dd2);
		Buff_Move* Agility = new Buff_Move("Agility", a, 100, 0, 3, 2);
	};
}
class Poke {
public:
	void Poke() {
		Pokemon_Type Fire("Fire");
		Pokemon_Type Water("Water");
		Pokemon_Type Grass("Grass");
		Pokemon_Type Poison("Poison");
		Pokemon_Type Flying("Flying");

		Pokemon Rapidash("Rapidash", Fire, Fire, FireBlast, Flamethrower, TailWhip, QuickAttack, 106, 90, 68, 94);
		Pokemon Ponyta("Ponyta", Fire, Fire, Ember, FlameCharge, Agility, TailWhip, 106, 85, 61, 89);
		Pokemon Arcanine("Arcanine", Fire, Fire, FireBlast, Flamethrower, Agility, ExtremeSpeed, 131, 102, 79, 91);
		Pokemon Growlithe("Growlithe", Fire, Fire, Ember, QuickAttack, FireFang, QuickAttack, 106, 73, 53, 65);
		Pokemon Ninetales("Ninetales", Fire, Fire, FireBlast, Flamethrower, NastyPlot, QuickAttack, 124, 95, 93, 110);
		Pokemon Vulpix("Vulpix", Fire, Fire, Ember, Flamethrower, TailWhip, QuickAttack, 88, 47, 47, 66);
		Pokemon Charizard("Charizard", Fire, Flying, FireBlast, DragonClaw, DragonDance, Hurricane, 121, 82, 77, 95);
		Pokemon Venusaur("Venusaur", Grass, Poison, LeafStorm, BulletSeed, GigaDrain, Earthquake, 117, 77, 83, 75);
		Pokemon Blastoise("Blastoise", Water, Water, HydroPump, Scald, Earthquake, ShellSmash, 125, 83, 97, 79);
	};
}

class Trainers {
public:
	void Trainers {

	Trainer Me(Red, Charizard, Blastoise, Blastoise);
	Trainer One(Ben, Ponyta, Ponyta, Growlithe);
	Trainer Two(Jerry, Vulpix, Ponyta, Vulpix);
	Trainer Leader(Blaine, Rapidash, Arcanine, Ninetales);
	};
}

int main(int argc, char* argv[]) {

Pokemon pokemon; 
}

