/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:10:13 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 19:16:17 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine( )
{
	std::cout << "*Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const &copy )
{
	(void)copy;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine( )
{
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine	&TacticalMarine::operator=( TacticalMarine const &value)
{
	if (&value == this)
		return (*this);
		
	return (*this);
}

ISpaceMarine		*TacticalMarine::clone( ) const
{
	return (new TacticalMarine(*this));
}
void				TacticalMarine::battleCry( ) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void				TacticalMarine::rangedAttack( ) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void				TacticalMarine::meleeAttack( ) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
