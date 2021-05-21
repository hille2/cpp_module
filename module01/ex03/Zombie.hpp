/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:45:55 by sgath             #+#    #+#             */
/*   Updated: 2021/05/21 12:52:20 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string m_name;
	std::string m_type;

public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void getName(std::string name);
	void announce();

};

#endif