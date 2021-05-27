/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:18:37 by sgath             #+#    #+#             */
/*   Updated: 2021/05/27 14:28:06 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

enum FuckMagicScav
{
	MAX_HP = 100,
	MAX_MANA = 50,
	MIN_SC = 0,
	COST_ENERGY_SC = 7,
};

class ScavTrap
{
private:
	std::string m_name;
	int m_level;
	int m_hitPoints;
	int m_energyPoints;

	const static int m_meleeAttackDamage = 20;
	const static int m_rangedAttackDamage = 15;
	const static int m_armorDamageReduction = 3;
	const static int m_maxHitPoints = MAX_HP;
	const static int m_maxEnergyPoints = MAX_MANA;

	static std::string quetesAttack[];
	static std::string quetesDamage[];
	static std::string quetesRepaired[];
	static std::string skillTree[];

public:
	ScavTrap( );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const &scavCopy );
	~ScavTrap( );
	ScavTrap	operator=( ScavTrap const &scavValue );

	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	void		challengeNewcomer( std::string const &target );

};

#endif