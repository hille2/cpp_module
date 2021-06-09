/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:47:29 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 16:23:43 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm :		public virtual Form
{
private:
	static const int			m_gradeSign = 25;
	static const int			m_gradeExecute = 5;
	std::string					m_target;
	static const std::string	m_noises[];

	RobotomyRequestForm( );

public:
	RobotomyRequestForm( std::string const &target );
	RobotomyRequestForm( RobotomyRequestForm const &copy );
	virtual						~RobotomyRequestForm();
	RobotomyRequestForm			&operator=( RobotomyRequestForm const &value );

	class						CanNotOpenException : public std::exception
	{
		virtual const char*		what( ) const throw();
	};

	virtual std::string			getDoc( ) const;
	void						beenRobotomized();

};

#endif