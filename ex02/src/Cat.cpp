/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 12:46:34 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/30 15:40:06 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	return ;
}

Cat::Cat(Cat const &copy): AAnimal()
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = copy;
	return ;
}
Cat	&Cat::operator=(Cat const &other)
{
	AAnimal::operator=(other);
	return (*this);	
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Miaoouu**" << std::endl;
	return ;
}