/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/20 13:03:18 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


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

int		choiseFunc()
{
	std::cout << "<select function>" << std::endl;
	std::cout << "> 1. max" << std::endl;
	std::cout << "> 2. min" << std::endl;
	std::cout << "> 3. swap" << std::endl;
	
	std::string command;
	std::getline(std::cin, command);
	

	if (command == "1")
		return 1;
	if (command == "2")
		return 2;
	if (command == "3")
		return 3;
	else
		choiseFunc();
	return 0;
	
}

void	addArg(std::string &arg1, std::string &arg2)
{
	std::cout << "enter arguments: " << std::endl;
	std::getline(std::cin, arg1);
	std::getline(std::cin, arg2);
}

void	forTemp(std::string command, int func)
{
	std::string arg1, arg2;
	if (command != "2" && command != "3")
	{
		addArg(arg1, arg2);
		std::cout << "<your entered:> " << arg1 << " " << arg2 << std::endl;
	}
	
	if (command == "1")
	{
		int a = atoi(arg1.c_str());
		int b = atoi(arg2.c_str());
		if ( func == 1)
			std::cout << "max: " << ::max(a, b) << std::endl;		
		else if ( func == 2)
			std::cout << "mix: " << ::min(a, b) << std::endl;	
		else
		{
			::swap(a, b);
			std::cout << "swap: " << a << " " << b << std::endl;	
		}
	}
	else if ( command == "2")
	{
		float a = 10.1f, b = 22.323f;

		std::cout << "<your entered:> " << a << " " << b << std::endl;
		if ( func == 1)
			std::cout << "max: " << ::max(a, b) << std::endl;		
		else if ( func == 2)
			std::cout << "mix: " << ::min(a, b) << std::endl;	
		else
		{
			::swap(a, b);
			std::cout << "swap: " << a << " " << b << std::endl;	
		}
	}
	else if ( command == "3")
	{
		double a = -199.433, b = 199.49468;

		std::cout << "<your entered:> " << a << " " << b << std::endl;
		if ( func == 1)
			std::cout << "max: " << ::max(a, b) << std::endl;		
		else if ( func == 2)
			std::cout << "mix: " << ::min(a, b) << std::endl;	
		else
		{
			::swap(a, b);
			std::cout << "swap: " << a << " " << b << std::endl;	
		}
	}
	else if ( command == "4")
	{
		char a = arg1[0];
		char b = arg2[0];
		if ( func == 1)
			std::cout << "max: " << ::max(a, b) << std::endl;		
		else if ( func == 2)
			std::cout << "mix: " << ::min(a, b) << std::endl;	
		else
		{
			::swap(a, b);
			std::cout << "swap: " << a << " " << b << std::endl;	
		}
	}
	else if (command == "5")
	{
		if ( func == 1)
			std::cout << "max: " << ::max(arg1, arg2) << std::endl;		
		else if ( func == 2)
			std::cout << "mix: " << ::min(arg1, arg2) << std::endl;	
		else
		{
			::swap(arg1, arg2);
			std::cout << "swap: " << arg1 << " " << arg2 << std::endl;	
		}
	}
	else
	{
		if (wantExit())
				exit(0);	
	}
}

int		main()
{
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
		forTemp(command, choiseFunc());
	}
}
	
