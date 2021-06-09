/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:42:49 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 16:37:56 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form( std::string doc, int sign, int execute ) :	m_impotantDoc(doc),
														m_gradeSign(sign), 
														m_gradeExecute(execute),
														m_signed(0)
{
	std::cout << "\033[1;30m<the printer does:> *bzhzhzhzhzh*\033[0m" << std::endl;
}

Form::Form( Form const &copy ) :						m_impotantDoc(copy.m_impotantDoc),
														m_gradeSign(copy.m_gradeSign),
														m_gradeExecute(copy.m_gradeExecute),
														m_signed(copy.m_signed)
{
	std::cout << "\033[1;30m<the printer make copy:> *bzzzzzzzz*\033[0m" << std::endl;
}

Form::~Form( )
{
	std::cout << "\033[1;30m<shredder does:> *brrrrr*\033[0m" << std::endl;
}

Form		&Form::operator=( Form const &value )
{
	if (&value != this)
		m_signed = value.m_signed;
	return (*this);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Form's exception: Form was't signed! Grade too high";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Form's exception: Form was't signed! Grade too low";
}

std::string			Form::getDoc() const
{
	return m_impotantDoc;	
}

int					Form::getGrSign() const
{
	return m_gradeSign;	
}

int					Form::getGrExecute() const
{
	return m_gradeExecute;	
}

bool				Form::getSigned() const
{
	return m_signed;	
}

void				Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() < POSSIBLE )
	{
		m_signed = 1;
		throw Form::GradeTooHighException();
	}
	else if (b.getGrade() > IMPOSSIBLE )
		throw Form::GradeTooLowException();
}

void				Form::execute( Bureaucrat const &ex)
{
	if (ex.getGrade() < m_gradeExecute)
		throw Form::GradeTooLowException();
	if (ex.getGrade() > m_gradeExecute)
		throw Form::GradeTooHighException();
}

std::ostream			&operator<<( std::ostream &out, Form const &f )
{
	out << f.getDoc() << "[" << (f.getSigned() ? "SIGNET" : "UNSIGNED") << "]" << std::endl <<
	"<Sign: " << f.getGrSign() << ">" <<  std::endl <<
	"<Execute: " << f.getGrExecute() << ">" << std::endl;
	return out;
}
