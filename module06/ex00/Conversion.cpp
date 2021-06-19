/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:22 by sgath             #+#    #+#             */
/*   Updated: 2021/06/18 19:54:22 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion( std::string const &arg) :	line(arg)
{
	for (int i = 0; i  < SCALAR; i++)
		result[i] = 0;
		
	std::cout << "You entered: " <<  line << std::endl;
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
	if (line.length() == 1 && isalpha(static_cast<const char>(line[0])))
		return true;
	
	return false;	
}

bool		Conversion::thisIsInt( )
{
	const char *tmp = line.c_str();
	
	int i = -1;
	if (tmp[0] == '+' || tmp[0])
		i++;
	while (tmp[++i])
	{
		if (!isdigit(tmp[i]))
			return false;
	}
	if (atoll(tmp) > INT32_MAX || atoll(tmp) < INT32_MIN)
		throw NoValidScalar();
	return true;
}

bool		Conversion::thisIsDouble( )
{
	const char *tmp = line.c_str();
	
	int i = -1;
	if (tmp[0] == '.' || tmp[line.length() - 1] == '.') 
		return false;
	if (tmp[0] == '+' || tmp[0])
		i++;
	while (tmp[++i] != '.')
	{
		if (!isdigit(tmp[i]) || !tmp[i + 1])
			return false;
	}
	while (tmp[++i])
	{
		if (!isdigit(tmp[i]) )
			return false;
	}
	return true;
}

bool			Conversion::thisIsFloat( )
{
	const char *tmp = line.c_str();
	
	int i = -1;

	if (tmp[0] == '.' || line.find('f') != (line.length() - 1)) 
		return false;

	if (tmp[0] == '+' || tmp[0])
		i++;
	while (tmp[++i] != '.')
	{
		if (!isdigit(tmp[i]) || !tmp[i + 1])
			return false;
	}
	if (tmp[ i + 1] == 'f')
		return false;
	while (tmp[++i] != 'f')
	{
		if (!isdigit(tmp[i]))
			return false;
	}
	return true;
}

int				Conversion::checkType( )
{
	if (line == "nan" || line == "+inf" || line == "-inf")
	{
		std::cout << line << " is literal" << std::endl;
		return LITERAL;
	}
	if (thisIsChar() == true)
	{
		std::cout << line << " is char" << std::endl;
		return CHAR;
	}
	else if (thisIsDouble() == true)
	{
		std::cout << line << " is double" << std::endl;
		return DOUBLE;
	}
	else if (thisIsFloat() == true)
	{
		std::cout << line << " is float" << std::endl;
		return FLOAT;
	}
	else if (thisIsInt() == true)
	{
		std::cout << line << " is int" << std::endl;
		return INT;	
	}
	
	throw NoValidScalar();
	return 0;
}

void		Conversion::printConversoinType()
{
	int res = checkType( );
	
	
	if ( res == 0)
	{
		int num = atoi(line.c_str());
		if ((num >= 65 && num <= 90 )|| (num >= 97 && num <= 122))
			std::cout << "char:\t\t" << static_cast<const char>(num) << std::endl;
		else
			std::cout << "char:\t\timpossible" << std::endl;
		std::cout << "int:\t\t" << num << std::endl;
		std::cout << "float:\t\t" << static_cast<float>(num) << ".0f" << std::endl;
		std::cout << "double:\t\t" << static_cast<double>(num) << ".0" << std::endl;
	}

	else if (res == 1 || res == 2)
	{
		int num = atoi(line.c_str());
		if (isalpha(num))
			std::cout << "char:\t\t" << static_cast<const char>(num) << std::endl;
		else
			std::cout << "char:\t\t impossible" << std::endl;
		std::cout << "int:\t\t" << num << std::endl;
		std::cout << "float:\t\t";
		
		int i = -1;
		while (line[++i] != '.')
			std::cout << line[i];
		std::cout << line[i] << line[i + 1] << "f" << std::endl;
		

		std::cout << "double:\t\t";
		i = -1;
		while (line[++i] != '.')
			std::cout << line[i];
		std::cout << line[i] << line[i + 1] << std::endl;
	}
	else if ( res == 3)
	{
		std::cout << "char:\t\t" << line << std::endl;
		std::cout << "int:\t\t" << static_cast<int>(line[0]) << std::endl;
		std::cout << "float:\t\t" << static_cast<float>(line[0]) << ".0f" << std::endl;
		std::cout << "double:\t\t" << static_cast<double>(line[0]) << ".0" << std::endl;
	}
	else
	{
		std::cout << "char:\t\timpossible" << std::endl;
		std::cout << "int:\t\timpossible" << std::endl;
		std::cout << "float:\t\tnanf" << std::endl;
		std::cout << "double:\t\tnan" << std::endl;
	}
}

const char*		Conversion::NoValidScalar::what( ) const throw()
{
	return "Error:\nNo valid scalar!\n";
}