/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:24:20 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 18:05:25 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( ) :					m_name("me")
{
	for (int i = 0; i < VOLUME; i++)
		m_inventory[i] = 0;
}

Character::Character( std::string name ) :		m_name(name)
{
	for (int i = 0; i < VOLUME; i++)
		m_inventory[i] = 0;
}

Character::Character( Character const &copy ) :	m_name(copy.m_name)
{
	for (int i = 0; i < VOLUME; i++)
		m_inventory[i] = copy.m_inventory[i];
}

Character::~Character( )
{
	for (int i = 0; i < VOLUME; i++)
		if (m_inventory[i] != 0)
			delete m_inventory[i];
	//delete m_inventory;
}

Character			Character::operator=( Character const &value )
{
	if (&value == this)
		return (*this);
	
	m_name = value.m_name;
	for (int i = 0; i < VOLUME; i++)
		m_inventory[i] = value.m_inventory[i];
	return (*this);
}

std::string const	&Character::getName( ) const
{
	return (m_name);
}

void				Character::equip( AMateria* m )
{
	int i = 0;
	while (m_inventory[i] != 0)
		i++;
	if (i < VOLUME)
		m_inventory[i] = m;
}

void				Character::unequip( int idx )
{
	if ( idx >= 0 && idx < VOLUME)
		m_inventory[idx] = 0;
}

void				Character::use( int idx, ICharacter &target )
{
	if ( idx >= 0 && idx < VOLUME)
		m_inventory[idx]->use(target);
}
