#ifndef DEMON_H
#define DEMON_H

#include "Creature.h"
#include <string>
using namespace std;
namespace cs_creature
{
	class Demon : public Creature
	{
	public:

		Demon();

		Demon(int newStrength, int newHitpoints);

		int getDamage() const;

		string getSpecies() const;

	private:

	};
}


#endif // !DEMON_H
