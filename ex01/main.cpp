/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:21:42 by sgath             #+#    #+#             */
/*   Updated: 2021/04/30 19:05:47 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int
	main(void)
{
	std::string command;
	StorePhonebook user_phonebook;

	user_phonebook.greetingTitle();
	while (1)
	{
		user_phonebook.choiceComand();
		std::getline(std::cin, command);
		if (command == "ADD")
			user_phonebook.addContact();
		else if (command == "SEARCH")
			user_phonebook.searchContact();
		else if (command == "EXIT")
			user_phonebook.exitPhonebook();
		else if (command != "\n"){
			std::cout << "=============================================" << std::endl;
			std::cout << "unknown command please try again ｡ﾟ･(>﹏<)･ﾟ｡" << std::endl;
		}
	}
}