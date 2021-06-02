/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:31:04 by sgath             #+#    #+#             */
/*   Updated: 2021/05/30 11:21:46 by sgath            ###   ########.fr       */
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

Sorcerer	Sorcerer::operator=( Sorcerer const &sorcererValue )
{
	m_name = sorcererValue.m_name;
	m_title = sorcererValue.m_title;
}

void		Sorcerer::createPolymorphism( Victim &victim)
{
	std::cout << m_name << " <" << m_title << "> and I like ponies!!";
	victim.m_name = "pony"
}