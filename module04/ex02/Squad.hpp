/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/05 22:16:26 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	int				countUnits;
	ISpaceMarine	**units;
	
public:
	Squad( );
	Squad( Squad const &copy );
	virtual			~Squad( );
	Squad			&operator=( Squad const &value);
	
	int				getCount( ) const;
	ISpaceMarine*	getUnit( int val ) const;
	int				push( ISpaceMarine *soldier );
};

#endif
