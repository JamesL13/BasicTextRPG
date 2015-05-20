#include "stdafx.h"
#include "attacks.h"
#include "enemy.h"
#include "Dragon.h"

Dragon::Dragon(std::string name, std::string element, int health)
	: name(name), health(health), element(element)
{

}

Dragon::~Dragon()
{

}

void Dragon::greet()
{
	std::cout << "My name is " << name << " and I am a " <<
		element << " Dragon who has " << health << " health!"
		<<  std::endl;
}


int Dragon::FireStorm(std::string element)
{
	int critical_hit = rand() % 100;
	if (element == "EARTH")
	{
		if (critical_hit < 10)
		{
			int damage = 0;
			return damage;
		}
		if (critical_hit > 80)
		{
			int damage = 50;
			return damage;
		}
		else
		{
			int damage = 20;
			return damage;
		}
	}
	else
	{
		if (critical_hit < 10)
		{
			int damage = 0;
			return damage;
		}
		if (critical_hit > 80)
		{
			int damage = 30;
			return damage;
		}
		else
		{
			int damage = 10;
			return damage;
		}
	}
}

int Dragon::Tsunami(std::string element)
{
	int critical_hit = rand() % 100;
	if (element == "FIRE")
	{
		if (critical_hit < 10)
		{
			int damage = 0;
			return damage;
		}
		if (critical_hit > 80)
		{
			int damage = 50;
			return damage;
		}
		else
		{
			int damage = 20;
			return damage;
		}
	}
	else
	{
		if (critical_hit < 10)
		{
			int damage = 0;
			return damage;
		}
		if (critical_hit > 80)
		{
			int damage = 30;
			return damage;
		}
		else
		{
			int damage = 10;
			return damage;
		}
	}
}

int Dragon::Solarbeam(std::string element)
{
	int critical_hit = rand() % 100;
	if (element == "WATER")
	{
		if (critical_hit < 10)
		{
			int damage = 0;
			return damage;
		}
		if (critical_hit > 80)
		{
			int damage = 50;
			return damage;
		}
		else
		{
			int damage = 20;
			return damage;
		}
	}
	else
	{
		if (critical_hit < 10)
		{
			int damage = 0;
			return damage;
		}
		if (critical_hit > 80)
		{
			int damage = 30;
			return damage;
		}
		else
		{
			int damage = 10;
			return damage;
		}
	}
}

int Dragon::newhealth(int health, int damage)
{
	int newhealth = health - damage;
	return newhealth;
}

int Dragon::inithealth(int level)
{
	if (level = 1)
	{
		health = 100;
		return health;
	}
	else
	{
		health = 100 + (10 * level);
		return health;
	}
}
