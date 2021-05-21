/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:51:05 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 16:02:35 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>
//#include <iostream>

Brain::Brain()
{
	// m_convolutions = "many";
	// m_softness = "elastic";
	// m_color = "punk";
	// m_taste = "rotten"; 
	// m_freshness = "addle";
}

Brain::~Brain()
{}

std::string Brain::identify()
{
	std::stringstream pointer;
	pointer << this;
	//std::cout << pointer.str();
	return (pointer.str());
}
