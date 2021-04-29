/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methods_phonebook.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:38:15 by sgath             #+#    #+#             */
/*   Updated: 2021/04/29 21:28:22 by sgath            ###   ########.fr       */
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
	std::cout << "=============================================" << std::endl;
	std::cout << "|  index   |first name|last  name| nickname |" << std::endl;
	std::cout << "=============================================" << std::endl;
	for (int i = 0; i < count; i++)
		new_contact[i].search_contact(i);
	std::cout <<std::endl;
}

void	StorePhonebook::exit_phonebook(void){
	std::cout << "=============================================" << std::endl;
	std::cout << "see u late ≧(◕ ‿‿ ◕)≦✿" << std::endl;
	std::cout << "=============================================" << std::endl;
	exit(0);
}