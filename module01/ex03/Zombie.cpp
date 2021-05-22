/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:44:58 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 18:24:35 by sgath            ###   ########.fr       */
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
	std::cout << "\033[1;92m<" << Zombie::m_name << "(" << Zombie::m_type << ") say>: \033[0m";
	std::cout << "M-m-m-m... Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::getName(std::string name)
{
	m_name = name;
}