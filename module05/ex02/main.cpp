/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:17 by sgath             #+#    #+#             */
/*   Updated: 2021/06/09 11:22:43 by sgath            ###   ########.fr       */
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
	"\033[1;32m`Planet Earth lease`\033[0m",
	"\033[1;32m`Purchase of third legs`\033[0m",
	"\033[1;32m`Ring finger long nail prototype`\033[0m",
	"\033[1;32m`Free beer project for everyone`\033[0m",
	"\033[1;32m`The bill on the creation of a soft Internet with cats`\033[0m",
};
	

void raiseGraide(Bureaucrat &worker)
{
	std::cout << "<Want to enter an arbitrary gradation?>\n<If not press ENTER>" << std::endl;

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
	std::cout << "<Want to enter an arbitrary gradation?>\n<If not press ENTER>" << std::endl;

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
	std::cout << "<Sign the form>" << std::endl;

//	std::string grade;
//	std::getline(std::cin, grade);
//	if ( grade == "YES" || grade == "yes" || grade == "y" || grade == "Y")

		try
		{
			form.beSigned(worker);
		}
		catch(std::exception const &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << form;
		worker.singForm(form);
		
	
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int num = rand() % (sizeof(name) / sizeof(name[0]));
	std::cout << "<You see " << name[num] << ">" << std::endl;
	std::cout << "<This is a new employee of your company!>" << std::endl << "<Give him grade:> ";

	std::string grade;
	std::getline(std::cin, grade);

	try
	{
		Bureaucrat worker(name[num], std::atoi(grade.c_str()));
		num = rand() % (sizeof(doc) / sizeof(doc[0]));
		std::cout << "<Congratulations! you got your own bureaucrat.>" << std::endl;
		std::cout << "<You give "<< worker.getName() << " the first order to sign the document " << doc[num] << std::endl <<
		"with grades for its signing, and assessment for its implementation.>" << std::endl;
		std::string sidgGr;
		std::string executGr;
		
		std::cout << "<Rather raise or lower his grade or do something for form!>" << std::endl;
		std::cout << "<grade required to sign form:> ";
		std::getline(std::cin, sidgGr);
		std::cout << "<grade required to execute form:> ";
		std::getline(std::cin, executGr);
		
		Form form(doc[num], std::atoi(sidgGr.c_str()), std::atoi(executGr.c_str()));
		
		while(1)
		{
			std::cout << "\033[1;42mChose: 1.raise\t\t 2.lower\t\t 3.form\033[0m" << std::endl;
			std::getline(std::cin, grade);
			if (grade == "1")
				raiseGraide(worker);
			else if (grade == "2")
				lowerGrade(worker);
			else if (grade == "3")
				addForm(worker, form);
			else
			{
				std::cout << "<Do u want exit?>" << std::endl;
				std::cout << ">YES\t\t\t >NO" << std::endl;
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