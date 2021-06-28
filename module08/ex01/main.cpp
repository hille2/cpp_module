/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/28 13:04:47 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <unistd.h>

int main()
{
	std::string command;
	std::cout << "<enter number:> ";
	std::getline(std::cin, command);
	int num = atoi(command.c_str());
	std::cout << num <<"\n";
	if (num < 0)
		exit(1);
	Span boo(static_cast<unsigned int>(num));
	srand(static_cast<unsigned int>(time(0)));
	
	std::cout << "<1.addNumber>\n";
	std::cout << "<2.superAdd> ";
	std::getline(std::cin, command);
	if (command == "1")
	{
		try
		{
			for (int i = 0; i < num; i++)
			{
				int r = rand() % INT8_MAX;
				std::cout << "<we add: " << r << ">" << std::endl;
				boo.addNumber(r);
				usleep(15);
			}
			//boo.addNumber(10);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	else if (command == "2")
	{
		try
		{
			boo.superAdd(4, 1, 14,65, 66);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	try
	{
		std::cout << "<shortestSpan>: " << boo.shortestSpan() << std::endl;;
		std::cout << "<longestSpan>: " << boo.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}