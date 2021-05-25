/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:14:22 by sgath             #+#    #+#             */
/*   Updated: 2021/05/24 14:21:59 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int					m_value;
	const static int	m_fractionalBits = 8;
	
public:
	Fixed();
	Fixed(const Fixed &fixedValue);
	~Fixed();

	Fixed	operator=(Fixed &FixedValue);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif