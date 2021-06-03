/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:42 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:24:44 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:
	
public:
	RadScorpion( );
	RadScorpion( RadScorpion const &scorpionCopy );
	virtual		~RadScorpion( );
	RadScorpion	operator=( RadScorpion const &scorpionValue );

	void		takeDamage( int value );
};

#endif