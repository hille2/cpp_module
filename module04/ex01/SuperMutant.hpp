/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:47 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 15:29:04 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:
	
public:
	SuperMutant( );
	SuperMutant( SuperMutant const &mutantCopy );
	virtual		~SuperMutant( );
	SuperMutant	operator=( SuperMutant const &mutantValue );

	void		takeDamage( int value );
};

#endif