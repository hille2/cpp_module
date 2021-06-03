/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sacrifice.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:19:02 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 10:29:10 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sacrifice.hpp"

Sacrifice::Sacrifice( std::string name ) :					Peon(name)
{
	std::cout << "Zip-zip.." << std::endl;
}

Sacrifice::Sacrifice( Sacrifice const &sacrificeCopy ) :	Peon(sacrificeCopy)
{
}

Sacrifice::~Sacrifice( )
{
	std::cout << "Bleuark-Bleuark" << std::endl;
}

Sacrifice	&Sacrifice::operator=( Sacrifice const &sacrificeValue )
{
		if (&sacrificeValue == this)
		return (*this);

	Peon::operator=(sacrificeValue);
	return (*this);
}