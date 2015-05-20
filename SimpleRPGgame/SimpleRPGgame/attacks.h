#pragma once
class attacks 
{
public:

	attacks() 
	{

	}

	int damage;
	std::string element;

	attacks(int damage, std::string element);

	//ELEMENTS ARE FROM ATTACKED DRAGON NOT ATTACKER.
	int FireStorm(int level, std::string element);
	int Tsunami(int level, std::string element);
	int Solarbeam(int level, std::string element);

	//int newhealth(int health, int damage);

	virtual ~attacks();
};

