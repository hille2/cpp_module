/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:16:42 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 10:06:29 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

enum FormShmorm
{
	POSSIBLE = 42,
	IMPOSSIBLE = 121,
};

class Form
{
private:
	const std::string	m_impotantDoc;
	const int			m_gradeSign;
	const int			m_gradeExecute;
	bool				m_signed;
	
	Form( );

public:
	Form( std::string doc, int sign, int execute );
	Form( Form const &copy );
	~Form( );
	Form				&operator=( Form const &value );

	class					 GradeTooHighException : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
	class					GradeTooLowException : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
	std::string			getDoc( ) const;
	int					getGrSign() const;
	int					getGrExecute( ) const;
	bool				getSigned( ) const;
	void				beSigned(Bureaucrat const &b);
	
};

std::ostream			&operator<<( std::ostream &out, Form const &f );

#endif