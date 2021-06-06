/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:28:03 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 18:12:07 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual				~ICharacter( ) {}
	virtual std::string	const &getName( ) const = 0;
	virtual void		equip( AMateria* m ) = 0;
	virtual void		unequip( int idx ) = 0;
	virtual void		use( int idx, ICharacter &target ) = 0;
};

#endif