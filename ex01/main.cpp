/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:21:42 by sgath             #+#    #+#             */
/*   Updated: 2021/04/29 21:28:36 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int
	main(void)
{
	std::string command;
	StorePhonebook user_phonebook;

	user_phonebook.greeting_title();
	while (1)
	{
		user_phonebook.choice_comand();
		std::getline(std::cin, command);
		if (command == "ADD")
			user_phonebook.add_contact();
		else if (command == "SEARCH")
			user_phonebook.search_contact();
		else if (command == "EXIT")
			user_phonebook.exit_phonebook();
		else if (command != "\n"){
			std::cout << "=============================================" << std::endl;
			std::cout << "unknown command please try again ｡ﾟ･(>﹏<)･ﾟ｡" << std::endl;
		}
	}
}