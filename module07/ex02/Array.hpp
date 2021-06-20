/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/20 17:20:54 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
private:
	int		m_len;
	T		*m_elem;
	
public:
	Array( ) ;
	Array( const int n) ;
	Array( Array const &copy ) ;
	virtual	~Array() ;
	Array	&operator=( Array const &value ) ;
	T		&operator[]( Array const &i )  ;

	class	ElementIsOutOfTheLimits : public std::exception
	{
		virtual const char*	what( ) const throw();
	};	
	
};

#endif