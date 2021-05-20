/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:21:40 by sgath             #+#    #+#             */
/*   Updated: 2021/05/02 15:55:47 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

class Phonebook{
	public:
			explicit Phonebook() : count_(0)
			{}
			~Phonebook()
			{}
			void greetingTitle();
			void addContact();
			void searchContact();
			void exitPhonebook();
			void choiceComand();
	private:
			Contact	newContact[8];
			int		count_;
};

int	detailsContact(int index);

#endif
