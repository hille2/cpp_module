/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 21:22:11 by sgath             #+#    #+#             */
/*   Updated: 2021/04/30 19:11:42 by sgath            ###   ########.fr       */
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
			void addNewContact();
			void searchContact(int i);
			void printindex_();
			void detailsContact();
			
	private:
			int			index_;
			std::string	dataPhonebook_[11];
			static std::string dataFields_[11];
};

#endif