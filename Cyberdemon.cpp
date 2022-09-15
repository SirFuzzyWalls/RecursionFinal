#include "Cyberdemon.h"
#include "Demon.h"
#include <string>

using namespace std; 
namespace cs_creature
{
	Cyberdemon::Cyberdemon()
	{
	}






	Cyberdemon::Cyberdemon(int newStrength, int newHitpoints)
		:Demon(newStrength, newHitpoints)
	{
	}






	string Cyberdemon::getSpecies() const
	{
		return "Cyberdemon";
	}

}
