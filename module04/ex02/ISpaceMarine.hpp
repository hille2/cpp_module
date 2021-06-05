/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:31:37 by sgath             #+#    #+#             */
/*   Updated: 2021/06/05 17:21:34 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <iostream>
#include <string>

class ISpaceMarine
{
public:
	virtual			~ISpaceMarine( ) {}
	virtual			ISpaceMarine* clone( ) const = 0;
	virtual void	battleCry( ) const = 0;
	virtual void	rangedAttack( ) const = 0;
	virtual void	meleeAttack( ) const = 0;
};

#endif