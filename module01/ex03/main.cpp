/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:45:45 by sgath             #+#    #+#             */
/*   Updated: 2021/05/20 18:53:33 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie *zombies;
	ZombieEvent zombieEvent;

	zombies = new Zombie("Gosha", "Normal");
	zombies->announce();
	delete zombies;

	zombies = zombieEvent.newZombie("Shon");
	zombies->announce();
	delete zombies;

	zombieEvent.setZombieType("Angry");
	zombies = zombieEvent.newZombie("Lily");
	zombies->announce();
	delete zombies;
	
	zombieEvent.setZombieType("Hungry");
	zombies = zombieEvent.randomChump();
	zombies->announce();
	delete zombies;
}