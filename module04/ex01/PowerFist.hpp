/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:34:37 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 17:29:29 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:
	
public:
	PowerFist();
	PowerFist( PowerFist const &rifleCopy );
	virtual		~PowerFist();
	
	PowerFist	&operator=( PowerFist const &powerValue );
	void		attack() const;
};

#endif
