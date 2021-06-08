/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:22 by sgath             #+#    #+#             */
/*   Updated: 2021/06/08 17:50:43 by sgath            ###   ########.fr       */
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
	m_grade++;
	if (m_grade > LOWEST_POSSIBLE)
		throw Bureaucrat::GradeTooLowException();
}

void					Bureaucrat::incrementGrade( int val )
{
	m_grade += val;
	if (m_grade > LOWEST_POSSIBLE)
		throw Bureaucrat::GradeTooLowException();
	else if (m_grade < HIGHEST_POSSIBLE)
		throw Bureaucrat::GradeTooHighException();
}

void					Bureaucrat::decrementGrade()
{
	m_grade--;
	if (m_grade < HIGHEST_POSSIBLE)
		throw Bureaucrat::GradeTooHighException();
}

void					Bureaucrat::decrementGrade( int val )
{
	m_grade -= val;
	if (m_grade > LOWEST_POSSIBLE)
		throw Bureaucrat::GradeTooLowException();
	else if (m_grade < HIGHEST_POSSIBLE)
		throw Bureaucrat::GradeTooHighException();
}


std::ostream			&operator<<( std::ostream &out, Bureaucrat const &b )
{
	out << "<" << b.getName()  << "[" << b.getGrade() << "] is quite rustling with papers>\n";
	return out;
}