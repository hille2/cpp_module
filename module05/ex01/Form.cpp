/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:42:49 by sgath             #+#    #+#             */
/*   Updated: 2021/06/08 20:41:43 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string doc, int sign, int execute ) :	m_impotantDoc(doc),
														m_gradeSign(sign), 
														m_gradeExecute(execute),
														m_signed(0)
{
	std::cout << "*the printer does bzhzhzhzhzh*" << std::endl;
}

Form::Form( Form const &copy ) :						m_impotantDoc(copy.m_impotantDoc),
														m_gradeSign(copy.m_gradeSign),
														m_gradeExecute(copy.m_gradeExecute),
														m_signed(copy.m_signed)
{}

Form::~Form( )
{
	std::cout << "shredder does brrrrr" << std::endl;
}

Form		&Form::operator=( Form const &value )
{
	if (&value != this)
		m_signed = value.m_signed;
	return (*this);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Form's exception: Form was signed!";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Form's exception: Form was't signed!";
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
	if (b.getGrade() < POSSIBLE)
		throw Form::GradeTooHighException();
	else if (b.getGrade() > IMPOSSIBLE)
		throw Form::GradeTooLowException();
}

std::ostream			&operator<<( std::ostream &out, Form const &f )
{
	out << f.getDoc() << ")[" << ((f.getSigned()) ? "Signed" : "Unsigned") << "]" << std::endl <<
	"<Sign: " << f.getGrSign() << std::endl <<
	"Execute: " << f.getGrExecute() << std::endl;
}
