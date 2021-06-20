/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/20 15:32:31 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


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

int		main()
{
	char		arrayChar[] = "char";
	int			arrayInt[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	std::string	arrayString[] = {"one", "TWO", "THRee"};
	double		arrayDouble[] { 1.3939, 244.00, -53.0000009, 4665.75, +5545.887, 6.000007, -7989898.0, 8.76, 9.9, 0.0};
	float		arrayFloat[] { 1.39f, 244.00f, -53.09f, 4665.7f, +5545.8f, 6.007f, -7989898.0f, 8.76f, 9.9f, 0.0f};

	std::string command;
	while (true)
	{
		std::cout << "<select data type>" << std::endl;
		std::cout << "> 1. int" << std::endl; //ok
		std::cout << "> 2. float" << std::endl;
		std::cout << "> 3. double" << std::endl;
		std::cout << "> 4. char" << std::endl; //ok
		std::cout << "> 5. string" << std::endl; //ok
		
		std::getline(std::cin, command);
		
		if (command == "1")
			iter(&arrayInt, (sizeof(arrayInt) / sizeof(int)), printAdress);
		else if (command == "2")
			iter(&arrayFloat, (sizeof(arrayFloat) / sizeof(float)), printAdress);
		else if (command == "3")
			iter(&arrayDouble, (sizeof(arrayDouble) / sizeof(double)), printAdress);
		else if (command == "4")
			iter(&arrayChar, 5, printAdress);
		else if (command == "5")
			iter(&arrayString, 3, printAdress);	
		else
			if (wantExit())
				break;	
	}
}