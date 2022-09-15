#include "Balrog.h"
#include "Demon.h"
#include <string>

using namespace std;
namespace cs_creature
{
	Balrog::Balrog()
	{
	}






	Balrog::Balrog(int newStrength, int newHitpoints)
		:Demon(newStrength, newHitpoints)
	{
	}






	int Balrog::getDamage() const
	{
		int damageDealt = 0;

		int secondAttack = 0; 

		damageDealt = Demon::getDamage();

		secondAttack = (rand() % getStrength() + 1);

		cout << "Balrog speed attack inflicts " << secondAttack << " additional damage points!" << endl;

		damageDealt += secondAttack; 

		return damageDealt;
	}






	string Balrog::getSpecies() const
	{
		return "Balrog";
	}

}

