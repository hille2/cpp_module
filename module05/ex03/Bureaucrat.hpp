/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:20 by sgath             #+#    #+#             */
/*   Updated: 2021/06/10 16:44:12 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT_HPP
#define BUREACRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

enum	Burea
{
	HIGHEST_POSSIBLE = 1,
	LOWEST_POSSIBLE = 150,	
};

class Bureaucrat
{
private:
	const std::string		m_name;
	int						m_grade;
	Bureaucrat();

public:
	Bureaucrat( const std::string name, const int grade );
	Bureaucrat( Bureaucrat const &copy );
	virtual					~Bureaucrat( );
	Bureaucrat				&operator=( Bureaucrat const &value );

	class					 GradeTooHighException : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
	class					GradeTooLowException : public std::exception
	{
		virtual const char*	what( ) const throw();
	};

	std::string				getName( ) const;
	int						getGrade( ) const;
	void					incrementGrade( );
	void					incrementGrade( int val );
	void					decrementGrade( );
	void					decrementGrade( int val );
	void					signForm(Form const &f);
	void					executeForm(Form const & form);

};

std::ostream					&operator<<( std::ostream &out, Bureaucrat const &b );

#endif