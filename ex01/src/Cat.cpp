/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 12:46:34 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/30 14:32:27 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{

	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_brain = new Brain();
	this->type = "Cat";
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->_brain;
	return ;
}

Cat::Cat(Cat const &copy): Animal()
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	this->_brain = new Brain();
	*this = copy;
	return ;
}

Cat	&Cat::operator=(Cat const &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*this->_brain = *other._brain;
	}
	return (*this);	
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Miaoouu**" << std::endl;
	return ;
}