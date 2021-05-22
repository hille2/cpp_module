/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:55:36 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 15:58:12 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony()
{}

Pony::~Pony()
{
	std::cout << "destroy pony" << std::endl;
}

std::string Pony::m_dataPony[5] = {
	"Hello, my name is ",
	"I'm ",
	"My element of harmony is ",
	"The color of my fur ",
	"My age "
};

Pony::Pony(std::string name, std::string gender, std::string harmony,
			std::string colors, std::string age)
{
	m_ponyDescription[NAME] = name;
	m_ponyDescription[GENDER] = gender;
	m_ponyDescription[HARMONY] = harmony;
	m_ponyDescription[COLORS] = colors;
	m_ponyDescription[AGE] = age;
}

void Pony::outputPony()
{
	for (int i = 0; i < 5; i++)
		std::cout << "☆ " << m_dataPony[i] << "\033[4m "<< m_ponyDescription[i] << "\033[24m" << std::endl;
	std::cout << "\033[35 friendship is magic ♡ \033[0m" << std::endl;
}