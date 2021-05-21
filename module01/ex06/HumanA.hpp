/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:07:05 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 17:05:43 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string m_name;
	const Weapon &m_typeWeapon;

public:
	HumanA(std::string name, const Weapon &typeWeapon);
	~HumanA();
	void attack();

};

#endif