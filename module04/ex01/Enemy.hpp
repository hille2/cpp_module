/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:25 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:20:32 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
protected:
	std::string		m_type;
	int				m_hp;

public:
	Enemy( );
	Enemy( int hp, std::string const &type );
	Enemy( Enemy const &enemyCopy );
	virtual			~Enemy();
	Enemy			operator=( Enemy const &enemyValue );

	std::string		getType( ) const;
	int				getHP( ) const;
	virtual void	takeDamage( int value );

};

#endif