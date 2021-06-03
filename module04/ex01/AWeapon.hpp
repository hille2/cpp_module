/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:14 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:27:04 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
protected:
	std::string		m_name;
	int				m_apcost;
	int				m_damage;

public:
	AWeapon( );
	AWeapon( std::string const &name, int apcost, int damage );
	AWeapon( AWeapon const &aweaponCopy );
	virtual			~AWeapon();
	AWeapon			&operator=( AWeapon const &aweaponValue );
	
	std::string		getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	
	virtual void	attack( ) const = 0;
};

#endif