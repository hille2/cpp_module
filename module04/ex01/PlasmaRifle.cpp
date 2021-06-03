/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:30 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:29:35 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( ) : 								AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle( PlasmaRifle const &rifleCopy ) :	AWeapon(rifleCopy)
{}

PlasmaRifle::~PlasmaRifle( )
{}

PlasmaRifle	&PlasmaRifle::operator=( PlasmaRifle const &rifleValue )
{
	if (&rifleValue == this)
		return (*this);
	
	m_name = rifleValue.m_name;
	m_damage = rifleValue.m_damage;
	m_apcost = rifleValue.m_apcost;

	return (*this);
}

void		PlasmaRifle::attack( ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}