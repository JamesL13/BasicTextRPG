/*
Copyright 2015 James Landy

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http ://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

// SimpleRPGgame.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Human.h"
#include "Dragon.h"
#include "enemy.h"
//#include "attacks.h"

int main(int argc, char* argv[])
{
	//INITIALIZE THE VARIABLES
	std::string name;
	std::string dragon_name;
	std::string enemy_name = "MEANIE BO BEANIE";
	std::string element;
	std::string element2;
	std::string battle;


	//TELL THE STORY AND GET STARTING INFO LIKE NAME AND ELEMENT OF THE DRAGON THEY WANT
	//WILL MAKE INTO FUNCTIONS LATER
	std::cout << "Hello Welcome to my simple RPG game coded in C++\n" << std::endl;
	std::cout << "Please type all commands in all caps" << std::endl;
	std::cout << "What will your players name be?" << std::endl;
	std::cin >> name;
	std::cout << "Hello" << " " << name << " " << "In this world Dragons walk the earth!" << std::endl;
	std::cout << "To protect yourself, you will be given a Dragon!" << std::endl;
	std::cout << "But which will you choose? There are 3 types of Dragons: FIRE, WATER, and EARTH." << std::endl;
	std::cout << "Some Dragons have an advantage against others!\nFIRE is stronger against EARTH\nEARTH is stronger against WATER\nWATER is stronger against FIRE" << std::endl;
	std::cout << "Which will you choose? Type FIRE, WATER, or EARTH" << std::endl;

	//Checks to make sure valid input for choosing of Element
	while (element != "FIRE" || "WATER" || "EARTH")
	{
		std::cin >> element;
		if (element == "FIRE")
		{
			std::cout << "Ok you will be given a " << element << " dragon!" << std::endl;
			break;
		}
		else if (element == "WATER")
		{
			std::cout << "Ok you will be given a " << element << " dragon!" << std::endl;
			break;
		}
		else if (element == "EARTH")
		{
			std::cout << "Ok you will be given an " << element << " dragon!" << std::endl;
			break;
		}
		else
		{
			std::cout << "Not a valid choice please choose again" << std::endl;
		}

	}
	
	std::cout << "What will you name your " << element << " Dragon? (no spaces please)" << std::endl;
	std::cin >> dragon_name;

	int health = 100;
	int health2 = 100;

	if (element == "FIRE")
	{
		element2 = "WATER";
	}
	else if (element == "WATER")
	{
		element2 = "EARTH";
	}
	else if (element == "EARTH")
	{
		element2 = "FIRE";
	}



	//INITIALIZE PLAYER AND THE PLAYERS DRAGON
	Human *Player = new Human(name);
	Dragon *dragon = new Dragon(dragon_name, element, health);
	enemy *Enemy = new enemy(enemy_name, element2, health2);

	//int health = dragon->inithealth(1);
	
	//std::cout << health << std::endl;

	dragon->greet();
	Enemy->greet();

	std::cout << "Enter 'BATTLE' to attack " << enemy_name << ", enter anything else to end the game" << std::endl;
	std::cin >> battle;

	if (battle == "BATTLE")
	{
		std::cout << "Entering battle" << std::endl;
		//TESTING DAMAGE
		int end = 0;
		while (end != 1)
		{
			int choice;
			std::cout << "Press 1 to attack. Press any other key to run away." << std::endl;
			std::cin >> choice;
			if (choice == 1)
			{
				if (element == "FIRE")
				{
					int damage = dragon->FireStorm(element2);
					std::cout << dragon_name << " used Firestorm!" << std::endl;
					std::cout << dragon_name << " has done " << damage << " damage to " << enemy_name << std::endl;

					//TESTING HEALTH

					health2 = dragon->newhealth(health2, damage);

					if (health <= 0)
					{
						std::cout << enemy_name << " has died. Battle Has Ended" << std::endl;
						end = 1;
					}
					else
					{
						std::cout << enemy_name << " has " << health << " health left!" << std::endl;
					}

				}
				else if (element == "WATER")
				{
					int damage = dragon->Tsunami(element2);
					std::cout << dragon_name << " used Tsunami!" << std::endl;
					std::cout << dragon_name << " has done " << damage << " damage to " << enemy_name << std::endl;

					//TESTING HEALTH

					health2 = dragon->newhealth(health2, damage);

					if (health <= 0)
					{
						std::cout << enemy_name << " has died. Battle Has Ended" << std::endl;
						end = 1;
					}
					else
					{
						std::cout << enemy_name << " has " << health << " health left!" << std::endl;
					}

				}
				else if (element == "EARTH")
				{
					int damage = dragon->Solarbeam(element2);
					std::cout << dragon_name << " used Solarbeam!" << std::endl;
					std::cout << dragon_name << " has done " << damage << " damage to " << enemy_name << std::endl;

					//TESTING HEALTH

					health2 = dragon->newhealth(health2, damage);

					if (health == 0)
					{
						std::cout << enemy_name << " has died. Battle Has Ended" << std::endl;
						end = 1;
					}
					else
					{
						std::cout << enemy_name << " has " << health << " health left!" << std::endl;
					}
				}
			}

			//MEANIE BO BEANIES ATTACK

					if (choice == 1)
					{
						std::cout << "\n" << std::endl;
						std::cout << enemy_name << " is going to attack!" << std::endl;

						if (element2 == "FIRE")
						{
							int damage = dragon->FireStorm(element);
							std::cout << enemy_name << " used Firestorm!" << std::endl;
							std::cout << enemy_name << " has done " << damage << " damage to " << dragon_name << std::endl;

							//TESTING HEALTH

							health = Enemy->newhealth(health, damage);

							if (health == 0)
							{
								std::cout << dragon_name << " has died. Battle Has Ended" << std::endl;
								end = 1;
							}
							else
							{
								std::cout << dragon_name << " has " << health << " health left!" << std::endl;
							}

						}
						else if (element2 == "WATER")
						{
							int damage = Enemy->Tsunami(element);
							std::cout << enemy_name << " used Tsunami!" << std::endl;
							std::cout << enemy_name << " has done " << damage << " damage to " << dragon_name << std::endl;

							//TESTING HEALTH

							health = Enemy->newhealth(health, damage);

							if (health == 0)
							{
								std::cout << dragon_name << " has died. Battle Has Ended" << std::endl;
								end = 1;
							}
							else
							{
								std::cout << dragon_name << " has " << health << " health left!" << std::endl;
							}

						}
						else if (element2 == "EARTH")
						{
							int damage = Enemy->Solarbeam(element);
							std::cout << enemy_name << " used Solarbeam!" << std::endl;
							std::cout << enemy_name << " has done " << damage << " damage to " << dragon_name << std::endl;

							//TESTING HEALTH

							health = Enemy->newhealth(health, damage);

							if (health <= 0)
							{
								std::cout << dragon_name << " has died. Battle Has Ended" << std::endl;
								end = 1;
							}
							else
							{
								std::cout << dragon_name << " has " << health << " health left!" << std::endl;
							}



						}
					}

				else
				{
					std::cout << "You Ran Away!" << std::endl;
					break;
				}
			}
		}

	else
	{
		std::cout << "Ok No Battle" << std::endl;

	}

	getchar();
	getchar();
	getchar();
	std::cout << "Press the enter key to quit" << std::endl;
	getchar();
	return 0;
}

