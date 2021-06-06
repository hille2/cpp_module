/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:22 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 19:19:10 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( ) :									m_type("No_type"), m_hp(0)
{}

Enemy::Enemy( int hp, std::string const &type ) :	m_type(type), m_hp(hp)
{}

Enemy::Enemy( Enemy const &enemyCopy ) :			m_type(enemyCopy.m_type), 
													m_hp(enemyCopy.m_hp)
{}

Enemy::~Enemy( )
{}

Enemy		Enemy::operator=( Enemy const &enemyValue)
{
	if (&enemyValue == this)
		return (*this);

	m_hp = enemyValue.m_hp;
	m_type = enemyValue.m_type;

	return (*this);
}

std::string	Enemy::getType( ) const
{
	return (m_type);
}

int			Enemy::getHP( ) const
{
	return (m_hp);
}

void		Enemy::takeDamage( int value )
{
	if (value >= 0)
		m_hp -= value;

	if (m_hp < 0)
		m_hp = 0;

}