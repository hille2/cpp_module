/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/20 12:55:29 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T> 
const T& max(const T& a, const T& b)
{
    return (a > b) ? a : b;
}

template <typename T> 
const T& min(const T& a, const T& b)
{
    return (a < b) ? a : b;
}

template <typename T>
void swap(T& a, T& b)
{
	T c;
	
	c = a;
	a = b;
	b = c;
}

#endif