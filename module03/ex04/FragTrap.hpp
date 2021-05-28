/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:35:21 by sgath             #+#    #+#             */
/*   Updated: 2021/05/28 13:42:39 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	static std::string skillTree[];

protected:
	std::string m_name;
	int m_level;
	int m_hitPoints;
	int m_energyPoints;
	const static int m_maxHitPoints = MAX_HP;
	const static int m_maxEnergyPoints = MAX_HP;
	const static int m_meleeAttackDamage = 30;
	const static int m_rangedAttackDamage = 20;
	const static int m_armorDamageReduction = 5;
	static std::string quetesAttack[];
	static std::string quetesDamage[];
	static std::string quetesRepaired[];

public:
	
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