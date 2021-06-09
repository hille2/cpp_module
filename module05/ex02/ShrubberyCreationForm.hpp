/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:33:36 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 16:18:45 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm :	public virtual Form
{
private:
	static const int			m_gradeSign = 145;
	static const int			m_gradeExecute = 137;
	std::string					m_target;
	static const std::string	m_tree[];

	ShrubberyCreationForm( );

public:
	ShrubberyCreationForm( std::string const &target );
	ShrubberyCreationForm( ShrubberyCreationForm const &copy );
	virtual						~ShrubberyCreationForm();
	ShrubberyCreationForm		&operator=( ShrubberyCreationForm const &value );

	class						CanNotOpenException : public std::exception
	{
		virtual const char*		what( ) const throw();
	};

	virtual std::string			getDoc( ) const;
	void						writeAsciiTrees();
	void						execute( Bureaucrat const &ex );

};

std::ostream			&operator<<( std::ostream &out, ShrubberyCreationForm const &val );

#endif