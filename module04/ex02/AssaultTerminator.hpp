/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:39:01 by sgath             #+#    #+#             */
/*   Updated: 2021/06/05 17:21:59 by sgath            ###   ########.fr       */
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
	~AssaultTerminator();
	AssaultTerminator	&operator=( AssaultTerminator const &value );

	ISpaceMarine*		clone( ) const;
	void				battleCry( ) const;
	void				rangedAttack( ) const;
	void				meleeAttack( ) const;
};

#endif