/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:14:22 by sgath             #+#    #+#             */
/*   Updated: 2021/05/25 16:28:17 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <tgmath.h>

class Fixed
{
private:
	int					m_value;
	const static int	m_fractionalBits = 8;

public:
	Fixed( );
	Fixed( const Fixed &fixedValue );
	Fixed( const int value ) ;
	Fixed( const float value );
	~Fixed( );

	Fixed	operator=( Fixed const &FixedValue );
	int		getRawBits( void ) const;
	float	getRawBitsFl( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

};

std::ostream& operator<< (std::ostream &out, const Fixed &fixedOut);

#endif