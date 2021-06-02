/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:31:10 by sgath             #+#    #+#             */
/*   Updated: 2021/06/02 23:30:04 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim( std::string const &name ) :	m_name("\033[1;92m" + name + "\033[0m")
{
	std::cout << "Some random victim called " << m_name << " just appeared!" << std::endl;
}

Victim::Victim( Victim const &victimCopy )
{
	m_name = victimCopy.m_name;
}

Victim::~Victim( )
{
	std::cout << "Victim " << m_name << " just died for no apparent reason!" << std::endl;
}

Victim			Victim::operator=( Victim const &victimValue )
{
	m_name = victimValue.m_name;
}

std::string		Victim::getName( ) const
{
	return (m_name);
}


void			Victim::setName( std::string const &newName )
{
	m_name = newName;
}

void			Victim::getPolimorphed( ) const
{
	std::cout << m_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream	&operator<<( std::ostream out, Victim const &victimValue)
{
	std::cout << "I'm " << victimValue.getName() << " and I like otters!" << std::endl;
	return (out);
}