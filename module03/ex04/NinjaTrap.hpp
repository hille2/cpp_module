/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:54:32 by sgath             #+#    #+#             */
/*   Updated: 2021/05/28 15:14:08 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

enum FuckNinja
{
	MAX_HP_NJ = 60,
	MAX_MANA_NJ = 120,
};

class NinjaTrap : public ClapTrap
{
private:

protected:
	std::string m_name;
	int m_level;
	int m_hitPoints;
	int m_energyPoints;
	const static int m_meleeAttackDamage = 60;
	const static int m_rangedAttackDamage = 5;
	const static int m_armorDamageReduction = 0;
	const static int m_maxHitPoints = MAX_HP_NJ;
	const static int m_maxEnergyPoints = MAX_MANA_NJ;
	static std::string quetesAttack[];
	static std::string quetesDamage[];
	static std::string quetesRepaired[];

public:
	NinjaTrap( );
	NinjaTrap( std::string const name );
	NinjaTrap( NinjaTrap const &copy );
	~NinjaTrap( );
	NinjaTrap	operator=( NinjaTrap const &NinjaValue );

	void		ninjaShoebox( );
	void		ninjaShoebox( ClapTrap &clap );
	void		ninjaShoebox( FragTrap &frag );
	void		ninjaShoebox( ScavTrap &scav );
};

#endif