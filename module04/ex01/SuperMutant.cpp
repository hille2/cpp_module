/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:45 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:23:19 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( ) :	Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const &mutantCopy ) : Enemy(mutantCopy)
{}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant	SuperMutant::operator=( SuperMutant const &mutantValue)
{
	if (&mutantValue == this)
		return (*this);
	
	m_type = mutantValue.m_type;
	m_hp = mutantValue.m_hp;
	return (*this);
}

void		SuperMutant::takeDamage ( int value )
{
	Enemy::takeDamage( value - 3 );
}