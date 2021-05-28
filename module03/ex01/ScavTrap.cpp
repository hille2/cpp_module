/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:18:33 by sgath             #+#    #+#             */
/*   Updated: 2021/05/28 21:35:19 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :	m_name("SC4V-TV"), m_hitPoints(MAX_HP), m_energyPoints(MAX_MANA)
{
	std::cout << "\033[1;235m*brrrrr-brrrr*\033[0m" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) :	m_name(name), m_hitPoints(MAX_HP), 
											m_energyPoints(MAX_MANA)
{
	std::cout << "<you created the ScavTrap models the SC4V-TP \"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "\033[1;33mSecret handshake!\033[0m" << std::endl;
	std::cout << "\033[1;59m<oh, no! YOU AGAIN?>\033[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavCopy)
{
	m_name = scavCopy.m_name;
	m_hitPoints = scavCopy.m_hitPoints;
	m_energyPoints = scavCopy.m_energyPoints;
	
	std::cout << "<you created the clone ScavTrap models the SC4V-TP \"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "\033[1;33mWe're best friends!\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<ScavTrap models the SC4V-TP dies \"\033[1;92m" << m_name << "\033[0m\"> :" << std::endl <<
	"\033[1;33mNo fair! I wasn't ready!\033[0m" << std::endl;
	std::cout << "<finally we are free from chatter>" << std::endl;
};

std::string	ScavTrap::quetesAttack[] = 
{
	"\033[1;33mStep right up, to the Bulletnator 9000!\033[0m",
	"\033[1;33mI am a tornado of death and bullets!\033[0m",
	"\033[1;33mStop me before I kill again, except don't!\033[0m",
	"\033[1;33mHehehehe, mwaa ha ha ha, MWAA HA HA HA!\033[0m",
	"\033[1;33mI'm on a roll!\033[0m",
	"\033[1;33mUnts unts unts unts!\033[0m",
	"\033[1;33mHa ha ha! Fall before your robot overlord!\033[0m",
	"\033[1;33mCan't touch this!\033[0m",
	"\033[1;33mHa! Keep 'em coming!\033[0m",
	"\033[1;33mThere is no way this ends badly!\033[0m",
	"\033[1;33mThis is why I was built!\033[0m"
};

std::string	ScavTrap::quetesDamage[] = 
{
	"\033[1;33mI'll stop talking when I'm dead!\033[0m",
	"\033[1;33mI'll die the way I lived: annoying!\033[0m",
	"\033[1;33mCome back here! I'll gnaw your legs off!\033[0m",
	"\033[1;33mThis could've gone better!\033[0m",
	"\033[1;33mYou look like something a skag barfed up!\033[0m",
	"\033[1;33mWhat's that smell? Oh wait, it's just you!\033[0m",
	"\033[1;33mYo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!\033[0m",
	"\033[1;33mYou're one screw short of a screw!\033[0m",
	"\033[1;33mI bet your mom could do better!\033[0m",
	"\033[1;33mYou look like something a skag barfed up!\033[0m",
	"\033[1;33mOh yeah? Well, uh... yeah.\033[0m",
	"\033[1;33mWhat is that smell? Oh, never mind... it's just you!\033[0m",
	"\033[1;33mI'm leaking!\033[0m",
	"\033[1;33mGood thing I don't have a soul!\033[0m",
	"\033[1;33mAww!\033[0m",
	"\033[1;33mAww! Come on!\033[0m",
	"\033[1;33mYou can't kill me!\033[0m",
	"\033[1;33mI'm too pretty to die!\033[0m",
	"\033[1;33mCrap!\033[0m",
	"\033[1;33mRobot down!\033[0m",
	"\033[1;33mNo, nononono NO!\033[0m",
	"\033[1;33mI'll never go back to the bad place!\033[0m",
	"\033[1;33mI have many regrets!\033[0m",
};

std::string	ScavTrap::quetesRepaired[] = 
{
	"\033[1;33mHealth! Eww, what flavor is red?\033[0m",
	"\033[1;33mHealth over here!\033[0m",
	"\033[1;33mSweet life juice!\033[0m",
	"\033[1;33mI found health!\033[0m",
	"\033[1;33mHealsies!",
	"\033[1;33mCan I just say... yeehaw.\033[0m",
	"\033[1;33mYou are ace high!\033[0m",
	"\033[1;33mYou're the wub to my dub!\033[0m",
};

std::string	ScavTrap::skillTree[] =
{
	"looks at you and challenges you to a duel>\n\033[1;33mDance battle! Or, you know... regular battle\033[0m.",
	"looks at you and challenges you to a duel>\n\033[1;33mCare to have a friendly duel\033[0m?",
	"looks at you and challenges you to a duel>\n\033[1;33mI will prove to you my robotic superiority\033[0m!",
	"looks at you and challenges you to a duel>\n\033[1;33mMan versus machine! Very tiny streamlined machine\033[0m!",
	"finds a rare item>\n\033[1;33mIs this any good? 'Cause it looks awesome!\033[0m",
	"finds a rare item>\n\033[1;33mMine!\033[0m",
	"finds a rare item>\n\033[1;33mI'm rich!\033[0m",
	"finds a rare item>\n\033[1;33mThat is some sweet lookin' stuff!\033[0m",
	"activates the action of the subroutine Funzerker>\n\033[1;33mI'm a sexy dinosaur! Rawr!\033[0m",
	"activates the action of the subroutine Meat Unicycle>\n\033[1;33mI AM ON FIRE!!! OH GOD, PUT ME OUT!!!\033[0m",
	"activates the action of the subroutine Shhhhh...trap>\n\033[1;33mRoses are red and/\nViolets are blue/\nWait... how many syllables was that?\033[0m",
	"activates the action of the subroutine Blightbot>\n\033[1;33mAll burn before the mighty Siren-trap!\033[0m",
};

ScavTrap	ScavTrap::operator=(ScavTrap const &scavValue)
{
	m_name = scavValue.m_name;
	m_level = scavValue.m_level;
	m_hitPoints = scavValue.m_hitPoints;

	return (*this);
}

void	ScavTrap::rangedAttack( std::string const &target)
{
	std::cout << "<SC4V-TP \033[1;92m" << m_name << "\033[0m attacks " << target << " at range, causing \033[1;34m"
	<< m_rangedAttackDamage << "\033[0m points of damage!>" << std::endl;
	
	std::string quete = quetesAttack[rand() % (sizeof(quetesAttack) / sizeof(quetesAttack[0]))];
	std::cout << quete << std::endl;
}

void	ScavTrap::meleeAttack( std::string const &target)
{
	std::cout << "<SC4V-TP\033[1;92m" << m_name << "\033[0m attacks " << target << " at melee, causing \033[1;34m"
	<< m_meleeAttackDamage << "\033[0m points of damage!>" << std::endl;
	
	std::string quete = quetesAttack[rand() % (sizeof(quetesAttack) / sizeof(quetesAttack[0]))];
	std::cout << quete << std::endl;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	m_hitPoints = ((m_hitPoints - (amount - m_armorDamageReduction)) < MIN_SC) ? MIN_SC : (m_hitPoints - (amount - m_armorDamageReduction));
	std::cout << "<SC4V-TP \033[1;92m" << m_name << "\033[0m takes damage and loses \033[1;34m"
	<< amount << "\033[0m points of damage!>" << std::endl;
	
	std::string quete = quetesDamage[rand() % (sizeof(quetesDamage) / sizeof(quetesDamage[0]))];
	std::cout << quete << std::endl;

	std::cout << "\t\t\t\t\t HP" << m_hitPoints << "/" << m_maxHitPoints << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	m_hitPoints = ((m_hitPoints + amount) > MAX_HP) ? MAX_HP : (m_hitPoints + amount);

	std::cout << "<SC4V-TP \033[1;92m" << m_name << "\033[0m restores health by \033[1;34m"
	<< amount << "\033[0m points!>" << std::endl;
	
	std::string quete = quetesRepaired[rand() % (sizeof(quetesRepaired) / sizeof(quetesRepaired[0]))];
	std::cout << quete << std::endl;
}

void	ScavTrap::challengeNewcomer( std::string const &target )
{
	// std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m is trying to use effect a semi-random attack>" <<
	// std::endl;
	if (m_energyPoints - COST_ENERGY_SC < MIN_SC)
	{
		std::cout << "\033[1;33mCan I shoot something now? Or climb some stairs? SOMETHING exciting?\033[0m" << std::endl;
		std::cout << "<\033[1;92m" << m_name << "\033[0m is idle now>" << std::endl;
	}
	else
	{
		m_energyPoints -= COST_ENERGY_SC;
		std::string skill = skillTree[rand() % (sizeof(skillTree) / sizeof(skillTree[0]))];
		std::cout << "<\033[1;92m" << m_name << "\033[0m " << skill << std::endl;
		std::cout << "<and avoids a fight with " << target << ">" << std::endl;
	}
}