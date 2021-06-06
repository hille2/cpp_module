/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:23:08 by sgath             #+#    #+#             */
/*   Updated: 2021/06/06 13:32:34 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( ) :					m_countUnits(0), units(0)
{}

Squad::Squad( Squad const &copy ) :	m_countUnits(copy.m_countUnits)
{
	if (m_countUnits > 0)
		m_countUnits = 0;
	for (int i = 0; i < copy.m_countUnits; i++)
		units[i] = copy.units[i];
}

Squad::~Squad( )
{
	if (m_countUnits > 0)
	{
		for (int i = 0; i < m_countUnits; i++)
			delete units[i];
		delete units;
	}
}

Squad			&Squad::operator=( Squad const &value )
{
	if (&value == this)
		return (*this);

	if (m_countUnits > 0)
		for (int i = 0; i < m_countUnits; i++)
			units[i] = value.units[i];
	return (*this);
}

int				Squad::getCount( ) const
{
	return (m_countUnits);
}

ISpaceMarine	*Squad::getUnit( int val ) const
{
	if ( val < 0 || val > m_countUnits)
		return (0);
	return (units[val]);
}

int				Squad::push( ISpaceMarine *soldier )
{
	if ( !soldier )
		return (0);
	else
	{
		if (!units)
			units = new ISpaceMarine*[0];
		else
		{
			for (int i = 0; i < m_countUnits; i++)
				if (units[i] == soldier)
					return (m_countUnits);
			
			ISpaceMarine **tmp = new ISpaceMarine*[m_countUnits + 1];
			for (int i = 0; i < m_countUnits; i++)
				tmp[i] = units[i];
			delete [] units;
			tmp[m_countUnits] = soldier;
			units = tmp;
		}
		units[m_countUnits] = soldier;
		m_countUnits ++;
	}
	return (m_countUnits);
}