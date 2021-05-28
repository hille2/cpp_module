/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:35:19 by sgath             #+#    #+#             */
/*   Updated: 2021/05/28 12:07:39 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string		greetingTitle()
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

std::string		randTarget()
{
	std::string target[] = 
	{
		"\033[1;31mSkag Pup\033[0m",
		"\033[1;31mSkag Whelp\033[0m",
		"\033[1;31mAdult Skag\033[0m",
		"\033[1;31mSpitter Skag\033[0m",
		"\033[1;31mElder Skag\033[0m",
		"\033[1;31mAlpha Skag\033[0m",
		"\033[1;31mBadass Skag\033[0m",
		"\033[1;31mSpiderantling\033[0m",
		"\033[1;31mSpiderant Worker\033[0m",
		"\033[1;31mSpiderant Gyro\033[0m",
		"\033[1;31mSpiderant Soldier\033[0m",
		"\033[1;31mSpiderant Queen\033[0m",
		"\033[1;31mSpiderant King\033[0m",
		"\033[1;31mRakk\033[0m",
		"\033[1;31mFeeder Rakk\033[0m",
		"\033[1;31mBloated Rakk\033[0m",
		"\033[1;31mDefender Rakk\033[0m",
		"\033[1;31mKamikaze Rakk\033[0m",
		"\033[1;31mBadass Rakk\033[0m",
		"\033[1;31mScythid Crawler\033[0m",
		"\033[1;31mDesert Scythid\033[0m",
		"\033[1;31mGiant Scythid\033[0m",
	};
	
	int num = rand() % (sizeof(target) / sizeof(target[0]));
	return (target[num]);
}

unsigned int	randAmount()
{
	
	int num = rand() % 20;
	return(num);
}

void			newCommand()
{
		std::cout << "please select command:" << std::endl;
		std::cout << "1. Ranged attack\t 2. Melee attack\t 3. Take damage\t" << std::endl;
		std::cout << "4. Be repaired\t\t 5. Create clone\t 6. Destroy FR4G-TP" << std::endl;
		std::cout << "7. Vaulthunter.EXE\t 8. Create new robot\t 9. Exit" << std::endl;
}

void			newRobot(std::string &name)
{
	name = greetingTitle();
	FragTrap robot(name);
	std::cout << "<sorry\033[1;92m " << name << "\033[0m cat't live forever>" << std::endl;
}

int				main()
{
	std::string name;
	std::string command;

	srand(static_cast<unsigned int>(time(0)));

	name = greetingTitle();
	FragTrap *robot = new FragTrap(name);
	
	newCommand();
	while(1)
	{
		std::getline(std::cin, command);
		if (command == "1")
			robot->rangedAttack(randTarget());
		else if (command == "2")
			robot->meleeAttack(randTarget());
		else if (command == "3")
			robot->takeDamage(randAmount());
		else if (command == "4")
			robot->beRepaired(randAmount());
		else if (command == "5")
			FragTrap robot3 = *robot;
		else if (command == "6")
			break ;
		else if (command == "7")
			robot->vaulthunter_dot_exe(randTarget());
		else if (command == "8")
			newRobot(name);
		else if (command == "9")
			break ;
		else
			newCommand();
	}
	delete robot;
	return (0);
}