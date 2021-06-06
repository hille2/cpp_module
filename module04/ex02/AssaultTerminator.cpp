/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:39:04 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 19:15:32 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( )
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const &copy )
{
	(void)copy;
	std::cout << "* copy from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator( )
{
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator	&AssaultTerminator::operator=( AssaultTerminator const &value)
{
	if (&value == this)
		return (*this);
		
	return (*this);
}

ISpaceMarine		*AssaultTerminator::clone( ) const
{
	return (new AssaultTerminator(*this));
}
void				AssaultTerminator::battleCry( ) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void				AssaultTerminator::rangedAttack( ) const
{
	std::cout << "* does nothing *" << std::endl;
}

void				AssaultTerminator::meleeAttack( ) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

