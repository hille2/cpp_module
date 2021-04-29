/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:21:40 by sgath             #+#    #+#             */
/*   Updated: 2021/04/29 22:08:29 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

class StorePhonebook{
	public:
			explicit StorePhonebook() : count(0)
			{}
			~StorePhonebook()
			{}
			void greeting_title();
			void add_contact();
			void search_contact();
			void exit_phonebook();
			void choice_comand();
			//void details_contact();
			//void print_index(int i);
	private:
			Contact	new_contact[8];
			int		count;
};

#endif
