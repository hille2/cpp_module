/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:33:28 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 16:22:17 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "PresidentialPardonForm.hpp"

std::string const	PresidentialPardonForm::m_pardon =
	"╔═══╗╔═══╗╔════╗╔═╗─╔╗     ╔═══╗╔═══╗╔═╗─╔╗╔══╗╔═══╗\n"
	"╚╗╔╗║║╔═╗║║╔╗╔╗║║║╚╗║║     ║╔═╗║║╔═╗║║║╚╗║║╚╣─╝║╔═╗║\n"
	"─║║║║║║─║║╚╝║║╚╝║╔╗╚╝║     ║╚═╝║║║─║║║╔╗╚╝║─║║─║║─╚╝\n"
	"─║║║║║║─║║──║║──║║╚╗║║     ║╔══╝║╚═╝║║║╚╗║║─║║─║║─╔╗\n"
	"╔╝╚╝║║╚═╝║──║║──║║─║║║     ║║───║╔═╗║║║─║║║╔╣─╗║╚═╝║\n"
	"╚═══╝╚═══╝──╚╝──╚╝─╚═╝     ╚╝───╚╝─╚╝╚╝─╚═╝╚══╝╚═══╝\n";


PresidentialPardonForm::PresidentialPardonForm( std::string const &target ) :
																Form("President", m_gradeSign, m_gradeExecute),
																m_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &copy ) : 
																Form(copy),
																m_target(copy.m_target)
{}

PresidentialPardonForm::~PresidentialPardonForm( )
{}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &value )
{
	if (&value != this)
		m_target = value.m_target;	
	return *this;
}

const char*				PresidentialPardonForm::CanNotOpenException::what( ) const throw()
{
	return "Presidentia form's exception: file can't be open!";
}

std::string				PresidentialPardonForm::getDoc( ) const
{
	return m_target;	
}

void PresidentialPardonForm::pardonedbyZafodBeeblebrox()
{
	std::ofstream	file(m_target.append("_shrubbery"), std::ios::out | std::ios::trunc);
	if (!file.is_open() || file.bad())
		throw PresidentialPardonForm::CanNotOpenException();
	Form::m_signed = 1;
	int num = rand() % 4 + 1;
	std::cout << "<Zafod Beeblebrox apologizes and flies off to the party>" << std::endl;
	for (int j = 0; j < num; j++)
	{
			file << m_pardon << std::endl;
	}
}

void					PresidentialPardonForm::execute( Bureaucrat const &ex )
{
	Form::execute(ex);
	pardonedbyZafodBeeblebrox();
}

std::ostream			&operator<<( std::ostream &out, PresidentialPardonForm const &val )
{
	out << "\033[1;33m" << val.getDoc() << "[" << (val.getSigned() ? "SIGNET" : "UNSIGNED") << "]\033[0m" << std::endl <<
	"<Sign: " << val.getGrSign() << ">" <<  std::endl <<
	"<Execute: " << val.getGrExecute() << ">" << std::endl;
	return out;
}