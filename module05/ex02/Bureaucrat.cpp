/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:22 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 11:23:57 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat( std::string name, int grade ) :		m_name(name), m_grade(grade)
{
	if (m_grade > LOWEST_POSSIBLE)
		throw Bureaucrat::GradeTooLowException();
	else if (m_grade < HIGHEST_POSSIBLE)
		throw Bureaucrat::GradeTooHighException();
	else
		std::cout << "<" << m_name  << "[" << m_grade<< "]" << " say>: \"I was born and ready to go to the office!\"" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy ) :			m_name(copy.m_name), m_grade(copy.m_grade)
{
	if (m_grade > LOWEST_POSSIBLE)
		throw Bureaucrat::GradeTooLowException();
	else if (m_grade < HIGHEST_POSSIBLE)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat( )
{
	std::cout << "<bureaucrat " << m_name  << "[" << m_grade<< "]" << " is filled up with a bunch of papers>: NOOOOOOOOOOO!" <<std::endl;
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const &value )
{
	if (&value != this)
		m_grade = value.m_grade;
	return *this;
}

const char*	Bureaucrat::GradeTooHighException::what( ) const throw()
{
	return "Bureaucrat's exception: Oh, no! Grade too high!";
}

const char*	Bureaucrat::GradeTooLowException::what( ) const throw()
{
	return "Bureaucrat's exception: Oh, no! Grade too low!";
}

std::string				Bureaucrat::getName() const
{
	return m_name;
}

int						Bureaucrat::getGrade() const
{
	return m_grade;
}

void					Bureaucrat::incrementGrade()
{
	if ((m_grade - 1) > LOWEST_POSSIBLE)	
		throw Bureaucrat::GradeTooLowException();
	else
		m_grade++;
	std::cout << "\t\t\t\t<" << getName()  << "[" << getGrade() << "]" << std::endl;
}

void					Bureaucrat::incrementGrade( int val )
{
	if ((m_grade + val) > LOWEST_POSSIBLE)
		throw Bureaucrat::GradeTooLowException();
	else if ((m_grade + val) < HIGHEST_POSSIBLE)
		throw Bureaucrat::GradeTooHighException();
	else
		m_grade += val;
	std::cout << "\t\t\t\t<" << getName()  << "[" << getGrade() << "]" << std::endl;
}

void					Bureaucrat::decrementGrade()
{
	if ((m_grade - 1) < HIGHEST_POSSIBLE)
		throw Bureaucrat::GradeTooHighException();
	else
		m_grade--;
	std::cout << "\t\t\t\t<" << getName()  << "[" << getGrade() << "]" << std::endl;
}

void					Bureaucrat::decrementGrade( int val )
{
	m_grade -= val;
	if (m_grade > LOWEST_POSSIBLE)
	{
		m_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	else if (m_grade < HIGHEST_POSSIBLE)
	{
		m_grade = 0;
		throw Bureaucrat::GradeTooHighException();
	}
	std::cout << "\t\t\t\t<" << getName()  << "[" << getGrade() << "]" << std::endl;
}

void 					Bureaucrat::singForm( Form const &f )
{
	if (f.getSigned() == true)  
	{
		std::cout << "*peak-peak*" << std::endl << getName() <<
		" signs " << f.getDoc() << std::endl;
	}
	else
	{
		if (getGrade() > IMPOSSIBLE)
		{
			std::cout << "*frrrrrrr*" << std::endl << f.getDoc() <<
			" was flared!\n Gtade " << m_name << " too low :(" << std::endl;
		}
		else
			std::cout << getName() << "looks at the " << f.getDoc() << 
			" and does not know what to do with it" << std::endl;
	}
}


std::ostream			&operator<<( std::ostream &out, Bureaucrat const &b )
{
	out << "<" << b.getName()  << "[" << b.getGrade() << "] is quite rustling with papers>\n";
	return out;
}