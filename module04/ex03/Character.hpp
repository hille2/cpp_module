/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:10:56 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 18:08:15 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define VOLUME 4

class Character : public ICharacter
{
private:
	std::string			m_name;
	AMateria			*m_inventory[VOLUME];

public:
	Character( );
	Character( std::string name );
	Character( Character const &copy );
	virtual				~Character( );
	Character			operator=( Character const &value );

	std::string const	&getName( ) const;
	void				equip( AMateria* m );
	void				unequip( int idx );
	void				use( int idx, ICharacter &target );

};

#endif