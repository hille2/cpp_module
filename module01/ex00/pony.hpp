/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:09:36 by sgath             #+#    #+#             */
/*   Updated: 2021/05/05 16:48:07 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
class Pony
{
	public:
			explicit Pony();
			~Pony();
			
	private:
		std::string	name_;
		std::string	greed_;
		std::string	favoriteFood_;
		std::string	colors_;
		int			age_;
		std::string	gender_;
		std::string	ponyDescription_[6]; //add
};

#endif