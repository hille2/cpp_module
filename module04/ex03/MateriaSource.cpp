/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:33:13 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 18:25:23 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( )
{
	for (int i = 0; i < V_SOURSE; i++)
		m_materia[i] = 0;
}

MateriaSource::MateriaSource( MateriaSource const &copy )
{
	for (int i = 0; i < V_SOURSE; i++)
		if (copy.m_materia[i] != 0)
			m_materia[i] = copy.m_materia[i];
}

MateriaSource::~MateriaSource( )
{
	for (int i = 0; i < V_SOURSE; i++)
		m_materia[i] = 0;
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &value )
{
	if (&value == this)
		return (*this);
	
	for (int i = 0; i < V_SOURSE; i++)
		m_materia[i] = value.m_materia[i];
	return (*this);
}

void			MateriaSource::learnMateria ( AMateria *materia )
{
	int i = 0;
	while (m_materia[i] != 0)
		i++;
	if (i < V_SOURSE)
		m_materia[i] = materia;
}

AMateria		*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < V_SOURSE; i++)
		if (m_materia[i] != 0)
			if (m_materia[i]->getType() == type)
				return (m_materia[i]);
	return (0);
}