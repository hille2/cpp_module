/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:54:29 by sgath             #+#    #+#             */
/*   Updated: 2021/05/29 10:03:51 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( ) :							ClapTrap( ), m_hitPoints(m_maxHitPoints),
													m_energyPoints(m_maxEnergyPoints)
{
	std::cout << "\033[1;235m*ninja noise*\033[0m" << std::endl;
}

NinjaTrap::NinjaTrap( std::string const name ) :	ClapTrap(name), m_hitPoints(m_maxHitPoints),
													m_energyPoints(m_maxEnergyPoints)
{
	std::cout << "<you created Interplanetary Ninja Assassin models the INAC-TP \"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "\033[1;33mHey everybody! Check out my package!\033[0m" << std::endl;
	std::cout << "\033[1;59m<you are f*cking mad!>\033[0m" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const &ninjaCopy)
{
	m_name = ninjaCopy.m_name;
	m_hitPoints = ninjaCopy.m_hitPoints;
	m_energyPoints = ninjaCopy.m_energyPoints;

	std::cout << "<you created the clone Interplanetary Ninja Assassin models the INAC-TP \"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "\033[1;33mHa ha ha! Suck it!\033[0m" << std::endl;
}

NinjaTrap::~NinjaTrap( )
{
	if (m_name == "EXE" || m_name == "")
		std::cout << "\033[1;235m*krrrrr-krrrr ninja*\033[0m" << std::endl;
	else
	{
		std::cout << "<you hear strange sounds. \033[1;59mKnock-Knock.\033[0m " << 
		"Oh no, the robot's breather is damaged. Bam! " << std::endl << 
		"Breather explodes and launches \033[1;92m" << m_name << "\033[0m into space>"
		<< std::endl << "\033[1;33mI'm flying! I'm really flying!\033[0m" << std::endl;
		std::cout << "\033[1;59m<bye bye>\033[0m" << std::endl;
	}
}

NinjaTrap	NinjaTrap::operator=( NinjaTrap const &ninjaValue )
{
	m_name = ninjaValue.m_name;
	m_hitPoints = ninjaValue.m_hitPoints;
	m_energyPoints = ninjaValue.m_energyPoints;

	return (*this);
}

void		NinjaTrap::ninjaShoebox( )
{
	std::cout << "\033[1;33mOh. My. God. What if I'm like... a fish? And, if I'm not moving..." << std::endl <<
	"I stop breathing? AND THEN I'LL DIE! HELP ME! HELP MEEEEE HEE HEE HEEE! HHHHHHHELP\033[0m" << std::endl;
	std::cout << "<\033[1;92m" << m_name << "\033[0m is idle now>" << std::endl;
	m_energyPoints += rand() % SUPER_SECRET_ATTACK;
	if (m_energyPoints > m_maxEnergyPoints)
		m_energyPoints = m_maxEnergyPoints;
}

void		NinjaTrap::ninjaShoebox( ClapTrap &clap )
{
	if (m_energyPoints - m_meleeAttackDamage < MIN)
	{
		std::cout << "<\033[1;92m" << m_name << "\033[0m trying to use a skill NinjaShoebox, but misses>" << std::endl;
		std::cout << "<now it's \033[1;92m" << clap.getName() << "\033[0m turn to attack. Good luck!>" << std::endl;
		clap.meleeAttack(("\033[1;92m" + m_name + "\033[0m"));
		takeDamage(clap.m_meleeAttackDamage);

		std::cout << "<\033[1;92m" << m_name << "\033[0m drinks oil and recovers some of the energy";
		m_energyPoints += rand() % m_meleeAttackDamage;
	}
	else
	{
		m_energyPoints -= m_meleeAttackDamage;
		meleeAttack(("\033[1;92m" + clap.getName() + "\033[0m"));
		clap.takeDamage(m_meleeAttackDamage);
	}
	
}

void		NinjaTrap::ninjaShoebox( ScavTrap &scav )
{
	if (m_energyPoints - m_rangedAttackDamage < MIN)
	{
		std::cout << "<\033[1;92m" << m_name << "\033[0m trying to use a skill NinjaShoebox, but misses>" << std::endl;
		std::cout << "<now it's \033[1;92m" << scav.getName() << "\033[0m turn to attack. Good luck!>" << std::endl;
		scav.rangedAttack(("\033[1;92m" + m_name + "\033[0m"));
		takeDamage(scav.m_rangedAttackDamage);
		std::cout << "<\033[1;92m" << m_name << "\033[0m drinks oil and recovers some of the energy";
		m_energyPoints += rand() % m_rangedAttackDamage;
	}
	else
	{
		m_energyPoints -= m_rangedAttackDamage;
		meleeAttack(("\033[1;92m" + scav.getName() + "\033[0m"));
		scav.takeDamage(m_rangedAttackDamage);
	}
	
}

void		NinjaTrap::ninjaShoebox( FragTrap &frag )
{
		if (m_energyPoints - m_rangedAttackDamage < MIN)
	{
		std::cout << "<\033[1;92m" << m_name << "\033[0m trying to use a skill NinjaShoebox, but misses>" << std::endl;
		std::cout << "<now it's \033[1;92m" << frag.getName() << "\033[0m turn to attack. Good luck!>" << std::endl;
		frag.vaulthunter_dot_exe(("\033[1;92m" + m_name + "\033[0m"));
		takeDamage(SUPER_SECRET_ATTACK);
		std::cout << "<\033[1;92m" << m_name << "\033[0m drinks oil and recovers some of the energy";
		m_energyPoints += rand() % SUPER_SECRET_ATTACK;
	}
	else
	{
		m_energyPoints -= m_rangedAttackDamage;
		meleeAttack(("\033[1;92m" + frag.getName() + "\033[0m"));
		frag.takeDamage(m_rangedAttackDamage);
	}
}