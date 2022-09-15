#include "Demon.h"
#include "Creature.h"
#include <string>

using namespace std;
namespace cs_creature
{
	Demon::Demon()
	{
	}






	Demon::Demon(int newStrength, int newHitpoints)
		:Creature(newStrength, newHitpoints)
	{
	}






	int Demon::getDamage() const
	{
		int damageDealt = 0;

		damageDealt = Creature::getDamage();
		
		if (rand() % 4 == 0) 
		{
			damageDealt = damageDealt + 50;

			cout << "Demonic attack inflicts 50 additional damage points!" << endl;
		}

		return damageDealt; 
	}






	string Demon::getSpecies() const
	{
		return "Demon";
	}

}