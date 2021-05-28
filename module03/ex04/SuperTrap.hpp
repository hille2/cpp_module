/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:31:53 by sgath             #+#    #+#             */
/*   Updated: 2021/05/28 21:28:12 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap :public NinjaTrap, public FragTrap
{
private:

protected:
	std::string m_name;
	int m_hitPoints;
	int m_energyPoints;
	const static int m_maxHitPoints = FragTrap::m_maxHitPoints;
	const static int m_maxEnergyPoints = NinjaTrap::m_maxEnergyPoints;
	const static int m_meleeAttackDamage = NinjaTrap::m_meleeAttackDamage;
	const static int m_rangedAttackDamage = NinjaTrap::m_rangedAttackDamage;
	const static int m_armorDamageReduction = FragTrap::m_armorDamageReduction;

public:
	SuperTrap( std::string const name );
	SuperTrap( SuperTrap &superCopy );
	~SuperTrap();
	SuperTrap	operator=( SuperTrap &superValue );
	
	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};

#endif

