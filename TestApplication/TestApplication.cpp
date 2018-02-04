// TestApplication.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Warrior.h"
#include "Paladin.h"
using namespace std;

int main()
{
	int tset = 10;
	string name;
	cout << "Enter your name, hero: ";
	getline(cin, name);
	Creature* person = new Warrior(name, tset, tset, tset, tset, tset);
	// Person* person = new Paladin(name, tset, tset, tset, tset, tset);
	person->info();
	person->addExp(120);
	person->levelUp();
	person->setArmorProtection(10, 25);
	person->setWeaponDamage(12);
	person->info();
	return 0;
}