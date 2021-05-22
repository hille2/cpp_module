/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:51:05 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 18:38:19 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain created!" << std::endl;

	m_convolutions = "many";
	m_softness = "elastic";
	m_color = "punk";
	m_taste = "rotten"; 
	m_freshness = "addle";
}

Brain::~Brain()
{
	std::cout << "No brain!" << std::endl;
}

std::string Brain::identify()
{
	std::stringstream pointer;
	pointer << this;
	return (pointer.str());
}
