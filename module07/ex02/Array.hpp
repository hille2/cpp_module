/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/20 17:01:25 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <string>

template<class T>
class Array
{
private:
	int		m_len;
	T		*m_elem;
	
public:
	Array( ) :				m_len(0), m_elem(new T[len])
	{};

	Array( const int n) :	m_len(n), m_elem(new T[len])
	{};

	Array( Array const &copy )
	{
		m_len = copy.m_len;
		if (m_len < 0)
			throw();
		m_elem = new T[m_len];
		for( int i = 0; i < len; i++)
			m_elem[i] = copy.m_elem[i];
	};

	virtual	~Array()
	{
		delite [] m_elem;
	};
	
	Array	&operator=( Array const &value )
	{
		if (this == &value)
			return *this;
			
		m_len = value.m_len;
		if (m_len < 0)
			throw();
		m_elem = new T[m_len];
		for( int i = 0; i < len; i++)
			m_elem[i] = value.m_elem[i];
	};

	
	T		&operator[]( Array const &i )
	{
		if (i < 0 || i >= m_len)
			throw();
		return m_elem[i];
	};

	class	ElementIsOutOfTheLimits : public std::exception
	{
		virtual const char*	what( ) const throw();
	};	
	
	
};

#endif