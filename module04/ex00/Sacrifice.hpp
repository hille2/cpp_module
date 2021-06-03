/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sacrifice.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:18:59 by sgath             #+#    #+#             */
/*   Updated: 2021/06/03 10:23:47 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SACRIFICE_HPP
#define SACRIFICE_HPP

#include "Peon.hpp"

class Sacrifice : public Peon
{
private:
	
public:
	Sacrifice( std::string name );
	Sacrifice( Sacrifice const &sacrificeCopy );
	~Sacrifice();
	Sacrifice	&operator=(Sacrifice const &sacrificeValue );

	void		getPolimorphed( ) const;
	
};

#endif
