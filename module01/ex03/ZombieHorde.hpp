/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:54:58 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 12:50:41 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_PHH
#define ZOMBIEHORDE_PHH

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie	*m_zombies;
	static	std::string randName[15];
	int		m_num;

public:
	ZombieHorde();
	ZombieHorde(long num);
	~ZombieHorde();

};

#endif