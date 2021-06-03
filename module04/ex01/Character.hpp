/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:41:36 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string	m_name;
	int 		m_AP;
	AWeapon		*m_weapon;

public:
	Character( std::string const &name );
	Character( Character const &chCopy );
	virtual		~Character();
	Character	operator=( Character const &chValue );

	void recoverAP();
	void equip( AWeapon *weapon );
	void attack( Enemy *enemy);

	std::string	getName() const;
	AWeapon		*getWeapon() const;
	int			getAP() const;
};

std::ostream	&operator<<(std::ostream &out, Character &chValue);

#endif