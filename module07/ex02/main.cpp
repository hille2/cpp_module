/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/20 18:36:43 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// bool	wantExit()
// {
// 	std::string command;
// 	std::cout << "<Do u want exit?>" << std::endl;
// 	std::cout << ">YES\t\t\t >NO" << std::endl;

// 	std::getline(std::cin, command);
// 	if ( command == "YES" || command == "yes" || command == "y" || command == "Y")
// 		return 1;
// 	return 0;
// }

// void	arrayInt(int n)
// {
// 	Array<int> tmp(n);

// 	//std::string data;
// 	// for( int i = 0; i < tmp.getLen(); i++)
// 	// {
// 	// 	std::getline(std::cin, data);
// 	// 	tmp.setArray(atoi(data.c_str()), i);
// 	// }

// 	//std::cout << tmp.getArray() << std::endl;
// }

// void	arrayString(int n)
// {
// 	Array<std::string> tmp(n);
// }

// int		main()
// {
// 	std::string command;
// 	while (true)
// 	{
// 		std::cout << "<select data type>" << std::endl;
// 		std::cout << "> 1. int" << std::endl; //ok
// 		std::cout << "> 2. string" << std::endl; //ok
		
// 		std::getline(std::cin, command);

// 		std::string size;
// 		std::cout << "<enter size array:> " << std::endl;
// 		std::getline(std::cin, size);
		
// 		if (command == "1")
// 			arrayInt(atoi(size.c_str()));
// 		else if (command == "2")
// 			arrayString(atoi(size.c_str()));
// 		else
// 			if (wantExit())
// 				break;	
// 	}
// }


int main()
{

	Array<int> tmp;
	return 0;
}