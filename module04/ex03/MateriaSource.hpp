/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:20:11 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 17:39:18 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#define V_SOURSE 4

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria		*m_materia[V_SOURSE];

public:
	MateriaSource( );
	MateriaSource( MateriaSource const &copy );
	virtual			~MateriaSource();
	MateriaSource	&operator=( MateriaSource const &value );
	 
	void			learnMateria( AMateria * materia);
	AMateria		*createMateria( std::string const &type);
	
};

#endif
