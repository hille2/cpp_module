/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:54:32 by sgath             #+#    #+#             */
/*   Updated: 2021/05/29 17:49:16 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
private:

protected:
	std::string m_name;
	int m_hitPoints;
	int m_energyPoints;
	const static int m_meleeAttackDamage = 60;
	const static int m_rangedAttackDamage = 5;
	const static int m_armorDamageReduction = 0;
	const static int m_maxHitPoints = 60;
	const static int m_maxEnergyPoints = 120;
	static std::string quetesAttack[];
	static std::string quetesDamage[];
	static std::string quetesRepaired[];

public:
	NinjaTrap( );
	NinjaTrap( std::string const name );
	NinjaTrap( NinjaTrap const &copy );
	virtual ~NinjaTrap( );
	NinjaTrap	operator=( NinjaTrap const &NinjaValue );

	void		ninjaShoebox( );
	void		ninjaShoebox( ClapTrap &clap );
	void		ninjaShoebox( FragTrap &frag );
	void		ninjaShoebox( ScavTrap &scav );
};

#endif