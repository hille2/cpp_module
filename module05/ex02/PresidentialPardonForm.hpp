/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:33:30 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 16:20:43 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm :	public virtual Form
{
private:
	static const int			m_gradeSign = 72;
	static const int			m_gradeExecute = 45;
	std::string					m_target;
	static const std::string	m_pardon;

	PresidentialPardonForm( );

public:
	PresidentialPardonForm( std::string const &target );
	PresidentialPardonForm( PresidentialPardonForm const &copy );
	virtual						~PresidentialPardonForm();
	PresidentialPardonForm		&operator=( PresidentialPardonForm const &value );

	class						CanNotOpenException : public std::exception
	{
		virtual const char*		what( ) const throw();
	};

	virtual std::string			getDoc( ) const;
	void						pardonedbyZafodBeeblebrox();
	void						execute( Bureaucrat const &ex );
	
};

std::ostream					&operator<<( std::ostream &out, PresidentialPardonForm const &val );

#endif