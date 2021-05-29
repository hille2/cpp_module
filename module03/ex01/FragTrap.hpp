/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:35:21 by sgath             #+#    #+#             */
/*   Updated: 2021/05/29 10:21:06 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

enum FuckMagicFr
{
	COST_ENERGY_FR = 25,
	SKILL_FR = 5,
	MIN_FR = 0,
	SUPER_SECRET_ATTACK = 15,
};

class FragTrap 
{
private:
	std::string m_name;
	int m_hitPoints;
	int m_energyPoints;
	const static int m_level = 1;
	const static int m_maxHitPoints = 100;
	const static int m_maxEnergyPoints = 100;
	const static int m_meleeAttackDamage = 30;
	const static int m_rangedAttackDamage = 20;
	const static int m_armorDamageReduction = 5;
	static std::string quetesAttack[];
	static std::string quetesDamage[];
	static std::string quetesRepaired[];
	static std::string skillTree[];

public:
	FragTrap( );
	FragTrap( std::string const name );
	FragTrap( FragTrap const &copy );
	~FragTrap();
	FragTrap	operator=( FragTrap const &fragValue );
	
	std::string	getName();
	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

	void		vaulthunter_dot_exe( std::string const &target );

};

#endif