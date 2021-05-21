/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:06:54 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 17:05:37 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string m_type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	void setType(std::string type);
	std::string const &getType() const;
};

#endif
