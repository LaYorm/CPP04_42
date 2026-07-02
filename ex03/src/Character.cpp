/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:43:24 by yorimek           #+#    #+#             */
/*   Updated: 2026/07/01 17:19:30 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(): _name("Default")
{
	std::cout << "Character Default Constructor Called\n";
	this->_idx_floor = 0;
	for (int i = 0; i < 100; i++)
		this->_on_floor[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::~Character()
{
	std::cout << "Character Destructor Called\n";
	for (int i = 0; i < this->_idx_floor; i++)
		delete this->_on_floor[i];
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	return ;
}

Character::Character(std::string name): _name(name)
{
	std::cout << "Character Constructor called for " << name << std::endl;
	this->_idx_floor = 0;
	for (int i = 0; i < 100; i++)
		this->_on_floor[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(Character const &copy)
{
	this->_idx_floor = 0;
	for (int i = 0; i < 100; i++)
		this->_on_floor[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = copy;
	return ;
}

Character	&Character::operator=(Character const &other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (other._inventory[i] != NULL)
			{
				this->_inventory[i] = other._inventory[i]->clone();
			}
			else
				this->_inventory[i] = other._inventory[i];
		}
	}
	return (*this);
}

std::string const	&Character::getName()const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			break;
		}
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (this->_idx_floor > 99)
	{
		std::cout << this->getName() << "can't drop this object, there no room left on the floor !\n";
		return ;
	}
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		this->_on_floor[this->_idx_floor] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
		this->_idx_floor++;
	}
	else
		std::cout << "There's no item at this index...\n";
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	return ;
}
