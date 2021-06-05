/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:07:59 by sgath             #+#    #+#             */
/*   Updated: 2021/06/05 17:22:58 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
private:
	
public:
	TacticalMarine( );
	TacticalMarine( TacticalMarine const &copy );
	~TacticalMarine();
	TacticalMarine	&operator=( TacticalMarine const &value );

	ISpaceMarine*	clone( ) const;
	void			battleCry( ) const;
	void			rangedAttack( ) const;
	void			meleeAttack( ) const;
};

#endif