/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:06:15 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 15:59:14 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :
	m_name(name)
{
	m_typeWeapon = 0;
}

HumanB::~HumanB()
{}

void HumanB::attack()
{
	std::cout << "<" << m_name << "> attacks with his <" << m_typeWeapon->getType()
	<< ">" << std::endl;
}

void HumanB::setWeapon(Weapon &newTypeWeapon)
{
	m_typeWeapon = &newTypeWeapon;
}