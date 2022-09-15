#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
#include <string>

using namespace std;
namespace cs_creature 
{
	class Creature
	{
	public:

		Creature();

		Creature(int newStrength, int newHitpoints);

		virtual int getDamage() const;

		virtual string getSpecies() const = 0;

		int getStrength() const;

		int getHitpoints() const;

		void changeStrength(const int& newStrength);

		void changeHitpoints(const int& newHitpoints);

	private:

		int strength;

		int hitpoints;
	};
}
#endif // !CREATURE_H
