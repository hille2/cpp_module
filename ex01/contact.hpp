/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 21:22:11 by sgath             #+#    #+#             */
/*   Updated: 2021/04/29 22:07:09 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <string>

class Contact{
	public:
			explicit Contact();
			~Contact()
			{}

			void add_new_contact();
			void search_contact(int i);
			void print_index(int i);
			void details_contact();
			
	private:
			std::string	data_phonebook[11];
			int			index;
};

#endif