/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:31:10 by sgath             #+#    #+#             */
/*   Updated: 2021/05/30 11:22:11 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() :						m_name("\033[1;92m" + "unknown beast" + "\033[0m")
{
	std::cout << "Some random victim called " << m_name << " just appeared!" << std::endl;
}

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