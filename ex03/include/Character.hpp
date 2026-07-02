/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 15:37:44 by yorimek           #+#    #+#             */
/*   Updated: 2026/07/02 10:28:46 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP


#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		AMateria*	_inventory[4];
		std::string	_name;
		AMateria*	_on_floor[100];
		int			_idx_floor;
	public:
		Character();
		~Character();
		Character(std::string name);
		Character(Character const &copy);
		Character	&operator=(Character const &other);
		
		std::string const&	getName()const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif