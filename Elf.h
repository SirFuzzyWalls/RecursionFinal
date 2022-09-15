#ifndef ELF_H
#define ELF_H
#include "Creature.h"
#include <string>

using namespace std;
namespace cs_creature 
{
	class Elf : public Creature
	{
	public:

		Elf();

		Elf(int newStrength, int newHitpoints);

		int getDamage() const;

		string getSpecies() const;

	private:
	};
}

#endif // !ELF_H