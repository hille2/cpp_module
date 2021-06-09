/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:17 by sgath             #+#    #+#             */
/*   Updated: 2021/06/08 20:39:26 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

std::string name[] = {
"\033[1;31mMichael Scott\033[0m",
"\033[1;31mDwight Schrute\033[0m",
"\033[1;31mJim Halpert\033[0m",
"\033[1;31mPam Beasley\033[0m",
"\033[1;31mRyan Howard\033[0m",
"\033[1;31mAndy Bernard\033[0m",
"\033[1;31mRobert California\033[0m",
"\033[1;31mHanibal Lecturer\033[0m",
};

std::string doc[] = {
	"\033[1;30mPlanet Earth lease\033[0m",
	"\033[1;30mPurchase of third legs\033[0m",
	"\033[1;30mRing finger long nail prototype\033[0m",
	"\033[1;30mFree beer project for everyone\033[0m",
	"\033[1;30mThe bill on the creation of a soft Internet with cats\033[0m",
};
	

void raiseGraide(Bureaucrat &worker)
{
	std::string grade;
	try
	{
		std::getline(std::cin, grade);
		(grade == "") ? worker.incrementGrade() : worker.incrementGrade(std::atoi(grade.c_str()));
		std::cout << worker;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << "if u see it, u - stupid\n";
	}	
}

void	lowerGrade(Bureaucrat &worker)
{
	std::string grade;
	try
	{
		std::getline(std::cin, grade);
		(grade == "") ? worker.decrementGrade() : worker.decrementGrade(std::atoi(grade.c_str()));
		std::cout << worker;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << "if u see it, u - stupid\n";
	}
}


void addForm(Bureaucrat &worker, Form &form)
{
	try
	{
		std::cout << form;
		form.beSigned(worker);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	worker.singForm(form);
	
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int num = rand() % (sizeof(name) / sizeof(name[0]));
	std::cout << "you see " << name[num] << std::endl;
	std::cout << "This is a new employee of your company!" << std::endl << "Give him grade: ";

	std::string grade;
	std::getline(std::cin, grade);

	try
	{
		Bureaucrat worker(name[num], std::atoi(grade.c_str()));
		num = rand() % (sizeof(doc) / sizeof(doc[0]));
		std::cout << "Congratulations! you got your own bureaucrat. " << std::endl <<
		"Rather raise or lower his grade!" << std::endl;
		std::cout << "you give "<< worker.getName() << " the first order to sign the document " << doc[num] << std::endl <<
		"with grades for its signing, and assessment for its implementation." << std::endl;
		std::string sidgGr;
		std::string executGr;
		
		std::getline(std::cin, sidgGr);
		std::getline(std::cin, executGr);
		
		Form form(doc[num], std::atoi(sidgGr.c_str()), std::atoi(executGr.c_str()));
		
		while(1)
		{
			std::cout << "Chose: 1.raise\t\t 2.lower\t\t 3.form" << std::endl;
			std::getline(std::cin, grade);
			std::cout << "Want to enter an arbitrary gradation?\nIf not press ENTER" << std::endl;
			if (grade == "1")
				raiseGraide(worker);
			else if (grade == "2")
				lowerGrade(worker);
			else if (grade == "3")
				addForm(worker, form);
			else
			{
				std::cout << "Do u want exit?" << std::endl;
				std::cout << "YES\t\t\t NO" << std::endl;
				std::getline(std::cin, grade);
				if ( grade == "YES" || grade == "yes" || grade == "y" || grade == "Y")
					break;
			}
				
		}
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}