/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:38:15 by sgath             #+#    #+#             */
/*   Updated: 2021/04/30 21:07:10 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


void	StorePhonebook::greetingTitle(void)
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

void	StorePhonebook::choiceComand(void){
	std::cout << "=============================================" << std::endl;
	std::cout << "\tplease use these commands:" << std::endl;
	std::cout << "◘ ADD\t" <<  "◘ SEARCH\t" << "◘ EXIT" << std:: endl;
	std::cout << "=============================================" << std::endl;
	std::cout << "> ";
}

void	StorePhonebook::addContact(void){
	if (this->count_ == 8)
	{
		std::cout << "=============================================" << std::endl;
		std::cout << "phone book is full <(￣ ﹌ ￣)>" << std::endl;
	}
	else
	{
		newContact[count_].addNewContact();
		this->count_++;
	}
}

void	StorePhonebook::searchContact(void){
	int i = -1;
	std::cout << "=============================================" << std::endl;
	std::cout << "|  index   |first name|last  name| nickname |" << std::endl;
	std::cout << "=============================================" << std::endl;
	while (++i < count_)
		newContact[i].searchContact(i);
	if (i != 0)
	{
		int j = detailsContact(count_);
		std::cout << "=============================================" << std::endl;
		if (j != -1)
			newContact[j].printindex_();
	}
	else
		std::cout << std::endl;
}

void	StorePhonebook::exitPhonebook(void){
	std::cout << "=============================================" << std::endl;
	std::cout << "see u late ≧(◕ ‿‿ ◕)≦✿" << std::endl;
	std::cout << "=============================================" << std::endl;
	exit(0);
}