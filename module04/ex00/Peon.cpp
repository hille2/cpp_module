/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:30:56 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 09:59:51 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( std::string const &name ) :	Victim("\033[1;92m" + name + "\033[0m")
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon ( Peon const &peonCopy) :	Victim(peonCopy)
{
}

Peon::~Peon( )
{
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=( Peon const &peonValue )
{
	if (&peonValue == this)
		return (*this);

	Victim::operator=(peonValue);
	return (*this);
}

void	Peon::getPolimorphed( ) const
{
	std::cout << Victim::getName() << " has been turned into a pink pony!" 
	<< std::endl;
}