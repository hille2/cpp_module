/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:14:19 by sgath             #+#    #+#             */
/*   Updated: 2021/05/24 14:27:49 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( ) : m_value(0)
{
	std::cout << "\033[1;92m<Default constructor called>\033[0m" << std::endl;
}

Fixed::Fixed(const Fixed &fixedValue) : m_value(fixedValue.m_value)
{
	std::cout << "\033[1;92m<Copy constructor called>\033[0m" << std::endl;
}

Fixed::~Fixed( )
{
	std::cout << "\033[1;31m<Destructor called>\033[0m" << std::endl;
}

Fixed Fixed::operator=( Fixed &fixedValue )
{
	std::cout << "\033[1;31m<Assignation operator called>\033[0m" << std::endl;
	m_value = fixedValue.m_value;
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "\033[1;30m<getRawBits member function called>\033[0m" << std::endl;
	return(m_value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "\033[1;30m<setRawBits member function called>\033[0m" << std::endl;
	m_value = raw;
}
