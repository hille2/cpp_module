/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:14:19 by sgath             #+#    #+#             */
/*   Updated: 2021/05/25 16:27:49 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
//Default constructor
Fixed::Fixed() : m_value(0)
{
	std::cout << "\033[1;92m<Default constructor called>\033[0m" << std::endl;
}

//Copy constructor
Fixed::Fixed(const Fixed &fixedValue) : m_value(fixedValue.m_value)
{
	std::cout << "\033[1;92m<Copy constructor called>\033[0m" << std::endl;
}

//Int constructor
Fixed::Fixed( const int value )
{
	std::cout << "\033[1;92m<Int constructor called>\033[0m" << std::endl;
	m_value = value << m_fractionalBits;
}

//Float constructor
Fixed::Fixed( const float value )
{
	std::cout << "\033[1;92m<Float constructor called>\033[0m" << std::endl;
	m_value = static_cast<int>(roundf((value) * (1 << m_fractionalBits)));
}

//Destructor 
Fixed::~Fixed()
{
	std::cout << "\033[1;31m<Destructor called>\033[0m" << std::endl;
}


//Assignment operator
Fixed			Fixed::operator=(Fixed const &fixedValue)
{
	std::cout << "\033[1;31m<Assignation operator called>\033[0m" << std::endl;
	m_value = fixedValue.m_value;
	return (*this);
}

//Output operator
std::ostream&	operator<< (std::ostream &out, const Fixed &fileOut)
{
	//std::cout << "\033[1;31m<Output operator called>\033[0m" << std::endl;
	out << fileOut.toFloat();
	return out;
}

//
int				Fixed::getRawBits( void ) const
{
	//std::cout << "\033[1;30m<getRawBits member function called>\033[0m" << std::endl;
	return(m_value);
}

float			Fixed::getRawBitsFl( void ) const
{
	return(m_value);
}

void			Fixed::setRawBits( int const raw )
{
	//std::cout << "\033[1;30m<setRawBits member function called>\033[0m" << std::endl;
	m_value = raw;
}

float			Fixed::toFloat( void ) const
{
	return (static_cast<float>(m_value) / (1 << m_fractionalBits));
}

int				Fixed::toInt( void ) const
{
	return (m_value >> m_fractionalBits);
}