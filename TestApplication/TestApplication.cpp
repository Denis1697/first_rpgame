// TestApplication.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Warrior.h"
using namespace std;

int main()
{
	Warrior *war = new Warrior("King of the World", 10, 10, 10, 10, 10);
	war->info();
	war->addExp(120);
	war->levelUp();
	return 0;
}