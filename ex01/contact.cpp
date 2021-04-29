/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:26:20 by sgath             #+#    #+#             */
/*   Updated: 2021/04/29 23:43:54 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


Contact::Contact(){
	this->index = 0;
	for (int i = 0; i <= 11; i++)
		this->data_phonebook[i] = std::string();
}

void	Contact::add_new_contact(void){
	std::cout << "first_name: ";
	std::getline(std::cin, data_phonebook[0]);
	while (data_phonebook[0].length() == 0){
		std::cout << "this line cannot be empty" << std::endl << 
		"Please enter data  ᕦ(ò_óˇ)ᕤ" << std::endl;
		std::cout << "first_name: ";
		std::getline(std::cin, data_phonebook[0]);
	}
	std::cout << "last_name: ";
	std::getline(std::cin, data_phonebook[1]);
	std::cout << "nickname: ";
	std::getline(std::cin, data_phonebook[2]);
	std::cout << "login: ";
	std::getline(std::cin, data_phonebook[3]);
	std::cout << "postal_address: ";
	std::getline(std::cin, data_phonebook[4]);
	std::cout << "email_address: ";
	std::getline(std::cin, data_phonebook[5]);
	while (data_phonebook[5].length() == 0){
		std::cout << "this line cannot be empty" << std::endl << 
		"Please enter data  ᕦ(ò_óˇ)ᕤ" << std::endl;
		std::cout << "email_address: ";
		std::getline(std::cin, data_phonebook[5]);
	}
	std::cout << "phone_number: ";
	std::getline(std::cin, data_phonebook[6]);
	std::cout << "birthday_date: ";
	std::getline(std::cin, data_phonebook[7]);
	std::cout << "favorite_meal: ";
	std::getline(std::cin, data_phonebook[8]);
	std::cout << "underwear_color: ";
	std::getline(std::cin, data_phonebook[9]);
	std::cout << "darkest_secret: ";
	std::getline(std::cin, data_phonebook[10]);
	while (data_phonebook[10].length() == 0){
		std::cout << "i want to know your dirty secrets ( ͡° ͜ʖ ͡°)" << std::endl;
		std::cout << "darkest_secret: ";
		std::getline(std::cin, data_phonebook[10]);
	}
	std::cout << "new Contactsaved (⌐■_■)" << std::endl;
}

static void	print_format(std::string data)
{
	int i;
	for (i = 0; i < 9; i++)
	{
		if (data[i])
			std::cout << data[i];
		else
			std::cout << " ";
	}
	(data[i]) ? std::cout << "." : std::cout << " ";
	std::cout << "|";
}

void	Contact::print_index(){
	//std::cout << i << std::endl;
	std::cout << "first_name: " << data_phonebook[0] <<std::endl;
	std::cout << "last_name: " << data_phonebook[1] <<std::endl;
	std::cout << "nickname: " << data_phonebook[2] <<std::endl;
	std::cout << "login: " << data_phonebook[3] <<std::endl;
	std::cout << "postal_address: " << data_phonebook[4] <<std::endl;
	std::cout << "email_address: " << data_phonebook[5] <<std::endl;
	std::cout << "phone_number: " << data_phonebook[6] <<std::endl;
	std::cout << "birthday_date: " << data_phonebook[7] <<std::endl;
	std::cout << "favorite_meal: " << data_phonebook[8] <<std::endl;
	std::cout << "underwear_color: " << data_phonebook[9] <<std::endl;
	std::cout << "darkest_secret: " << data_phonebook[10] <<std::endl;
}

int	details_contact(){
	std::string next;
	while (1)
	{
		std::cout << "to see the contact in more detail, select the index" << std::endl;
		std::cout << "or enter a 'SKIP' to continue working" << std::endl;
		std::getline(std::cin, next);
		if (next == "SKIP")
			return(-1);
		if (!next[1] && next[0] >= '0' && next[0] <= '8')
			return((int)next[0]);
		std::cout << "unknown command please try again ｡ﾟ･(>﹏<)･ﾟ｡" << std::endl;
		std::cout << "=============================================" << std::endl;
	}
}

void	Contact::search_contact(int i){
	this->index = i;
	std::cout <<"|" << index << "         |";
	print_format(data_phonebook[0]);
	print_format(data_phonebook[1]);
	print_format(data_phonebook[2]);
	std::cout <<std::endl;
}