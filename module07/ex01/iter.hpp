/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/20 15:35:11 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T (*array), int len, void (*f)(T const &v))
{
	for (int i = 0; i < len; i++)
		(*f)(array[i]);
	std::cout << std::endl;
}

template <typename T>
void	printAdress(T const &v)
{
	std::cout << &v << " ";
}

#endif
