/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:31:50 by sgath             #+#    #+#             */
/*   Updated: 2021/05/29 13:51:58 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string const name ) //: NinjaTrap(name), FragTrap(name)
{
	m_name = name;
	m_hitPoints = FragTrap::m_hitPoints;
	m_energyPoints = NinjaTrap::m_energyPoints;

	std::cout << "<you created Ned's frag-ninja models the NED-TP \"\033[1;92m" 
	<< SuperTrap::m_name << "\033[0m\"> :" << std::endl << "\033[1;33mHey everybody! Check out my package!\033[0m" << std::endl;
	std::cout << "\033[1;59m<this thing would be useful>\033[0m" << std::endl;
}

SuperTrap::SuperTrap( SuperTrap &superCopy )
{
	m_name = superCopy.m_name;
	m_hitPoints = superCopy.m_hitPoints;
	m_energyPoints = superCopy.m_energyPoints;

	std::cout << "<you created the clone INed's Claptrap models the NED-TP \"\033[1;92m" 
	<< m_name << "\033[0m\"> :" << std::endl << "\033[1;33mHa ha ha! Suck it!\033[0m" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "<\033[1;92m" << m_name << "\033[0m has run out of battery>"
	<< std::endl << "\033[1;33mI don't know how much longer I can hold on!\033[0m" << std::endl;
	std::cout << "\033[1;59m<Is that even possible?>\033[0m" << std::endl;
}

SuperTrap	SuperTrap::operator=(SuperTrap &superValue)
{
	m_name = superValue.m_name;
	m_hitPoints = superValue.m_hitPoints;
	m_energyPoints = superValue.m_energyPoints;

	return (*this);
}

void		SuperTrap::rangedAttack( std::string const &target )
{
	FragTrap::rangedAttack( target );
}

void		SuperTrap::meleeAttack( std::string const &target )
{
	NinjaTrap::meleeAttack( target );
}
