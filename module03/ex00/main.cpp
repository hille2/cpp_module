/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:35:19 by sgath             #+#    #+#             */
/*   Updated: 2021/05/26 18:09:25 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string	greetingTitle()
{
	std::string name;
	static int firstEntry = 0;

	if (firstEntry == 0)
	{
		std::cout << "╔═══╗╔╗───╔═══╗╔═══╗╔════╗╔═══╗╔═══╗╔═══╗" << std::endl;
		std::cout << "║╔═╗║║║───║╔═╗║║╔═╗║║╔╗╔╗║║╔═╗║║╔═╗║║╔═╗║" << std::endl;
		std::cout << "║║─╚╝║║───║║─║║║╚═╝║╚╝║║╚╝║╚═╝║║║─║║║╚═╝║" << std::endl;
		std::cout << "║║─╔╗║║─╔╗║╚═╝║║╔══╝──║║──║╔╗╔╝║╚═╝║║╔══╝" << std::endl;
		std::cout << "║╚═╝║║╚═╝║║╔═╗║║║─────║║──║║║╚╗║╔═╗║║║───" << std::endl;
		std::cout << "╚═══╝╚═══╝╚╝─╚╝╚╝─────╚╝──╚╝╚═╝╚╝─╚╝╚╝───" << std::endl;
		std::cout << "You are in the models the FR4G-TP robot creation mode. "
		<<std::endl; 
		firstEntry = 1;
	}
	std::cout << "Please enter a name your robot:"<< std::endl;
	while (name == "")
	{
		std::getline(std::cin, name);
		if (name == "")
			std::cout << "name must not be empty" << std::endl;
	}

	return(name);
}

std::string	randTarget()
{
	std::string target[] = 
	{
		"Skag Pup",
		"Skag Whelp",
		"Adult Skag",
		"Spitter Skag", 
		"Elder Skag", 
		"Alpha Skag", 
		"Badass Skag",
		"Spiderantling", 
		"Spiderant Worker", 
		"Spiderant Gyro", 
		"Spiderant Soldier", 
		"Spiderant Queen", 
		"Spiderant King", 
		"Rakk",
		"Feeder Rakk",
		"Bloated Rakk",
		"Defender Rakk",
		"Kamikaze Rakk", 
		"Badass Rakk"
		"Scythid Crawler", 
		"Desert Scythid", 
		"Giant Scythid",
	};
	
	int num = rand() % (sizeof(target) / sizeof(target[0]));
	std::cout << num << std::endl;
	return (target[num]);
}

unsigned int randAmount()
{
	
	int num = rand() % 20;
	return(num);
}

int			main()
{
	std::string name;
	std::string command;

	srand(static_cast<unsigned int>(time(0)));
newRobot:
	name = greetingTitle();
	FragTrap robot(name);

newCommand:
	std::cout << "please select command:" << std::endl;
	std::cout << "1. Ranged attack\t 2. Melee attack\t 3.Take damage\t" << std::endl;
	std::cout << "4. Be repaired\t\t 5. Create clone\t 6.Destroy FR4G-TP" << std::endl;
	std::cout << "7. Create new robot\t 8. Exit" << std::endl;
	
	while(1)
	{
		std::getline(std::cin, command);
		if (command == "1")
			robot.rangedAttack(randTarget());
		else if (command == "2")
			robot.meleeAttack(randTarget());
		else if (command == "3")
			robot.takeDamage(randAmount());
		else if (command == "4")
			robot.beRepaired(randAmount());
		else if (command == "5") //dontwork
			FragTrap clone = robot;
		else if (command == "6")
			robot.~FragTrap();
		else if (command == "7")
			goto newRobot;
		else if (command == "8")
			break ;
		else
			goto newCommand;
	}
	return (0);
}