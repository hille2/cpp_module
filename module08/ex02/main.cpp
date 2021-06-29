/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:15:19 by sgath             #+#    #+#             */
/*   Updated: 2021/06/29 11:40:08 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

bool	checkStack(MutantStack<int> &mstack)
{
	if (mstack.size() == 0)
	{
		std::cout << "stack empty!\n";
		return false;
	}
	return true;
}

void	printStack(MutantStack<int> &mstack)
{
	if (!checkStack(mstack))
		return;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "stack\t: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\n";
}

void	wantExit()
{
	std::string command;
	std::cout << "<Do u want exit?>" << std::endl;
	std::cout << "> YES\t\t\t> NO" << std::endl;
	std::getline(std::cin, command);
	if ( command == "YES" || command == "yes" || command == "y" || command == "Y")
		exit (1);
}

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
			std::cout << "push\t: " << num << std::endl;
			mstack.push(num);
			printStack(mstack);
		}
		else if (command == "2")
		{
			if (!checkStack(mstack))
				continue;
			std::cout <<"top\t: " << mstack.top() << std::endl;
			printStack(mstack);
		}
		else if (command == "3")
		{
			std::cout << "size\t: " <<  mstack.size() << std::endl;
			printStack(mstack);
		}
		else if (command == "4")
		{
			if (!checkStack(mstack))
				continue;
			std::cout << "pop!\n";
			mstack.pop();
			printStack(mstack);
		}
		else if (command == "5")
			printStack(mstack);
		else if (command == "6")
		{
			std::cout << "copy\n";
			std::stack<int> s(mstack);
		}
		else
			wantExit();

	}
}