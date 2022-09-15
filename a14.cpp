#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "Demon.h"
#include "Cyberdemon.h"
#include "Balrog.h"
using namespace cs_creature;
using namespace std;

void battleArena(Creature& Creature1, Creature& Creature2);

int main()
{
	srand(static_cast<unsigned>(time(nullptr)));

	Human h(30, 30);
	Cyberdemon c(40, 40);
	Elf e(50, 50);
	Balrog b(50, 50);
	
	for (int i = 0; i < 3; i++)
	{
		cout << "\nROUND " << i + 1 << " ....FIGHT!" << endl;
		battleArena(e, b);
		e.changeStrength(50);
		e.changeHitpoints(50);
		b.changeStrength(50);
		b.changeHitpoints(50); 
	}
	
	for (int i = 0; i < 3; i++)
	{
		cout << "\nROUND " << i + 1 << " ....FIGHT!" << endl;
		battleArena(h, c);
		h.changeStrength(30);
		h.changeHitpoints(30);
		c.changeStrength(40);
		c.changeHitpoints(40);
	}

}






//FUNCTION DEFINITIONS BELOW
void battleArena(Creature& Creature1, Creature& Creature2)
{
	cout << "***********************************" << endl; 
	cout << "Current fight: " << Creature1.getSpecies() << " vs " << Creature2.getSpecies() << endl; 
	cout << "***********************************" << endl;
	do
	{
		cout << "\nRemaining HP: " << Creature1.getSpecies() << "(" << Creature1.getHitpoints() << ")" << " " << Creature2.getSpecies() << "(" << Creature2.getHitpoints() << ")" << endl;
		Creature2.changeHitpoints(Creature2.getHitpoints() - Creature1.getDamage());
		Creature1.changeHitpoints(Creature1.getHitpoints() - Creature2.getDamage());
		
	}
	while (Creature1.getHitpoints() > 0 && Creature2.getHitpoints() > 0);

	if (Creature1.getHitpoints() <= 0 && Creature2.getHitpoints() <= 0)
	{
		cout << "Tie!" << endl; 
	}
	else if (Creature1.getHitpoints() > 0)
	{
		cout << Creature1.getSpecies() << " is the winner!" << endl;
	}
	else
	{
		cout << Creature2.getSpecies() << " is the winner!" << endl;
	}
}

/*SAMPLE PROGRAM OUTPUT BELOW:

ROUND 1 ....FIGHT!
***********************************
Current fight: Elf vs Balrog
***********************************

Remaining HP: Elf(50) Balrog(50)
The Elf attacks for 22 points!
The Balrog attacks for 11 points!
Balrog speed attack inflicts 17 additional damage points!

Remaining HP: Elf(22) Balrog(28)
The Elf attacks for 50 points!
The Balrog attacks for 47 points!
Balrog speed attack inflicts 32 additional damage points!
Tie!

ROUND 2 ....FIGHT!
***********************************
Current fight: Elf vs Balrog
***********************************

Remaining HP: Elf(50) Balrog(50)
The Elf attacks for 6 points!
The Balrog attacks for 10 points!
Balrog speed attack inflicts 39 additional damage points!

Remaining HP: Elf(1) Balrog(44)
The Elf attacks for 40 points!
Magical attack inflicts 40 additional damage points!
The Balrog attacks for 31 points!
Balrog speed attack inflicts 9 additional damage points!
Tie!

ROUND 3 ....FIGHT!
***********************************
Current fight: Elf vs Balrog
***********************************

Remaining HP: Elf(50) Balrog(50)
The Elf attacks for 47 points!
The Balrog attacks for 10 points!
Balrog speed attack inflicts 29 additional damage points!

Remaining HP: Elf(11) Balrog(3)
The Elf attacks for 33 points!
The Balrog attacks for 47 points!
Balrog speed attack inflicts 11 additional damage points!
Tie!

ROUND 1 ....FIGHT!
***********************************
Current fight: Human vs Cyberdemon
***********************************

Remaining HP: Human(30) Cyberdemon(40)
The Human attacks for 8 points!
The Cyberdemon attacks for 29 points!

Remaining HP: Human(1) Cyberdemon(32)
The Human attacks for 21 points!
The Cyberdemon attacks for 1 points!
Demonic attack inflicts 50 additional damage points!
Cyberdemon is the winner!

ROUND 2 ....FIGHT!
***********************************
Current fight: Human vs Cyberdemon
***********************************

Remaining HP: Human(30) Cyberdemon(40)
The Human attacks for 20 points!
The Cyberdemon attacks for 3 points!

Remaining HP: Human(27) Cyberdemon(20)
The Human attacks for 13 points!
The Cyberdemon attacks for 6 points!

Remaining HP: Human(21) Cyberdemon(7)
The Human attacks for 16 points!
The Cyberdemon attacks for 34 points!
Tie!

ROUND 3 ....FIGHT!
***********************************
Current fight: Human vs Cyberdemon
***********************************

Remaining HP: Human(30) Cyberdemon(40)
The Human attacks for 2 points!
The Cyberdemon attacks for 29 points!

Remaining HP: Human(1) Cyberdemon(38)
The Human attacks for 29 points!
The Cyberdemon attacks for 29 points!
Cyberdemon is the winner!

C:\Users\ewwdo\Desktop\CS10B Projects\a_14.2\Debug\a_14.2.exe (process 2416) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .



*/