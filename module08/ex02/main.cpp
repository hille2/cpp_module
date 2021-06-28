/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/28 13:22:59 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::string command;
	srand(static_cast<unsigned int>(time(0)));
	std::cout << "<choose a method:>\n";
	while (true)
	{
		std::cout << "> 1. push\t\t" << "> 2. top\n" << "> 3. size \t\t" << "> 4. pop\n";
		std::cout << "> 5. stack\t\t" << "> 6. copy stack\n";
		
		std::getline(std::cin, command);
		if (command == "1")
		{
			int num = rand() % MAX_INT8;
			std::cout << "push : " << num << std::endl;
			mstack.push(num);
		}
		else if (command == "2")
		{
			if (mstack.size() == 0)
			{
				std::cout << "stack empty!\n";
				continue;
			}	
			std::cout <<"top : " << mstack.top() << std::endl;
		}
		else if (command == "3")
			std::cout << "size : " <<  mstack.size() << std::endl;
		else if (command == "4")
		{
			std::cout << "pop!\n ";
			mstack.pop();
		}
		else if (command == "5")
		{
			if (mstack.size() == 0)
			{
				std::cout << "stack empty!\n";
				continue;
			}
			MutantStack<int>::iterator it = mstack.begin();
			MutantStack<int>::iterator ite = mstack.end();

			std::cout << "stack : ";
			while (it != ite)
			{
				std::cout << *it << " ";
				++it;
			}
			std::cout << "\n";
		}
		else if (command == "6")
		{
			std::cout << "copy\n";
			std::stack<int> s(mstack);
		}
		else
		{
				std::cout << "<Do u want exit?>" << std::endl;
				std::cout << "> YES\t\t\t> NO" << std::endl;
				std::getline(std::cin, command);
				if ( command == "YES" || command == "yes" || command == "y" || command == "Y")
					break;
		}
	}
}