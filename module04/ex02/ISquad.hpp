/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:14:45 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 11:45:36 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include <iostream>
#include <string>

#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual					~ISquad() {}
	virtual int				getCount( ) const = 0;
	virtual ISpaceMarine*	getUnit( int val ) const = 0;
	virtual int				push( ISpaceMarine *soldier ) = 0;
};

#endif