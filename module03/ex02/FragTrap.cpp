/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:35:25 by sgath             #+#    #+#             */
/*   Updated: 2021/05/28 13:07:47 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string const name ) :	m_name(name), m_level(1), m_hitPoints(MAX_HP),
												m_energyPoints(MAX_HP)
{
	std::cout << "<you created the  Claptrap models the FR4G-TP \"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "\033[1;33mYoo hoooooooooo!\033[0m" << std::endl;
	std::cout << "\033[1;59m<we will all regret it>\033[0m" << std::endl;
}

FragTrap::FragTrap( FragTrap const &copy ) :	m_name(copy.m_name), m_level(copy.m_level), 
												m_hitPoints(copy.m_hitPoints), m_energyPoints(copy.m_energyPoints)
												
{
	std::cout << "<you created clone Claptrap models the FR4G-TP\"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "\033[1;33mRrrrrgh...this isn't working!\033[0m" << std::endl;
}

FragTrap::~FragTrap( )
{
	std::cout << "<Claptrap models the FR4G-TP dies \"\033[1;92m" << m_name << "\033[0m\"> :" << std::endl <<
	"\033[1;33mOh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!\033[0m" << std::endl;
	std::cout << "<finally we are free from chatter>" << std::endl;
}

std::string	FragTrap::quetesAttack[] =
{
	"\033[1;33mLooking good, servant!\033[0m",
	"\033[1;33mAnd it suits you!\033[0m",
	"\033[1;33mFormidable, but at the same time exciting.\033[0m",
	"\033[1;33mWonderful! Quite another matter.\033[0m",
	"\033[1;33mYou just do not recognize!\033[0m",
	"\033[1;33mStylish!\033[0m",
	"\033[1;33mCool!\033[0m",
	"\033[1;33mWell, just a fuck-a-hell outfit!\033[0m",
	"\033[1;33mGorgeous!\033[0m",
	"\033[1;33mA killer outfit!\033[0m",
	"\033[1;33mDo you think it's real with your figure?\033[0m",
	"\033[1;33mYeah ... I got your idea.\033[0m",
	"\033[1;33mSexy.\033[0m",
	"\033[1;33mOz-oz-oz ...\033[0m",
	"\033[1;33mHa ha!\033[0m",
	"\033[1;33mPhew!\033[0m",
	"\033[1;33mFocus-pocus!\033[0m",
	"\033[1;33mWow! You're not dead?\033[0m",
	"\033[1;33mYoo hoooooooooo!\033[0m",
};

std::string	FragTrap::quetesDamage[] =
{
	"\033[1;33mI can see through time...\033[0m",
	"\033[1;33mMy servos... are seizing...\033[0m",
	"\033[1;33mI can see... the code\033[0m",
	"\033[1;33mI don't like this... this is making me nervous. Take a deep breath- I can't breathe!\n This is just a recording of someone breathing! It's not real! It's just making me more nervous!\033[0m",
	"\033[1;33mI'm detecting a motor unit malfunction... I can't move! I'm paralyzed with fear!\033[0m",
	"\033[1;33mPlease don't shoot me, please don't shoot me, please don't shoot me!\033[0m",
	"\033[1;33mTurning off the optics... they can't see me...\033[0m",
	"\033[1;33mThe traveler will protect me. The traveler will protect me.\033[0m",
};

std::string	FragTrap::quetesRepaired[] = 
{
	"\033[1;33mGood as new, I think. Am I leaking?\033[0m",
	"\033[1;33mI'll lead the way!\033[0m",
	"\033[1;33mFollow me!\033[0m",
	"\033[1;33mThis way!\033[0m",
	"\033[1;33mYeah? Well, hmph!\033[0m",
	"\033[1;33mGood luck!\033[0m",
	"\033[1;33mRrrrrgh...this it working!\033[0m",
	"\033[1;33mUnce! Unce! I think I lost the beat... but, Unce! Unce!\033[0m",
};

std::string	FragTrap::skillTree[] =
{
	"\033[1;33mBoomtrap\033[0m",
	"\033[1;33mI Love You Guys!\033[0m",
	"\033[1;33mFragmented Fragtrap\033[0m",
	"\033[1;33mRequired level\033[0m",
	"\033[1;33mAvailable poin\033[0m",
};

FragTrap	FragTrap::operator=(FragTrap const &fragValue)
{
	m_name = fragValue.m_name;
	m_level = fragValue.m_level;
	m_hitPoints = fragValue.m_hitPoints;

	return (*this);
}

void		FragTrap::rangedAttack( std::string const &target )
{
	std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m attacks " << target << " at range, causing \033[1;34m"
	<< m_rangedAttackDamage << "\033[0m points of damage!>" << std::endl;
	
	std::string quete = quetesAttack[rand() % (sizeof(quetesAttack) / sizeof(quetesAttack[0]))];
	std::cout << quete << std::endl;
}

void		FragTrap::meleeAttack( std::string const &target )
{
	std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m attacks " << target << " at melee, causing \033[1;34m"
	<< m_meleeAttackDamage << "\033[0m points of damage!>" << std::endl;
	
	std::string quete = quetesAttack[rand() % (sizeof(quetesAttack) / sizeof(quetesAttack[0]))];
	std::cout << quete << std::endl;
}

void		FragTrap::takeDamage( unsigned int amount )
{
	m_hitPoints = ((m_hitPoints - (amount - m_armorDamageReduction)) < MIN) ? MIN : (m_hitPoints - (amount - m_armorDamageReduction));
	std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m takes damage and loses \033[1;34m"
	<< amount << "\033[0m points of damage!>" << std::endl;
	
	std::string quete = quetesDamage[rand() % (sizeof(quetesDamage) / sizeof(quetesDamage[0]))];
	std::cout << quete << std::endl;

	std::cout << "\t\t\t" <<m_hitPoints << "/" << m_maxHitPoints << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount )
{
	m_hitPoints = ((m_hitPoints + amount) > MAX_HP) ? MAX_HP : (m_hitPoints + amount);

	std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m restores health by \033[1;34m"
	<< amount << "\033[0m points!>" << std::endl;
	
	std::string quete = quetesRepaired[rand() % (sizeof(quetesRepaired) / sizeof(quetesRepaired[0]))];
	std::cout << quete << std::endl;
}

void		FragTrap::vaulthunter_dot_exe( std::string const &target )
{
	std::cout << "<FR4G-TP \033[1;92m" << m_name << "\033[0m is trying to use effect a semi-random attack>" <<
	std::endl;
	if (m_energyPoints - COST_ENERGY_FR < MIN)
	{
		std::cout << "\033[1;33mRrrrrgh...this isn't working! Not enough energy!\033[0m" << std::endl;
		std::cout << "<\033[1;92m" << m_name << "\033[0m starts crying>" << std::endl;
	}
	else
	{
		m_energyPoints -= COST_ENERGY_FR;
		std::string quete = quetesAttack[rand() % (sizeof(quetesAttack) / sizeof(quetesAttack[0]))];
		std::string skill = skillTree[rand() % SKILL_FR];
		std::cout << "<\033[1;92m" << m_name << "\033[0m uses skill\033[1;4m " << skill << "\033[0m";
		std::cout << " and attacks " << target << " causing \033[1;34m 15 \033[0m points of damage!>" << std::endl;
		std::cout << quete << std::endl;
	}	
}