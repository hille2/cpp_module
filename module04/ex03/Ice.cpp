/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:50:09 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 18:06:21 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( ) :					AMateria("ice")
{}

Ice::Ice( Ice const &copy ) :	AMateria(copy)
{}

Ice::~Ice( )
{}

Ice			&Ice::operator=( Ice const &value )
{
	if (&value == this)
		return (*this);
	
	m_type = value.m_type;
	m_xp = value.m_xp;
	return (*this);
}

AMateria	*Ice::clone( ) const
{
	return (new Ice(*this));
}

void		Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << "*" << std::endl;
}