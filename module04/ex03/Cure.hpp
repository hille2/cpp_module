/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:44:59 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 18:05:03 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	
public:
	Cure( );
	Cure( Cure const &copy );
	virtual		~Cure( );
	Cure			&operator=( Cure const &value );

	AMateria	*clone( ) const;	
	void		use( ICharacter &target );
	
};

#endif