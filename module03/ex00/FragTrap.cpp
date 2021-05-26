/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:35:25 by sgath             #+#    #+#             */
/*   Updated: 2021/05/26 18:32:26 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( ):	m_name("TTL"), m_level(1), m_hitPoints(100), m_energyPoints(100)
{
	std::cout << "<you created the Interplanetary Ninja Assassin Claptrap models the FR4G-TP \033[1;92m" 
	<< m_name << "\033[0m> :" << std::endl << "Still haven't found the Vault?" << std::endl;
	std::cout << "<we will all regret it>" << std::endl;
}

FragTrap::FragTrap( std::string const name ) :	m_name(name), m_level(1), m_hitPoints(100),
												m_energyPoints(100)
{
	std::cout << "< you created the Interplanetary Ninja Assassin Claptrap models the FR4G-TP \"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "Yoo hoooooooooo!" << std::endl;
	std::cout << "<we will all regret it>" << std::endl;
}

FragTrap::FragTrap( FragTrap const &copy ) :	m_name(copy.m_name), m_level(copy.m_level), 
												m_hitPoints(copy.m_hitPoints), m_energyPoints(copy.m_energyPoints)
												
{
	std::cout << "< you created Claptrap models the FR4G-TP\"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "Rrrrrgh...this isn't working!" << std::endl;
}

std::string FragTrap::quetesAttack[] =
{
	"Looking good, servant!",
	"And it suits you!",
	"Formidable, but at the same time exciting.",
	"Wonderful! Quite another matter.",
	"You just do not recognize!",
	"Stylish!",
	"Cool!",
	"Well, just a fuck-a-hell outfit!",
	"Gorgeous!",
	"A killer outfit!",
	"Do you think it's real with your figure?",
	"Yeah ... I got your idea.",
	"Sexy.",
	"Oz-oz-oz ...",
	"Ha ha!",
	"Phew!",
	"Focus-pocus!",
	"Wow! You're not dead?",
	"Yoo hoooooooooo!",
};

std::string FragTrap::quetesDamage[] =
{
	"I can see through time...",
	"My servos... are seizing...",
	"I can see... the code",
	"I don't like this... this is making me nervous. Take a deep breath- I can't breathe!\n This is just a recording of someone breathing! It's not real! It's just making me more nervous!",
	"I'm detecting a motor unit malfunction... I can't move! I'm paralyzed with fear!",
	"Please don't shoot me, please don't shoot me, please don't shoot me!",
	"Turning off the optics... they can't see me...",
	"The traveler will protect me. The traveler will protect me.",
};

std::string FragTrap::quetesRepaired[] = 
{
	"Good as new, I think. Am I leaking?",
	"I'll lead the way!",
	"Follow me!",
	"This way!",
	"Yeah? Well, hmph!",
	"Good luck!",
	"Rrrrrgh...this it working!",
	"Unce! Unce! I think I lost the beat... but, Unce! Unce!",
};

FragTrap::~FragTrap( )
{
	std::cout << "<Claptrap models the FR4G-TP dies\"\033[1;92m " << m_name << "\033[0m\"> :" << std::endl <<
	"Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" << std::endl;
	std::cout << "<finally we are free from chatter>" << std::endl;
}

void FragTrap::rangedAttack( std::string const &target )
{
	//m_hitPoints = ((m_hitPoints - m_rangedAttackDamage) < 0) ? 0 : (m_hitPoints - m_rangedAttackDamage);
	std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m attacks \033[1;92m" << target << "\033[0m at range, causing \033[1;92m"
	<< m_rangedAttackDamage << "\033[0m points of damage!>:" << std::endl;
	
	std::string quete = quetesAttack[rand() % (sizeof(quetesAttack) / sizeof(quetesAttack[0]))];
	std::cout << quete << std::endl;
}

void FragTrap::meleeAttack( std::string const &target )
{
	std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m attacks \034[1;92m" << target << "\033[0m at melee, causing \033[1;92m"
	<< m_meleeAttackDamage << "\033[0m points of damage!>:" << std::endl;
	
	std::string quete = quetesAttack[rand() % (sizeof(quetesAttack) / sizeof(quetesAttack[0]))];
	std::cout << quete << std::endl;
}

void FragTrap::takeDamage( unsigned int amount )
{
	m_hitPoints = ((m_hitPoints - (amount - m_armorDamageReduction)) < MIN) ? MIN : (m_hitPoints - (amount - m_armorDamageReduction));
	std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m takes damage and loses \033[1;92m"
	<< amount << "\033[0m points of damage!>:" << std::endl;
	
	std::string quete = quetesDamage[rand() % (sizeof(quetesDamage) / sizeof(quetesDamage[0]))];
	std::cout << quete << std::endl;
}

void FragTrap::beRepaired(unsigned int amount )
{
	m_hitPoints = ((m_hitPoints + amount) > MAX) ? MAX : (m_hitPoints + amount);

	std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m restores health by \033[1;92m"
	<< amount << "\033[0m points!>:" << std::endl;
	
	std::string quete = quetesRepaired[rand() % (sizeof(quetesRepaired) / sizeof(quetesRepaired[0]))];
	std::cout << quete << std::endl;
}