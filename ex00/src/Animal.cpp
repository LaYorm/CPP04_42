/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 12:34:03 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/29 15:02:34 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(): type("Default")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
	return ;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = copy;
	return ;
}

Animal	&Animal::operator=(Animal const &other)
{
	this->type = other.type;
	return (*this);
}

void	Animal::makeSound(void)const
{
	std::cout << "This Animal doesn't make any sound !" << std::endl;
	return ; 
}

std::string	Animal::getType()const
{
	return (this->type);
}