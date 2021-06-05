/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:39:01 by sgath             #+#    #+#             */
/*   Updated: 2021/06/05 22:16:34 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMONATOR_HPP
#define ASSAULTTERMONATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
private:
	
public:
	AssaultTerminator( );
	AssaultTerminator( AssaultTerminator const &copy );
	virtual				~AssaultTerminator();
	AssaultTerminator	&operator=( AssaultTerminator const &value );

	ISpaceMarine*		clone( ) const;
	void				battleCry( ) const;
	void				rangedAttack( ) const;
	void				meleeAttack( ) const;
};

#endif