#include "Elf.h"
#include "Creature.h"
#include <string>

using namespace std;
namespace cs_creature
{
	Elf::Elf()
	{
	}






	Elf::Elf(int newStrength, int newHitpoints)
		:Creature(newStrength, newHitpoints)
	{
	}






	int Elf::getDamage() const
	{
		int damageDealt = 0;

		damageDealt = Creature::getDamage();
		
		if ((rand() % 2) == 0)
		{
			cout << "Magical attack inflicts " << damageDealt << " additional damage points!" << endl;

			damageDealt *= 2;
		}

		return damageDealt;
	}






	string cs_creature::Elf::getSpecies() const
	{
		return "Elf";
	}
}

