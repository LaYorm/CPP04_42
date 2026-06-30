/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:52:34 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/30 15:18:26 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* h = new Cat();
	delete j;//should not create a leak
	delete h;
	Animal	*array[100];
	size_t 	i;

	i = 0;
	while (i < 50)
	{
		Dog	*dog = new Dog();
		array[i] = dog;
		i++;
	}
	while (i < 100)
	{
		Cat *cat = new Cat();
		array[i] = cat;
		i++;
	}
	std::cout << std::endl << "The Array have been fulfilled" << std::endl << std::endl;
	i = 0;
	while (i < 100)
	{
		delete array[i];
		i++;
	}
	std::cout << std::endl << "TEST FOR COPY" << std::endl << std::endl;
	Animal	*dog_1 = new Dog();
	Dog	original_dog;
	Dog	dog_copy(original_dog);

	delete dog_1;
}