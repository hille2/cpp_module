/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:00:24 by sgath             #+#    #+#             */
/*   Updated: 2021/06/10 18:40:28 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{

	struct forme {
		const char * s;
		Form*	(*f)(const std::string & );
	};

	static const forme massFun[];
	
private:
	
public:
	Intern();
	Intern( Intern const &copy);
	virtual					~Intern();
	Intern					&operator=( Intern const &value);

	class					NonExistentFormException : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	

	Form					*makeForm( std::string const &form, std::string const &target );
};

#endif
