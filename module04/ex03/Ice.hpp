/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:44:59 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 12:50:01 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : private AMateria
{
private:
	
public:
	Ice( );
	Ice( Ice const &copy );
	virtual		~Ice( );
	Ice			&operator=( Ice const &value );

	AMateria	*clone( ) const;	
	void		use( ICharacter &target );
	
};

#endif
