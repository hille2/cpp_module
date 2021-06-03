/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:40 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:11:49 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( ) :	Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const &scorpionCopy ) : Enemy(scorpionCopy)
{}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion	RadScorpion::operator=( RadScorpion const &scorpionValue)
{
	if (&scorpionValue == this)
		return (*this);
	
	m_type = scorpionValue.m_type;
	m_hp = scorpionValue.m_hp;
	return (*this);
}

void		RadScorpion::takeDamage ( int value )
{
	Enemy::takeDamage( value );
}