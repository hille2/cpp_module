/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:38:15 by sgath             #+#    #+#             */
/*   Updated: 2021/04/29 23:46:49 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


void	StorePhonebook::greeting_title(void)
{
	char *name = getenv("LOGNAME");
	std::cout << "▒▐█▀█░▐█░▐█▐█▀▀█▌██▄░▒█▌▐█▀▀▐█▀▄─▐█▀▀█▌▐█▀▀█▌▐█▒▐▀" << std::endl;
	std::cout << "▒▐█▄█░▐████▐█▄▒█▌▐█▒█▒█░▐█▀▀▐█▀▀▄▐█▄▒█▌▐█▄▒█▌▐██▌░" << std::endl;
	std::cout << "▒▐█░░░▐█░▐█▐██▄█▌██░▒██▌▐█▄▄▐█▄▄▀▐██▄█▌▐██▄█▌▐█▒▐▄" << std::endl;
	std::cout << "✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿" << std::endl;
	std::cout << "(´｡• ᵕ •｡) ♡ \tHello " << name <<  " ❤❤❤" << std::endl;
	std::cout << "☆☆☆   Welcome to your awesome PHONEBOOK   ☆☆☆" << std::endl;
	std::cout << "✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿✿" << std::endl;
}

void	StorePhonebook::choice_comand(void){
	std::cout << "=============================================" << std::endl;
	std::cout << "\tplease use these commands:" << std::endl;
	std::cout << "◘ ADD\t" <<  "◘ SEARCH\t" << "◘ EXIT" << std:: endl;
	std::cout << "=============================================" << std::endl;
	std::cout << "> ";
}

void	StorePhonebook::add_contact(void){
	if (this->count == 8)
	{
		std::cout << "=============================================" << std::endl;
		std::cout << "phone book is full <(￣ ﹌ ￣)>" << std::endl;
	}
	else
	{
		new_contact[count].add_new_contact();
		this->count++;
	}
}

void	StorePhonebook::search_contact(void){
	int i = -1;
	std::cout << "=============================================" << std::endl;
	std::cout << "|  index   |first name|last  name| nickname |" << std::endl;
	std::cout << "=============================================" << std::endl;
	while (++i < count)
		new_contact[i].search_contact(i);
//	if (i != 0)
//	{
		//i = details_contact();
		//new_contact[i].print_index();
//	}
	std::cout <<std::endl;
}

void	StorePhonebook::exit_phonebook(void){
	std::cout << "=============================================" << std::endl;
	std::cout << "see u late ≧(◕ ‿‿ ◕)≦✿" << std::endl;
	std::cout << "=============================================" << std::endl;
	exit(0);
}