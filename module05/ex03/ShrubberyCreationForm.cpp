/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:36:54 by sgath             #+#    #+#             */
/*   Updated: 2021/06/10 12:25:19 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

std::string const		ShrubberyCreationForm::m_tree[] =
{
	"                                                         .",
	"                                              .         ;  ",
	"                 .              .              ;%     ;;   ",
	"                   ,           ,                :;%  %;   ",
	"                    :         ;                   :;%;'     .,   ",
	"           ,.        %;     %;            ;        %;'    ,;",
	"             ;       ;%;  %%;        ,     %;    ;%;    ,%'",
	"              %;       %;%;      ,  ;       %;  ;%;   ,%;' ",
	"               ;%;      %;        ;%;        % ;%;  ,%;'",
	"                `%;.     ;%;     %;'         `;%%;.%;'",
	"                 `:;%.    ;%%. %@;        %; ;@%;%'",
	"                    `:%;.  :;bd%;          %;@%;'",
	"                      `@%:.  :;%.         ;@@%;'   ",
	"                        `@%.  `;@%.      ;@@%;         ",
	"                          `@%%. `@%%    ;@@%;        ",
	"                            ;@%. :@%%  %@@%;       ",
	"                              %@bd%%%bd%%:;     ",
	"                                #@%%%%%:;;",
	"                                %@@%%%::;",
	"                                %@@@%(o);  . '         ",
	"                                %@@@o%;:(.,'         ",
	"                            `.. %@@@o%::;         ",
	"                               `)@@@o%::;         ",
	"                                %@@(o)::;        ",
	"                               .%@@@@%::;         ",
	"                               ;%@@@@%::;.          ",
	"                              ;%@@@@%%:;;;. ",
	"                          ...;%@@@@@%%:;;;;,..   ",
};
//check this: https://ascii.co.uk/art/tree

ShrubberyCreationForm::ShrubberyCreationForm( std::string const &target ) :
																Form("DOC", m_gradeSign, m_gradeExecute),
																m_target(target)
																		
{}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &copy ) : 
																Form(copy),
																m_target(copy.m_target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm( )
{}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const &value )
{
	if (&value != this)
		m_target = value.m_target;	
	return *this;
}

const char*				ShrubberyCreationForm::CanNotOpenException::what( ) const throw()
{
	return "Shrubbery form's exception: file can't be open!";
}

std::string				ShrubberyCreationForm::getDoc( ) const
{
	return m_target;	
}

void					ShrubberyCreationForm::writeAsciiTrees( )
{
	std::ofstream	file(m_target + "_shrubbery", std::ios::out | std::ios::trunc);
	if (!file.is_open() || file.bad())
		throw ShrubberyCreationForm::CanNotOpenException();
	m_signed = 1;
	int countTree = sizeof(m_tree) / sizeof(m_tree[0]);
	int num = rand() % 4;
	for (int j = 0; j < num; j++)
	{
		for (int i = 0; i < countTree; i++)
			file << m_tree[i] << std::endl;
	}
}

void					ShrubberyCreationForm::execute( Bureaucrat const &ex )
{
	static int sing = 0;

	if (sing == 1)
		throw Form::ReSignedException();
	Form::execute(ex);
	writeAsciiTrees();
	sing = 1;
}

std::ostream			&operator<<( std::ostream &out, ShrubberyCreationForm const &val )
{
	out << "\033[1;33m" << val.getDoc() << "[" << (val.getSigned() ? "SIGNET" : "UNSIGNED") << "]\033[0m" << std::endl <<
	"<Sign: " << val.getGrSign() << ">" <<  std::endl <<
	"<Execute: " << val.getGrExecute() << ">" << std::endl;
	return out;
}