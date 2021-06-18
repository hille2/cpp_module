/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:22 by sgath             #+#    #+#             */
/*   Updated: 2021/06/18 15:51:30 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>

enum Conver
{
	INT = 0,
	DOUBLE = 1,
	FLOAT = 2,
	CHAR = 3,

	SCALAR = 4,
};

class Conversion
{
private:

	int							m_scalarInt;
	double						m_scalarDouble;
	float						m_scalarFloat;
	char						m_scalarChar;

	std::string					line;
	bool						result[SCALAR];
	static const std::string	printRes[SCALAR];
	bool						(*f);
	static const bool			parsScale[];
	
public:
	Conversion( std::string const &arg );
	Conversion( Conversion const &copy );
	virtual				~Conversion( );
	Conversion			&operator=( Conversion const &value );

	bool 				thisIsChar( );
	bool				thisIsInt( );
	bool 				thisIsDouble( );
	bool 				thisIsFloat ( );

	void				checkScalar( );		
	void				printResult( );

	class				NoValidScalar : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
};


#endif