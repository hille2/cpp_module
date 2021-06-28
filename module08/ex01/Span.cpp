/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/28 10:39:12 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{}

Span::Span( unsigned int num ) :	m_num(num)
{}

Span::Span( Span const &copy ) :	m_num(copy.m_num)
{
	// if (!m_multisetNum.clear())
		m_multisetNum.clear();

	m_multisetNum = copy.m_multisetNum;
}

Span::~Span()
{
	m_multisetNum.clear();
}

Span			Span::operator=( Span const &value )
{
	if (&value == this)
		return *this;

	m_num = value.m_num;
	m_multisetNum.clear();
	m_multisetNum = value.m_multisetNum;

	return *this;
}

void			Span::superAdd( const int count, ... )
{

	
	va_list list;
	va_start(list, count);
	for (int x = 0; x < count; x++)
	{
		int num = va_arg(list, int);
		std::cout << "<we add: " << num << ">\n";
		m_multisetNum.insert(num);
		if (x > m_num)
		{
			va_end(list);
			throw Span::ElementIsFull();
		}
	}
	va_end(list);
}

void			Span::addNumber( const int newNum )
{
	if (m_multisetNum.size() >= m_num )
		throw Span::ElementIsFull();

	m_multisetNum.insert(newNum);
	//m_multisetNum.sort();
}

unsigned int	Span::shortestSpan()
{
	int size = m_multisetNum.size();
	if (size < 2)
		throw Span::NoFindShortest();

	std::multiset<int>::iterator one = m_multisetNum.begin();
	std::multiset<int>::iterator two = one++;
	unsigned int shortest = INT32_MAX;
	unsigned int tmp = abs(*one - *two);
	for (int i = 0; i < size - 1; i++)
	{
		if (tmp < shortest)
			shortest = tmp;
		tmp = abs(*one++ - *two++);
	}
	
	return shortest;
}

unsigned int	Span::longestSpan()
{
		int size = m_multisetNum.size();
	if (size < 2)
		throw Span::NoFindLongest();

	std::multiset<int>::iterator max = std::max_element(m_multisetNum.begin(), m_multisetNum.end());
	std::multiset<int>::iterator min = std::min_element(m_multisetNum.begin(), m_multisetNum.end());
	unsigned int longest = INT32_MIN;

	return *max - *min;
}

const char*	Span::NoFindLongest::what( ) const throw()
{
	return "Error:\nThere is no span to find longest span";
}

const char*	Span::NoFindShortest::what( ) const throw()
{
	return "Error:\nThere is no span to find shortest span";
}

const char*	Span::ElementIsFull::what( ) const throw()
{
	return "Error:\nThis element is out of the limits";
}