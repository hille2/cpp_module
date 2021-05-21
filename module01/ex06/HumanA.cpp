/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:51:54 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 17:04:40 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, const Weapon &typeWeapon) :
	m_name(name), m_typeWeapon(typeWeapon)
{}

HumanA::~HumanA()
{}

void HumanA::attack()
{
	std::cout << "<" << m_name << "> attacks with his <" << m_typeWeapon.getType()
	<< ">" << std::endl;
}
