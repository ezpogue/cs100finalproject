#include "move.hpp"
class Moves {
public:
	void Moves() {
		Attack_Move Flamethrower;
                Attack_Move Hurricane; 
                Attack_Move DragonClaw; 
                Attack_Move BulletSeed; 
                Attack_Move Earthquake; 
                Attack_Move GigaDrain; 
                Attack_Move LeafStorm; 
                Attack_Move FireFang; 
                Attack_Move FireBlast; 
                Attack_Move HydroPump; 
                Attack_Move Scald;
		Attack_Move QuickAttack;
		Attack_Move FlameCharge;
                Attack_Move Ember;
                Attack_Move ExtremeSpeed;
		
		Flamethrower.setPower(90);
		Hurricane.setPower(110);
		Hurricane.setAcc(.7);
		DragonClaw.setPower(80);
		BulletSeed.setPower(75);
		Earthquake.setPower(100);
		GigaDrain.setPower(65);
		LeafStorm.setPower(120);
		LeafStorm.setAcc(.7);
		HydroPump.setPower(120);
		Scald.setPower(90);
		FireFang.setPower(70);
		QuickAttack.setPower(40);
		QuickAttack.setPriority(1);
		FireBlast.setPower(120);
		FireBlast.setAcc(.7);
		FlameCharge.setPower(50);
		Ember.setPower(40);
		ExtremeSpeed.setPower(80);
		ExtremeSpeed.setPriority(1);
		Flamethrower.setType(Fire);
		Hurricane.setType(Flying);
		DragonClaw.setType(Dragon);
		BulletSeed.setType(Grass);
		Earthquake.setType(Ground);
		GigaDrain.setType(Grass);
		LeafStorm.setType(Grass);
		FireFang.setType(Fire);
		FireBlast.setType(Fire);
		HydroPump.setType(Water);
		Scald.setType(Water);
		QuickAttack.setType(Normal);
		FlameCharge.setType(Fire);
		Ember.setType(Fire);
		ExtremeSpeed.setType(Normal);
		
	};

	void Poke() {
		Pokemon Charizard;
		Pokemon Venusaur;
		Pokemon Blastoise;
		Pokemon Growlithe;
		Pokemon Arcanine;
		Pokemon Vulpix;
		Pokemon Ninetales;
		Pokemon Ponyta;
		Pokemon Rapidash;

		Charizard.setName("Charizard");
		Venusaur.setName("Venusaur");
		Blastoise.setName("Blastoise");
		Growlithe.setName("Growlithe");
		Arcanine.setName("Arcanine");
		Vulpix.setName("Vulpix");
		Ninetales.setName("Ninetales");
		Ponyta.setName("Ponyta");
		Rapidash.setName("Rapidash");
		
		Charizard.setType(1, Fire);
		Charizard.setType(2, Flying);
                Venusaur.setType(1, Grass);
		Venusaur.setType(2, Poison);
		Blastoise.setType(1, Water);
                Growlithe.setType(1, Fire);
                Arcanine.setType(1, Fire);
                Vulpix.setType(1, Fire);
                Ninetales.setType(1, Fire);
                Ponyta.setType(1, Fire);
                Rapidash.setType(1, Fire);

		Charizard.setMove(1, FireBlast);
		Charizard.setMove(2, DragonClaw);
		Charizard.setMove(3, Hurricane);
		Charizard.setMove(4, buff);		

		Blastoise.setMove(1, HydroPump);
		Blastoise.setMove(2, Scald);
		Blastoise.setMove(3, Earthquake);
		Blastoise.setMove(4, buff);
		
		Venusaur.setMove(1, LeafStorm);
		Venusaur.setMove(2, BulletSeed);
		Venusaur.setMove(3, GigaDrain);
		Venusaur.setMove(4, Earthquake);

		Growlithe.setMove(1, Ember);
		Growlithe.setMove(2, buff);
		Growlithe.setMove(3, FireFang);
		Growlithe.setMove(3, QuickAttack);

		Arcanine.setMove(1, ExtremeSpeed);
		Arcanine.setMove(2, FireBlast);
		Arcanine.setMove(3, FireFang);
		Arcanine.setMove(4, buff);

		Vulpix.setMove(1, Ember);
		Vulpix.setMove(2, Flamethrower);
		Vulpix.setMove(3, buff);
		Vulpix.setMove(4, FireBlast);
		
		Ninetales.setMove(1, Flamethrower);
                Ninetales.setMove(2, FireBlast);
                Ninetales.setMove(3, QuickAttack);
                Ninetales.setMove(4, buff);

		Ponyta.setMove(1, Ember);
                Ponyta.setMove(2, Flamethrower);
                Ponyta.setMove(3, buff);
                Ponyta.setMove(4, FlameCharge);

		Rapidash.setMove(1, FireBlast);
                Rapidash.setMove(2, Flamethrower);
                Rapidash.setMove(3, buff);
                Rapidash.setMove(4, QuickAttack);
	};
int main(int argc, char* argv[]) {

Pokemon pokemon; 
}

