/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:22 by sgath             #+#    #+#             */
/*   Updated: 2021/06/18 19:51:26 by yu               ###   ########.fr       */
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
	LITERAL = 4,
	SCALAR = 4,
};

class Conversion
{
private:

	std::string					line;
	bool						result[SCALAR];
	
public:
	Conversion( std::string const &arg );
	Conversion( Conversion const &copy );
	virtual				~Conversion( );
	Conversion			&operator=( Conversion const &value );

	bool 				thisIsChar( );
	bool				thisIsInt( );
	bool 				thisIsDouble( );
	bool 				thisIsFloat ( );

	int					checkType( );
	void				printConversoinType( );		

	class				NoValidScalar : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
	
};


#endif