/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:16:42 by sgath             #+#    #+#             */
/*   Updated: 2021/06/10 16:56:14 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

enum FormShmorm
{
	POSSIBLE = 62,
};

class Bureaucrat;

class Form
{
private:
	const std::string		m_impotantDoc;
	const int				m_gradeSign;
	const int				m_gradeExecute;
	
	Form( );

protected:
	bool					m_signed;

public:
	Form( std::string doc, int sign, int execute );
	Form( Form const &copy );
	virtual					~Form( );
	Form					&operator=( Form const &value );

	class				 	GradeTooHighException : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
	class					GradeTooLowException : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
	class					CanNotOpenException : public std::exception
	{
		virtual const char*	what( ) const throw() = 0;
	};
	
	class					ReSignedException : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
	class					NoSignedException : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
	virtual std::string		getDoc( ) const;
	int						getGrSign() const;
	int						getGrExecute( ) const;
	bool					getSigned( ) const;
	void					beSigned( Bureaucrat const &b );
	virtual void			execute( Bureaucrat const &ex );
	
};

std::ostream				&operator<<( std::ostream &out, Form const &f );

#endif