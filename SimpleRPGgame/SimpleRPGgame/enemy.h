#pragma once
#include "Dragon.h"
class enemy : public Dragon
{
public:
	enemy() : Dragon(name, element, health)
	{

	}

	enemy(std::string name, std::string element, int health)
		:Dragon(name, element, health)
	{

	}

	void greet() override;

};

