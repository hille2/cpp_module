/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:18:37 by sgath             #+#    #+#             */
/*   Updated: 2021/05/29 10:25:52 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

enum FuckMagicSc
{
	MIN_SC = 0,
	COST_ENERGY_SC = 7,

};

class ScavTrap
{
	std::string m_name;
	int m_hitPoints;
	int m_energyPoints;
	const static int m_level = 1;
	const static int m_meleeAttackDamage = 20;
	const static int m_rangedAttackDamage = 15;
	const static int m_armorDamageReduction = 3;
	const static int m_maxHitPoints = 100;
	const static int m_maxEnergyPoints = 50;
	static std::string quetesAttack[];
	static std::string quetesDamage[];
	static std::string quetesRepaired[];
	static std::string skillTree[];

public:
	ScavTrap( std::string const name );
	ScavTrap( ScavTrap const &scavCopy );
	~ScavTrap( );
	ScavTrap	operator=( ScavTrap const &scavValue );

	std::string	getName( );
	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	
	void		challengeNewcomer( std::string const &target );
	
};

#endif