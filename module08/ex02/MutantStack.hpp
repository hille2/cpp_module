/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/28 13:22:36 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include <string>
#include <stack>
#include <list>
#include <algorithm>

#define MAX_INT8 127

template <typename T>
class MutantStack :	public std::stack<T>
{
private:

public:

	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack() {}
	
	MutantStack( const MutantStack &copy )
	{ *this = copy; }
	
	virtual		~MutantStack(){}
	
	MutantStack	operator=( const MutantStack &value )
	{
		this->c = value.c;
		return *this;	
	}
	
	iterator	begin()
	{ return (std::stack<T>::c.begin()); }
	
	iterator	end()
	{ return (std::stack<T>::c.end()); }
	
};

#endif