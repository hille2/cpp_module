/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:22 by sgath             #+#    #+#             */
/*   Updated: 2021/06/18 17:01:25 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion( std::string const &arg) :	line(arg)
{
	for (int i = 0; i  < SCALAR; i++)
		result[i] = 0;
		
	std::cout << "You entered:\t\t\t" <<  line << std::endl;
}

Conversion::Conversion( Conversion const &copy ) :	line(copy.line)
{}

Conversion::~Conversion( )
{}

Conversion	&Conversion::operator=( Conversion const &value )
{
	if (&value != this)
		line = value.line;

	return *this;
}

bool		Conversion::thisIsChar( )
{
	const char *tmp = line.c_str();
	
	int i = -1;
	while (tmp[++i])
	{
		if (!isalpha(tmp[i]))
			return false;
	}
	
	result[CHAR] = 1;
	return true;
}

bool		Conversion::thisIsInt( )
{
	const char *tmp = line.c_str();
	
	int i = -1;
	while (tmp[++i])
	{
		if (!isdigit(tmp[i]))
			return false;
	}
	
	result[INT] = 1;
	return true;
}

bool		Conversion::thisIsDouble( )
{
	const char *tmp = line.c_str();
	
	int i = -1;

	if (tmp[0] == '.' || tmp[line.length() - 1] == '.') 
		return false;
	while (tmp[++i] != '.')
	{
		if (!isdigit(tmp[i]) && !tmp[i + 1])
			return false;
	}
	while (tmp[++i])
	{
		if (!isdigit(tmp[i]) )
			return false;
	}
	result[DOUBLE] = 1;
	return true;
}

bool			Conversion::thisIsFloat( )
{
	const char *tmp = line.c_str();
	
	int i = -1;

	if (tmp[0] == '.' || line.find('f') != (line.length() - 1)) 
		return false;
	while (tmp[++i] != '.')
	{
		if (!isdigit(tmp[i]) && !tmp[i + 1])
			return false;
	}
	while (tmp[++i] != 'f')
	{
		if (!isdigit(tmp[i]))
			return false;
	}
	result[FLOAT] = 1;
	return true;
}

// const std::string	Conversion::printRes[] =
// {
// 	" is INT",
// 	" is DOUBLE",
// 	" is FLOAT",
// 	" is CHAR",
// };

// const bool		Conversion::parsScale[] =
// {
// 	{.f=thisIsChar},
// 	{.f=Conversion::thisIsInt},
// 	{.f=Conversion::thisIsDouble},
// 	{.f=Conversion::thisIsFloat},
// };

void			Conversion::checkScalar( )
{

	if (thisIsChar() == true)
		std::cout << "char" << std::endl;
	else if (thisIsDouble() == true)
		std::cout << "double" << std::endl;
	else if (thisIsFloat() == true)
		std::cout << "float" << std::endl;
	else if (thisIsInt() == true)
		std::cout << "int" << std::endl;
	else
		throw NoValidScalar();
}


// void			Conversion::printResult()
// {
// 	for (int i = 0; i < SCALAR; i++)
// 	{
// 		if (result[i] == true)
// 			std::cout << line << printRes[i];
// 	}
// }

const char*		Conversion::NoValidScalar::what( ) const throw()
{
	return "Error:\nNo valid scalar!\n";
}