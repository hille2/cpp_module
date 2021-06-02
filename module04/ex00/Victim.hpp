/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:31:13 by sgath             #+#    #+#             */
/*   Updated: 2021/05/30 11:15:25 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
private:
	std::string	m_name;
	
public:
	Victim( );
	Victim( std::string const &name);
	Victim( Victim const &victimCopy );
	~Victim( );

	Victim		operator=( Victim const &victimValue );
	void		setName( std::string newName );
	std::string	getName( );
};

#endif
