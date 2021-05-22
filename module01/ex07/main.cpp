/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:19:34 by sgath             #+#    #+#             */
/*   Updated: 2021/05/22 17:37:07 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>
#include <string>
#include <fstream>

void	checkValidFile(std::string fileName)
{
	std::ifstream file(fileName);
	if (!file.is_open())
	 	Sed::outputParam(FILE_DOES_NOT_OPEN);
	file.close();
}

void	checkValid(char **av)
{
	std::string str;
	
	for (int i = 1; i < VALID_AV; i++)
	{
		str.append(av[i]);
		if (str.compare("") != ERROR_FAIL)
			Sed::outputParam(EMPTY_ARGUMENT);
		str.clear();
	}
	checkValidFile(str.append(av[1]));
	
}

int main(int ac, char **av)
{
	if (ac != VALID_AV)
		Sed::outputParam(INCORRECT_NUMBER_OF_ARGUMENTS);
	checkValid(av);
	Sed seds(av[1], av[2], av[3]);
	seds.addFile();
	return (Sed::outputParam(SUCCESS));
}

//std::cout << "bug" << std::endl;