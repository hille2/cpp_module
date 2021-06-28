/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/28 13:19:56 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <cstdarg>

#define MAX_INT32 2147483647
#define MAX_INT8 127

class	Span
{
private:
	unsigned int		m_num;
	std::multiset<int>	m_multisetNum;

	Span();

public :
	Span( unsigned int n );
	Span( Span const &copy );
	virtual			~Span( );
	Span			operator=( Span const &value );

	void			superAdd( const int count, ... );
	void			addNumber( const int newNum );
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	class			ElementIsFull: public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
	class			NoFindShortest: public std::exception
	{
		virtual const char*	what( ) const throw();
	};

	class			NoFindLongest: public std::exception
	{
		virtual const char*	what( ) const throw();
	};
};

#endif
