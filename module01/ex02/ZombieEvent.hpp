/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:45:50 by sgath             #+#    #+#             */
/*   Updated: 2021/05/20 18:44:15 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string m_typeEvent;

public:
	ZombieEvent();
	~ZombieEvent();
	void setZombieType(std::string type);
	Zombie *newZombie(std :: string name);
	Zombie *randomChump();

};

#endif