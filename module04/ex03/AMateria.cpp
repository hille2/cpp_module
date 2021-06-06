/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:33:23 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 12:44:32 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( ) :							m_type("No materia"),  m_xp(0)
{}

AMateria::AMateria( std::string const &type ) :	m_type(type), m_xp(0)
{}

AMateria::AMateria( AMateria const &copy ) :	m_type(copy.m_type), m_xp(copy.m_xp)
{}

AMateria::~AMateria( )
{}

AMateria			&AMateria::operator=( AMateria const &value )
{
	if (&value == this)
		return (*this);
	
	m_type = value.m_type;
	m_xp = value.m_xp;
	return (*this);
}

std::string const	&AMateria::getType( ) const
{
	return (m_type);
}

unsigned int		AMateria::getXP( ) const
{
	return (m_xp);
}

void				AMateria::use ( ICharacter &target )
{
	m_xp += 10;
}