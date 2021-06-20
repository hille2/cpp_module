/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/20 17:15:25 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array( ) :				m_len(0), m_elem(new T[len])
{}

Array::Array( const int n) :	m_len(n), m_elem(new T[len])
{}

Array::Array( Array const &copy )
{
	m_len = copy.m_len;
	if (m_len < 0)
		throw();
	m_elem = new T[m_len];
	for( int i = 0; i < len; i++)
		m_elem[i] = copy.m_elem[i];
}

Array::~Array()
{
	delite [] m_elem;
}
	
Array::Array	&operator=( Array const &value )
{
	if (this == &value)
		return *this;
		
	m_len = value.m_len;
	if (m_len < 0)
		throw();
	m_elem = new T[m_len];
	for( int i = 0; i < len; i++)
		m_elem[i] = value.m_elem[i];
}

T		&Array::operator[]( Array const &i )
{
	if (i < 0 || i >= m_len)
		throw();
	return m_elem[i];
}

const char*	Array::ElementIsOutOfTheLimit::what( ) const throw()
{
	return "Error:\nThis element is out of the limits";
}

