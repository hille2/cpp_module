/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 14:33:15 by sgath             #+#    #+#             */
/*   Updated: 2021/05/28 14:25:31 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

enum FuckClap
{
	COST_ENERGY_FR = 25,
	SKILL_FR = 5,
	MAX_HP = 100,
	MAX_MANA = 50,
	MIN = 0,
	COST_ENERGY_SC = 7,
	SUPER_SECRET_ATTACK = 15,
};

class ClapTrap
{
private:

protected:
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

public:
	ClapTrap();
	ClapTrap( std::string const name );
	ClapTrap( ClapTrap const &copy );
	~ClapTrap( );
	ClapTrap	operator=( ClapTrap const &fragValue );
	
	std::string	getName( );
	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

};

#endif