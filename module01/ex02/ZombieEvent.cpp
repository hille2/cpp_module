/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:45:48 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 13:35:23 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent() : m_typeEvent()
{}

ZombieEvent::~ZombieEvent()
{}

void ZombieEvent::setZombieType(std::string type) 
{
	m_typeEvent = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	//if (m_typeEvent == "")
	//	m_typeEvent = "NoType";
	return(new Zombie(name, m_typeEvent));
}

Zombie *ZombieEvent::randomChump()
{
	srand(static_cast<unsigned int>(time(0)));
	std::string randName[15] = {
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
		"Yan",
		"Momo"
	};
	int num = rand() % 15;
	return(new Zombie(randName[num], m_typeEvent));
}

