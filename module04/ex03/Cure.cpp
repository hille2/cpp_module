/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:50:09 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 18:06:33 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( ) :					AMateria("cure")
{}

Cure::Cure( Cure const &copy ) :	AMateria(copy)
{}

Cure::~Cure( )
{}

Cure			&Cure::operator=( Cure const &value )
{
	if (&value == this)
		return (*this);
	
	m_type = value.m_type;
	m_xp = value.m_xp;
	return (*this);
}

AMateria	*Cure::clone( ) const
{
	return (new Cure(*this));
}

void		Cure::use( ICharacter &target )
{
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}