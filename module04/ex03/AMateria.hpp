/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:21:10 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 12:58:58 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string			m_type;
	unsigned			int m_xp;

public:
	AMateria( );
	AMateria( std::string const &type );
	AMateria( AMateria const &copy );
	virtual				~AMateria( );
	AMateria			&operator=( AMateria const &value );

	std::string const	&getType( ) const; //Returns the materia type
	unsigned int		getXP( ) const; //Returns the Materia's XP
	virtual				AMateria* clone( ) const = 0;
	virtual	void		use( ICharacter &target );

};

#endif