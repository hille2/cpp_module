/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:31:04 by sgath             #+#    #+#             */
/*   Updated: 2021/06/10 18:41:03 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "<you see the intern, but you don't remember his name at all.\nMaybe his name is Bob? Never mind>" << std::endl;
}

Intern::Intern( Intern const &copy )
{
	(void)copy;
}

Intern::~Intern( )
{
	std::cout << "<The intern is hiding under the table, \nI hope we never see him again>" <<std::endl;
}

Intern		&Intern::operator=( Intern const &value )
{
	(void)value;
	return *this;
}

Form					*createShrubberyCreationForm( std::string const &target );
Form					*createPresidentialPardonForm( std::string const &target );
Form					*createRobotomyRequestForm( std::string const &target );

const Intern::forme Intern::massFun[] =
{
	{.s="ShrubberyCreationForm", .f=createShrubberyCreationForm},
	{.s="PresidentialPardonForm", .f=createPresidentialPardonForm},
	{.s="RobotomyRequestForm", .f=createRobotomyRequestForm},
		
};

const char*				Intern::NonExistentFormException::what( ) const throw()
{
	return "Intern's form's exception: non-existent form!";
}

Form		*Intern::makeForm( std::string const &form, std::string const &target ) 

{
	for ( int i = 0; i < sizeof(massFun); i++)
		if (form == massFun[i].s)
			return massFun[i].f(target);
	throw NonExistentFormException();
}

Form	*createShrubberyCreationForm( std::string const &target )
{
	return new ShrubberyCreationForm(target);
}

Form	*createPresidentialPardonForm( std::string const &target )
{
	return new PresidentialPardonForm(target);
}

Form	*createRobotomyRequestForm( std::string const &target )
{
	return new RobotomyRequestForm(target);
}