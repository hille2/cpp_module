/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:32 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:29:19 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	
public:
	PlasmaRifle();
	PlasmaRifle( PlasmaRifle const &rifleCopy );
	virtual		~PlasmaRifle();
	
	PlasmaRifle	&operator=( PlasmaRifle const &rifleValue );
	void		attack( ) const;
};

#endif
