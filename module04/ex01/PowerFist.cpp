/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:35 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:29:47 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( ) : 								AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist( PowerFist const &powerCopy ) :	AWeapon(powerCopy)
{}

PowerFist::~PowerFist( )
{}

PowerFist	&PowerFist::operator=( PowerFist const &powerValue )
{
	if (&powerValue == this)
		return (*this);
	
	m_name = powerValue.m_name;
	m_damage = powerValue.m_damage;
	m_apcost = powerValue.m_apcost;

	return (*this);
}

void		PowerFist::attack( ) const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}