/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:35:21 by sgath             #+#    #+#             */
/*   Updated: 2021/05/28 21:05:26 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	static std::string skillTree[];

protected:
	std::string m_name;
	int m_hitPoints;
	int m_energyPoints;
	const static int m_maxEnergyPoints = 100;
	const static int m_meleeAttackDamage = 30;
	const static int m_rangedAttackDamage = 20;
	const static int m_armorDamageReduction = 5;
	static std::string quetesAttack[];
	static std::string quetesDamage[];
	static std::string quetesRepaired[];

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