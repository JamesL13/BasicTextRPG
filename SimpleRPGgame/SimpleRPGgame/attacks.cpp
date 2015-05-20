#include "stdafx.h"
#include "attacks.h"


attacks::attacks(int damage, std::string element)
	:damage(damage), element(element)
{
}


int attacks::FireStorm(int level, std::string element)
{
	if (element == "EARTH")
	{
		int damage = 20 * level;
		return damage;
	}
	else
	{
		int damage = 10 * level;
		return damage;
	}
}

int attacks::Tsunami(int level, std::string element)
{
	if (element == "FIRE")
	{
		int damage = 20 * level;
		return damage;
	}
	else
	{
		int damage = 10 * level;
		return damage;
	}
}

int attacks::Solarbeam(int level, std::string element)
{
	if (element == "WATER")
	{
		int damage = 20 * level;
		return damage;
	}
	else
	{
		int damage = 10 * level;
		return damage;
	}
}
/*
int newhealth(int health, int damage)
{
	return health - damage;
}*/


attacks::~attacks()
{
}
