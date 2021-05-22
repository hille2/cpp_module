/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 14:14:41 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 18:11:59 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Sed.hpp"

Sed::Sed()
{}

Sed::Sed(char *name, char *s1, char *s2)
{
	m_fileName.append(name);
	m_s1.append(s1);
	m_s2.append(s2);
}

Sed::~Sed()
{}

int Sed::outputParam(int res)
{
	switch(res)
	{
		case SUCCESS:
			std::cout << "Replace success" << std::endl;
			return (SUCCESS);
		
		case ERROR_FAIL :
		case VALID_AV :
			;
			
		case INCORRECT_NUMBER_OF_ARGUMENTS:
			std::cout << "Oh, no! Incorrect number of arguments, please try again!" << std::endl;
			exit (ERROR_FAIL);
			
		case EMPTY_ARGUMENT:
			std::cout << "Oh, no! Empty arguments, please try again!" << std::endl;
			exit (ERROR_FAIL);
			
		case FILE_DOES_NOT_OPEN:
			std::cout << "Oh, no! File does not open, please try again!" << std::endl;
			exit (ERROR_FAIL);
	}
	return(SUCCESS);
}


void Sed::replace(std::string &str)
{
	for (size_t i = 0; i < str.length(); i += m_s2.length())
	{
		i = str.find(m_s1, i);
		if (i == std::string::npos)
			break ;
		str.erase(i, m_s1.length());
		str.insert(i, m_s2);
	}
}


void Sed::addFile()
{
	std::string		tmp;
	std::ifstream	file(m_fileName);
	std::ofstream	newFile;
	
	file.is_open();
	newFile.open(m_fileName.append(".replace"), std::ios_base::trunc);
	while (std::getline(file, tmp))
	{
		Sed::replace(tmp);
		newFile << tmp << std::endl;
	}
	file.close();
	newFile.close();
}
