#pragma once
class Dragon
{

protected:

	std::string name;
	int level;
	std::string element;
	

public:

	Dragon(std::string name, std::string element, int health);
	virtual void greet();
	virtual ~Dragon();

	int damage;
	int health;

	int FireStorm(std::string element);
	int Tsunami(std::string element);
	int Solarbeam(std::string element);

	int inithealth(int level);
	int newhealth(int health, int damage);

};

