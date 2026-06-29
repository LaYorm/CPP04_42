/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:52:34 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/29 16:26:38 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	WrongAnimal	W_animal;
	WrongAnimal	*W_kitty = new WrongCat();
	
	std::cout << std::endl << "Test for animals and cats" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); 

	std::cout << std::endl << "Test for Wrong animals and cats" << std::endl;
	W_animal.makeSound();
	W_kitty->makeSound();

	std::cout << std::endl << "Test for Copy Constructor" << std::endl;
	Cat	garfield;
	Cat	Copy_garfield(garfield);
	Cat Assign_garfield;

	Assign_garfield = Copy_garfield;
	std::cout << garfield.getType() << " " << std::endl;
	std::cout << Copy_garfield.getType() << " " << std::endl;
	garfield.makeSound();
	Copy_garfield.makeSound();
	std::cout << Assign_garfield.getType() << " " << std::endl;
	Assign_garfield.makeSound();
	delete W_kitty;
	delete i;
	delete j;
	delete meta;
}