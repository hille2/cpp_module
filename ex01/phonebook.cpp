/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:21:42 by sgath             #+#    #+#             */
/*   Updated: 2021/04/27 15:11:03 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void
	greeting_title(void)
{
	char *name = getenv("LOGNAME");

	std::cout << "✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿" << std::endl;
	std::cout << "(´｡• ᵕ •｡) ♡ \tHello " << name <<  " ❤❤❤" << std::endl;
	std::cout << "☆☆☆ Welcome to your awesome PHONEBOOK ☆☆☆" << std::endl;
	std::cout << "\tplease use these commands:" << std::endl;
	std::cout << "\t◘ ADD" << std::endl << "\t◘ SEARCH" << std::endl << "\t◘ EXIT" << std:: endl;
	
	std::cout << "✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿" << std::endl;
}

int
	main(void)
{
	char *command;

	greeting_title();
	while (1)
	{
		cin >> command;
		if (command )
			
	}
}