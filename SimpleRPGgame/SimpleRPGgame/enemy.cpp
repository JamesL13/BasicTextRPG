#include "stdafx.h"
#include "attacks.h"
#include "enemy.h"


void enemy::greet()
{
	Dragon::greet();

	std::cout << "I am the enemy!" << std::endl;
}
