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

	};
int main(int argc, char* argv[]) {

Pokemon pokemon; 
}

