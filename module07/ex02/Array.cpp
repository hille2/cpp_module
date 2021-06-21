/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/20 20:03:45 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array( ) :   m_len(0), m_elem(nullptr)
{}

template<typename T>
Array<T>::Array( const int n) :	m_len(n)
{
	if (m_len < 0)
		throw ElementIsOutOfTheLimits();
	
	m_elem = new T[m_len];	
}

template<typename T>
Array<T>::Array( Array const &copy )
{
	m_len = copy.m_len;
	if (m_len < 0)
		throw ElementIsOutOfTheLimits();

	delete [] m_elem;
	m_elem =nullptr;
	m_elem = new T[m_len];
	for( int i = 0; i < m_len; i++)
		m_elem[i] = copy.m_elem[i];
}

template<typename T>
Array<T>::~Array()
{
	delete [] m_elem;
	m_elem =nullptr;
}

template<typename T>	
Array<T>	&Array<T>::operator=( Array const &value )
{
	if (this == &value)
		return *this;
		
	m_len = value.m_len;
	if (m_len < 0)
		throw ElementIsOutOfTheLimits();
	m_elem = new T[m_len];
	for( int i = 0; i < m_len; i++)
		m_elem[i] = value.m_elem[i];
}

template<typename T>
T			&Array<T>::operator[]( Array const &i )
{
	if (i < 0 || i >= m_len)
		throw ElementIsOutOfTheLimits();
	return m_elem[i];
}

template<typename T>
const char*	Array<T>::ElementIsOutOfTheLimits::what( ) const throw()
{
	return "Error:\nThis element is out of the limits";
}

template<typename T>
int			Array<T>::getLen()
{
	return m_len;
}

template<typename T>
T			Array<T>::getArray()
{
	T	tmp;

	for (int i = 0; i < m_len; i++)
		tmp[i] = m_elem[i];
	return tmp;
}

template<typename T>
void		Array<T>::setArray(T const &elem, int i)
{
	if (i > 0 || i >= m_len)
		throw ElementIsOutOfTheLimits();
	
	m_elem[i] = elem;
}
