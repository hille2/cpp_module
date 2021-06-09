/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:18:09 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 15:41:42 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::string const	RobotomyRequestForm::m_noises[] = 
{
	"░░░░░░░░░░░░░░░░░░░░░░\n"
	"░░░░░▀▄█▀███▀█▄▀░░░░░░\n"
	"░░░░░░▀▀▀▀▀▀▀▀▀░░░░░░░\n"
	"░─░─█─█████████─█░─░─░\n"
	"─░─░█░█████████░█─░─░─\n"
	"░░░░░░░▀██▀██▀░░░░░░░░\n",

	"░░░░░░░░░░░░░░░░░░░░░░\n"
	"░░╔══╗╦░░░░░░░░░╔══╗╦░\n"
	"░╔╣▐▐╠╝░╦╔╩╩╗░░╔╣▐▐╠╝░\n"
	"░╩╚╦╦╝░░╚╣▌▌╠╗░╩╚╦╦╝░░\n"
	"░░░╝╚░░░░╚╦╦╝╩░░░╝╚░░░\n"
	"░░░░░░░░░░╝╚░░░░░░░░░░\n",

	"░░░░░░░░░░░░░░░░░░░░░░\n"
	"░░░░░░░▄█▄▄▄█▄░░░░░░░░\n"
	"▄▀░░░░▄▌─▄─▄─▐▄░░░░▀▄░\n"
	"█▄▄█░░▀▌─▀─▀─▐▀░░█▄▄█░\n"
	"░▐▌░░░░▀▀███▀▀░░░░▐▌░░\n"
	"████░▄█████████▄░████░\n",

	"──────────────────────\n"
	"──────▀▄▄▄▄▄▄▄▀───────\n"
	"───────█▀█▀█▀█────────\n"
	"────█▀▄█▄▄▄▄▄█▄▀█─────\n"
	"───────███████────────\n"
	"──────██▀▀▀▀▀██───────\n",

	"──────────────────────\n"
	"─┌┴┴┐──┌┴┴┐──────▄†▄──\n"
	"╔╡▀▀╞╗╚╡██╞╗────▐███▌─\n"
	"─└╥╥┘──└╥╥┘────▐█┼█┼█▌\n"
	"──╝╚────╝╚─────▐█████▌\n",
};

RobotomyRequestForm::RobotomyRequestForm( std::string const &target ) :
																Form("Robot", m_gradeSign, m_gradeExecute),
																m_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &copy ) : 
																Form(copy),
																m_target(copy.m_target)
{}

RobotomyRequestForm::~RobotomyRequestForm( )
{}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &value )
{
	if (&value != this)
		m_target = value.m_target;	
	return *this;
}

const char*				RobotomyRequestForm::CanNotOpenException::what( ) const throw()
{
	return "Robot's form's exception: robotization failed!";
}

std::string				RobotomyRequestForm::getDoc( ) const
{
	return m_target;	
}

void RobotomyRequestForm::beenRobotomized()
{
	int num = rand() % 2;
	if (num == 0)
		throw CanNotOpenException();
	else
	{
		Form::m_signed = 1;
		num = rand() % (sizeof(m_noises) / sizeof(m_noises[0]));
		std::cout << "\033[1;34m<Robotization succeeded>\033[0m\n" << m_noises[num] << std::endl;
	}
		
}

std::ostream			&operator<<( std::ostream &out, RobotomyRequestForm const &val )
{
	out << "\033[1;33m" << val.getDoc() << "[" << (val.getSigned() ? "SIGNET" : "UNSIGNED") << "]\033[0m" << std::endl <<
	"<Sign: " << val.getGrSign() << ">" <<  std::endl <<
	"<Execute: " << val.getGrExecute() << ">" << std::endl;
	return out;
}