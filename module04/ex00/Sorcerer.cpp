/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:31:04 by sgath             #+#    #+#             */
/*   Updated: 2021/06/02 23:31:03 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string const &name, std::string const &title ) :
					m_name("\033[1;92m" + name + "\033[0m"), m_title("\033[1;92m "+ title + "\033[0m")
{
	std::cout << m_name << " <" << m_title << "> is born!" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const &sorcererCopy )
{
	m_name = sorcererCopy.m_name;
	m_title = sorcererCopy.m_title; 
}

Sorcerer::~Sorcerer( )
{
	std::cout << m_name << " <" << m_title << "> is dead. Consequences will never be the same!" 
	<< std::endl;
}

Sorcerer		Sorcerer::operator=( Sorcerer const &sorcererValue )
{
	m_name = sorcererValue.m_name;
	m_title = sorcererValue.m_title;
}

void			Sorcerer::polymorph( Victim const &victim) const
{
	victim.getPolimorphed( );
}

std::string			Sorcerer::getName( )
{
	return (m_name);
}

std::string			Sorcerer::getTitle( )
{
	return (m_title);
}

std::ostream	&operator<<( std::ostream &out, Sorcerer &sorcererValue )
{
	out << sorcererValue.getName() << " <" << sorcererValue.getTitle() 
	<< "> and I like ponies!!";
	return (out);
	
}