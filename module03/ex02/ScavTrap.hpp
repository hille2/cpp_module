/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:18:37 by sgath             #+#    #+#             */
/*   Updated: 2021/05/29 17:49:33 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	static std::string skillTree[];

protected:
	std::string m_name;
	static std::string quetesAttack[];
	static std::string quetesDamage[];
	static std::string quetesRepaired[];

public:
	ScavTrap( std::string const name );
	ScavTrap( ScavTrap const &scavCopy );
	virtual ~ScavTrap( );
	ScavTrap	operator=( ScavTrap const &scavValue );

	std::string	getName( );
	void		rangedAttack( std::string const & target );
	void		meleeAttack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );
	
	void		challengeNewcomer( std::string const &target );
	
};

#endif