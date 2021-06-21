/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/21 17:20:48 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


bool	wantExit()
{
	std::string command;
	std::cout << "<Do u want exit?>" << std::endl;
	std::cout << ">YES\t\t\t >NO" << std::endl;

	std::getline(std::cin, command);
	if ( command == "YES" || command == "yes" || command == "y" || command == "Y")
		return 1;
	return 0;
}

void	easyVector()
{
	std::vector<int> tmp;
	std::string data;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "enter intenger: \n";
		std::getline(std::cin, data);
		tmp.push_back(atoi(data.c_str()));
	}
	std::cout << "that we seek?\n";
	std::getline(std::cin, data);
	int num = atoi(data.c_str());
	std::vector<int>::iterator vec = easyfind(tmp, num);
	if ( vec != tmp.end())
    	std::cout << "Search " << num << ": "<< *vec << std::endl;
	else
		std::cout << num << " not found.\n";

	
	std::cout << "---------------" << std::endl;
}

void	easyList()
{
	std::list<int> tmp;

	std::string data;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "enter intenger: \n";
		std::getline(std::cin, data);
		tmp.push_back(atoi(data.c_str()));
	}
	std::cout << "that we seek?\n";
	std::getline(std::cin, data);
	int num = atoi(data.c_str());
	
	std::list<int>::iterator list = easyfind(tmp, num);
	if ( list != tmp.end())
    	std::cout << "Search " << num << ": "<< *list << std::endl;
	else
		std::cout << num << " not found.\n";

	
	std::cout << "---------------" << std::endl;
}

int		main()
{
	std::string command;
	while (true)
	{
		std::cout << "<select data type>" << std::endl;
		std::cout << "> 1. vettor" << std::endl; //ok
		std::cout << "> 2. list" << std::endl; //ok
		
		std::getline(std::cin, command);
		
		if (command == "1")
			easyVector();
		else if (command == "2")
			easyList();
		else
			if (wantExit())
				break;	
	}
}