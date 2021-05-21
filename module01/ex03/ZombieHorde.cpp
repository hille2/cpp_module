/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:55:00 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 13:04:02 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde()
{}

std::string ZombieHorde::randName[15] =
{
	"Bob",
	"Sam",
	"Gogo",
	"Emma",
	"Tom",
	"July",
	"Miranda",
	"Lola",
	"Anna",
	"Leroy",
	"Robert",
	"Will",
	"Stalin",
	"Michael Jackson",
	"Momo"
};

ZombieHorde::ZombieHorde(long num)
{
	if (num < 1)
	{
		std::cout << "Oh no! Invalid number of zombies!" << std::endl;
		std::cout << "We'll have to bite one person so that he becomes a zombie." << std::endl;
		std::cout << "It is correct to start at 1" << std::endl;
		num = 1;
	}
	else if (num > INT32_MAX)
	{
		std::cout << "Oh no! There are too many zombies, can we try to start with one?" << std::endl;
		num = 1;
	}
	std::cout << "*you hear the approaching footsteps and motives of Thriller*" << std::endl;
	
	srand(static_cast<unsigned int>(time(0)));
	int zombieName = 0;
	m_zombies = new Zombie[num];
	m_num = num;
	for (int bite = 0; bite < num; bite++)
	{
		zombieName = rand() % 15;
		m_zombies[bite].getName(randName[zombieName]);
		m_zombies[bite].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "*you hear the receding footsteps*" << std::endl;
	std::cout << "*lucky you today*" << std::endl;
	delete [] m_zombies;
}