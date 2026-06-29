/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:13:15 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/29 15:15:50 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	return ;
}

Dog::Dog(Dog const &copy): Animal()
{
	*this = copy;
	return ;
}
Dog	&Dog::operator=(Dog const &other)
{
	Animal::operator=(other);
	return (*this);	
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says: **Wouf Wouf**" << std::endl;
	return ;
}