/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:35:19 by sgath             #+#    #+#             */
/*   Updated: 2021/05/29 10:26:32 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"



void		greetingTitle(std::string *name)
{
	std::cout << "╔═══╗╔══╗╔═══╗╔═══╗╔═╗─╔╗╔═══╗     ╔═╗╔═╗╔╗──╔╗     ╔╗───╔═══╗╔╗──╔╗╔═══╗" << std::endl;
	std::cout << "║╔═╗║╚╣─╝║╔═╗║║╔══╝║║╚╗║║║╔═╗║     ║║╚╝║║║╚╗╔╝║     ║║───║╔═╗║║╚╗╔╝║║╔══╝" << std::endl;
	std::cout << "║╚══╗─║║─║╚═╝║║╚══╗║╔╗╚╝║║║─║║     ║╔╗╔╗║╚╗╚╝╔╝     ║║───║║─║║╚╗║║╔╝║╚══╗" << std::endl;
	std::cout << "╚══╗║─║║─║╔╗╔╝║╔══╝║║╚╗║║║╚═╝║     ║║║║║║─╚╗╔╝─     ║║─╔╗║║─║║─║╚╝║─║╔══╝" << std::endl;
	std::cout << "║╚═╝║╔╣─╗║║║╚╗║╚══╗║║─║║║║╔═╗║     ║║║║║║──║║──     ║╚═╝║║╚═╝║─╚╗╔╝─║╚══╗" << std::endl;
	std::cout << "╚═══╝╚══╝╚╝╚═╝╚═══╝╚╝─╚═╝╚╝─╚╝     ╚╝╚╝╚╝──╚╝──     ╚═══╝╚═══╝──╚╝──╚═══╝" << std::endl;
	std::cout << "Today you can create two robotse: FR4G-TP and SC4V-TP." <<std::endl; 
	
	std::cout << "want to fill in names automatically?" <<std::endl;
	std::cout << "\033[1;42mYES\033[0m\t\t\t\t \033[1;42mNO\033[0m" <<std::endl;

	std::getline(std::cin, name[0]);
	if (name[0] == "yes" || name[0] == "y" || name[0] == "YES" || name[0] == "Y")
	{
		name[0] = "BOB";
		name[1] = "SIMONA";
	}
	else
	{
		std::cout << "Please enter a name your FR4G-TP:"<< std::endl;
		std::getline(std::cin, name[0]);
		while (name[0] == "")
		{
			std::getline(std::cin, name[0]);
			if (name[0] == "")
				std::cout << "name FR4G-TP must not be empty" << std::endl;
		}
		std::cout << "Please enter a name your CL4P-TP:"<< std::endl;
		while (name[1] == "")
		{
			std::getline(std::cin, name[1]);
			if (name[1] == "")
				std::cout << "nameCL4P-TP must not be empty" << std::endl;
		}
	}
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

void			actionsFL4G( FragTrap &flap )
{
	std::string command;
	std::cout << "1. Ranged attack\t 2. Melee attack\t 3.Take damage\t" << std::endl;
	std::cout << "4. Be repaired\t\t 5. Vaulthunter.EXE\t 6.Exit" << std::endl;
	
	std::getline(std::cin, command);
	if (command == "1")
		flap.rangedAttack(randTarget());
	else if (command == "2")
		flap.meleeAttack(randTarget());
	else if (command == "3")
		flap.takeDamage(randAmount());
	else if (command == "4")
		flap.beRepaired(randAmount());
	else if (command == "5")
		flap.vaulthunter_dot_exe(randTarget());
	else if (command == "6")
		return ;
	else
		std::cout << "unknown command, try again" << std::endl;
}

void			actionsSC4V( ScavTrap &scav )
{
	std::string command;
	std::cout << "1. Ranged attack\t 2. Melee attack\t 3.Take damage\t" << std::endl;
	std::cout << "4. Be repaired\t\t 5. Challenge newcomer\t 6.Exit" << std::endl;
	
	std::getline(std::cin, command);
	if (command == "1")
		scav.rangedAttack(randTarget());
	else if (command == "2")
		scav.meleeAttack(randTarget());
	else if (command == "3")
		scav.takeDamage(randAmount());
	else if (command == "4")
		scav.beRepaired(randAmount());
	else if (command == "5")
		scav.challengeNewcomer(randTarget());
	else if (command == "6")
		return ;
	else
		std::cout << "unknown command, try again" << std::endl;
}

int				main( )
{
	std::string name[2];
	std::string command;

	srand(static_cast<unsigned int>(time(0)));
	greetingTitle(name);
	
	FragTrap flap(name[0]);
	ScavTrap scav(name[1]);

	while(1)
	{
		std::cout << "select the robot model:" << std::endl << "\033[1;44m1. FL4G-TP\t 2. SC4V-TP\033[0m" << std::endl;
		std::getline(std::cin, command);
		if (command == "1")
			actionsFL4G(flap);
		else if (command == "2")
			actionsSC4V(scav);
		else
			std::cout << "sorry, but you no longer have other models!" << std::endl;
		std::cout << "to complete the test, enter the last Pi" << std::endl << "or EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "EXIT" || command == "exit")
			break;
	}
	
	return (0);
}