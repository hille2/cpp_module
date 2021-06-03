/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:09 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:33:16 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon( ) :					m_name("stick"), m_apcost(0),
										m_damage(0)
{}

AWeapon::AWeapon( std::string const &name, int apcost, int damage ) :	m_name("\033[1;92m" + name + "\033[0m"),
																		m_apcost(apcost),
																		m_damage(damage)
{}

AWeapon::AWeapon( AWeapon const &aweaponCopy )
{
	m_name = aweaponCopy.m_name;
	m_apcost = aweaponCopy.m_apcost;
	m_damage = aweaponCopy.m_damage;
}

AWeapon::~AWeapon( )
{}

AWeapon		&AWeapon::operator=( AWeapon const &aweaponValue )
{
	if (&aweaponValue == this)
		return(*this);
	
	m_name = aweaponValue.m_name;
	m_apcost = aweaponValue.m_apcost;
	m_damage = aweaponValue.m_damage;
	
	return(*this);
}

std::string	AWeapon::getName( ) const
{
	return (m_name);
}

int			AWeapon::getAPCost( ) const
{
	return (m_apcost);
}

int			AWeapon::getDamage( ) const
{
	return (m_damage);
}
