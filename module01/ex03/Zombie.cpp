/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:44:58 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 12:52:36 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() : m_name(), m_type("very hungry")
{}

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{}

Zombie::~Zombie()
{}

void Zombie::announce()
{
	std::cout << "<" << Zombie::m_name << "(" << Zombie::m_type << ") say>: ";
	std::cout << "M-m-m-m... Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::getName(std::string name)
{
	m_name = name;
}