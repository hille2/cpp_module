/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:26:38 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 17:01:37 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : m_type("armless")
{}

Weapon::Weapon(std::string type) : m_type(type)
{}

Weapon::~Weapon()
{}

void Weapon::setType(std::string type)
{
	m_type = type;
}

std::string const &Weapon::getType() const
{
	return(m_type);
}
