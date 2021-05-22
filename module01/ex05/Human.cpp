/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:30:56 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 18:34:05 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

Human::Human()
{
	std::cout << "Human here!" << std::endl;
}

Human::~Human()
{
	std::cout << "Human left!" << std::endl;
}

std::string Human::identify()
{
	return(brains.identify());
}

Brain &Human::getBrain()
{
	return(brains);
}
