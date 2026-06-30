/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:16:10 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/29 15:53:39 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:
			
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &copy);
		WrongCat	&operator=(WrongCat const &other);

		void	makeSound(void)const;
};

#endif