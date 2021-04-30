/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:26:20 by sgath             #+#    #+#             */
/*   Updated: 2021/04/30 19:27:31 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


Contact::Contact(){
	this->index_ = 0;
	for (int i = 0; i <= 10; i++)
		this->dataPhonebook_[i] = std::string();
}

std::string Contact::dataFields_[11] = {
				"first_name: ",
				"last_name: ",
				"nickname: ",
				"login: ",
				"postal_address: ",
				"email_address: ",
				"phone_number: ",
				"birthday_date: ",
				"favorite_meal: ",
				"underwear_color: ",
				"darkest_secret: "
};

void	Contact::addNewContact(void){

	for (int i = 0; i <= 10; i++){
		std::cout << dataFields_[i];
		std::getline(std::cin, dataPhonebook_[i]);
		if (i == 0 || i == 1|| i == 2){
			while (dataPhonebook_[i].length() == 0){
				std::cout << "this line cannot be empty" << std::endl << 
				"Please enter data  ᕦ(ò_óˇ)ᕤ" << std::endl;
				std::cout << dataFields_[i];
				std::getline(std::cin, dataPhonebook_[i]);
			}
		}
		if (i == 10){
			while (dataPhonebook_[10].length() == 0){
				std::cout << "i want to know your dirty secrets ( ͡° ͜ʖ ͡°)" << std::endl;
				std::cout << "darkest_secret: ";
				std::getline(std::cin, dataPhonebook_[10]);
			}
		}
	}
	std::cout << "new Contactsaved (⌐■_■)" << std::endl;
}

static void	printFormat(std::string data)
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

void	Contact::printindex_(){
	for (int i = 0; i < 11; i++)
	{
		if (dataPhonebook_[i].length() != 0)
			std::cout << dataFields_[i] << dataPhonebook_[i] <<std::endl;
	}
}

int	detailsContact(){
	std::string next;
	while (1)
	{
		std::cout << "to see the contact in more detail, select the index_" << std::endl;
		std::cout << "or enter a 'SKIP' to continue working" << std::endl;
		std::getline(std::cin, next);
		if (next == "SKIP")
			return(-1);
		if (!next[1] && next[0] >= '0' && next[0] <= '8')
			return(next[0] - '0');
		std::cout << "unknown command please try again ｡ﾟ･(>﹏<)･ﾟ｡" << std::endl;
		std::cout << "=============================================" << std::endl;
	}
}

void	Contact::searchContact(int i){
	this->index_ = i;
	std::cout <<"|" << index_ << "         |";
	for (int i = 0; i < 3; i++)
		printFormat(dataPhonebook_[i]);
	std::cout <<std::endl;
}