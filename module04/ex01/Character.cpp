/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:17 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 18:05:11 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const &name ) :	m_name("\033[1;91m" + name + "\033[0m"), m_AP(40), m_weapon( )
{}

Character::Character( Character const &chCopy ) :		m_name(chCopy.m_name),
														m_AP(chCopy.m_AP),
														m_weapon(chCopy.m_weapon)
{}

Character::~Character( )
{}

Character	Character::operator=( Character const &chValue )
{
	if (&chValue == this)
		return (*this);

	m_name = chValue.m_name;
	m_AP = chValue.m_AP;
	m_weapon = chValue.m_weapon;
	return (*this);
}

void		Character::recoverAP( )
{
	m_AP += 10;
	if (m_AP > 40)
		m_AP = 40;
}

void		Character::equip( AWeapon *weapon )
{
	m_weapon = weapon;
}

void		Character::attack( Enemy *enemy )
{
	m_AP -= m_weapon->getAPCost();
	std::cout << m_name << " attacks " << enemy->getType() << " with a " << m_weapon->getName() 
	<< std::endl;
	m_weapon->attack();
	enemy->takeDamage(m_weapon->getDamage());
	if ( enemy->getHP() < 1)
		delete enemy;
}

std::string	Character::getName() const
{
	return (m_name);
}

AWeapon	*Character::getWeapon() const
{
	return (m_weapon);
}

int			 Character::getAP() const
{
	return (m_AP);
}

std::ostream	&operator<<(std::ostream &out, Character &chValue)
{
	std::cout <<  chValue.getName() << " has " << chValue.getAP() << " AP and";
	if (chValue.getWeapon())
		std::cout << " wields a " << chValue.getWeapon()->getName() << std::endl;
	else
		std::cout << " is unarmed" << std::endl;
	return (out);
}
