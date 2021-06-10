/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:17 by sgath             #+#    #+#             */
/*   Updated: 2021/06/10 18:22:59 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

static const std::string name[] = {
	"\033[1;31mMichael Scott\033[0m",
	"\033[1;31mDwight Schrute\033[0m",
	"\033[1;31mJim Halpert\033[0m",
	"\033[1;31mPam Beasley\033[0m",
	"\033[1;31mRyan Howard\033[0m",
	"\033[1;31mAndy Bernard\033[0m",
	"\033[1;31mRobert California\033[0m",
	"\033[1;31mHanibal Lecturer\033[0m",
};

static const std::string forme [] = {
	"\033[1;32m`1 - F`\033[0m",
	"\033[1;32m`28 - A`\033[0m",
	"\033[1;32m`42- CPP`\033[0m",
	"\033[1;32m`D42`\033[0m",
	"\033[1;32m`A 82`\033[0m",
};

static const std::string doc[] = {
	"Planet_Earth_lease",
	"Purchase_of_third_legs",
	"Ring_finger_long_nail_prototype",
	"Free_beer_project_for_everyone",
	"The_bill_on_the_creation_of_a_soft_Internet_with_cats",
};
	
bool	wantExit()
{
	std::string command;
	std::cout << "<Do u want exit?>" << std::endl;
	std::cout << ">YES\t\t\t >NO" << std::endl;

	std::getline(std::cin, command);
	if ( command == "YES" || command == "yes" || command == "y" || command == "Y")
		return 1;
	return 0;
}


void	raiseGraide(Bureaucrat &worker) //ok
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

void	lowerGrade(Bureaucrat &worker) //ok
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


void	command1(Bureaucrat &worker, Form &form)
{
	try
	{
		form.beSigned(worker);
		worker.signForm(form);
		std::cout << form;
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

void	command2(Bureaucrat &worker)
{
	int num = rand() % (sizeof(doc) / sizeof(doc[0]));

	ShrubberyCreationForm shub(doc[num]);
	try
	{
		worker.executeForm(shub);
		shub.writeAsciiTrees();
		std::cout << shub;
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

void	command3(Bureaucrat &worker)
{
	int num = rand() % (sizeof(doc) / sizeof(doc[0]));

	PresidentialPardonForm pardone(doc[num]);
	try
	{
		worker.executeForm(pardone);
		pardone.pardonedbyZafodBeeblebrox();
		std::cout << pardone;
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

void	command4(Bureaucrat &worker)
{
	int num = rand() % (sizeof(doc) / sizeof(doc[0]));

	RobotomyRequestForm robot(doc[num]);
	try
	{
		worker.executeForm(robot);
		robot.beenRobotomized();
		std::cout << robot;
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

void	addForm(Bureaucrat &worker, Form &form)
{
	std::string command;

	while(1)
	{
		std::cout << "<1. Sign the form>" << std::endl;
		std::cout << "<2. Sign the Shrubbery form>" << std::endl;
		std::cout << "<3. Sign the Presidential pardon form>" << std::endl;
		std::cout << "<4. Sign the Robotomy request form>" << std::endl;
		std::getline(std::cin, command);
		if (command == "1")
			command1(worker, form);
		else if (command == "2")
			command2(worker);
		else if (command == "3")
			command3(worker);
		else if (command == "4")
			command4(worker);
		else
			if (wantExit())
				break;	
	}

}

void	makeForme( Intern &bob, std::string name )
{
	int num = rand() % (sizeof(doc) / sizeof(doc[0]));

	
	try
	{
		Form *f = bob.makeForm(name, doc[num]);
		std::cout << *f; 
	
		delete f;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	workIntern(Bureaucrat &b)
{
	std::string command;

	Intern bob;

	(void)b;
	std::cout << "<You can get the intern to fill out a bunch of papers, \nlet's have some fun!>" << std::endl;
	std::cout << "<what are we going to fill in?>" << std::endl;
	std::cout << ">1. ShrubberyCreationForm" << std::endl;
	std::cout << ">2. PresidentialPardonForm" << std::endl;
	std::cout << ">3. RobotomyRequestForm" << std::endl;
	std::cout << ">4. All?" << std::endl;
	std::cout << ">5. Do you want to enter the type yourself?" << std::endl;
	std::getline(std::cin, command);
	if (command == "1")
		makeForme(bob, "ShrubberyCreationForm");
	else if (command == "2")
		makeForme(bob, "PresidentialPardonForm");
	else if (command == "3")
		makeForme(bob, "RobotomyRequestForm");
	else if (command == "4")
	{
		makeForme(bob, "ShrubberyCreationForm");
		makeForme(bob, "PresidentialPardonForm");
		makeForme(bob, "RobotomyRequestForm");
	}
	else if (command == "5")
	{
		std::cout << ">enter type: " << std::endl;
		std::getline(std::cin, command);
		makeForme(bob, command);
	}
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
		num = rand() % (sizeof(forme) / sizeof(forme[0]));
		std::cout << "<Congratulations! you got your own bureaucrat.>" << std::endl;
		std::cout << "<You give "<< worker.getName() << " the first order to sign the document " << forme[num] << std::endl <<
		"with grades for its signing, and assessment for its implementation.>" << std::endl;
		std::string sidgGr;
		std::string executGr;
		
		std::cout << "<Rather raise or lower his grade or do something for form!>" << std::endl;
		std::cout << "<grade required to sign form:> ";
		std::getline(std::cin, sidgGr);
		std::cout << "<grade required to execute form:> ";
		std::getline(std::cin, executGr);
		
		Form form(forme[num], std::atoi(sidgGr.c_str()), std::atoi(executGr.c_str()));
		
		while(1)
		{
			std::cout << "\033[1;42mChose:\t\t 1.raise\t\t 2.lower\t\t 3.form\033[0m" << std::endl;
			std::cout << "\033[1;42m4. or make the intern do everything for us?\033[0m" << std::endl;
			std::getline(std::cin, grade);
			if (grade == "1")
				raiseGraide(worker);
			else if (grade == "2")
				lowerGrade(worker);
			else if (grade == "3")
				addForm(worker, form);
			else if (grade == "4")
				workIntern(worker);
			else
				if (wantExit())
					break;	
		}
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}