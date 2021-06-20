/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:40:22 by sgath             #+#    #+#             */
/*   Updated: 2021/06/19 12:19:10 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int randSymbolASCII()
{
	int num = rand() % 127;
	if (isalpha(num) || isdigit(num))
		return num;
	return randSymbolASCII();
}

void	*serialize(void)
{
	char *data = new char[ LEN + LEN + 4];

	std::cout << "Serialize:" << std::endl;
	for (int i = 0; i < LEN; i ++)
		data[i] = static_cast<char>(randSymbolASCII());
	std::cout << "pointer to a random string:\t\t\t " << data << std::endl;
	std::cout << "second pointer to a second random string:\t ";
	for (int i = 0; i < LEN; i ++)
	{
		data[i + LEN ]= randSymbolASCII();
	 	std::cout << data[i + LEN];
	}
	int num = rand() % INT32_MAX;
	//int num = 9999;
	*reinterpret_cast<int*>(data + LEN  + LEN) = num;
	std::cout << "\nrandom integer:\t\t\t\t\t " << num << std::endl;
	
	std:: cout << "---------------" << std::endl;
	return reinterpret_cast<void*>(data);
}

Data	*deserialize(void *raw)
{
	Data *data = new Data;

	std::cout << "Deserialize:" << std::endl;
	data->rand_pointer1 = std::string(reinterpret_cast<char*>(raw), LEN);
	std::cout << "pointer to a random string:\t\t\t " << data->rand_pointer1 << std::endl;
	data->rand_pointer2 = std::string(reinterpret_cast<char*>(raw) + LEN, LEN);
	std::cout << "second pointer to a second random string:\t " << data->rand_pointer2 << std::endl;
	data->num = *reinterpret_cast<int*>((static_cast<char*>(raw)) + LEN + LEN);
	std::cout << "random integer:\t\t\t\t\t " << data->num << std::endl;

	std:: cout << "---------------" << std::endl;
	return data;
}


int		main()
{
	Data *data;

	srand(static_cast<unsigned int>(time(0)));
	void *raw = serialize();
	data = deserialize(raw);

	

	return 0;
}
