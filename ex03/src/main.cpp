/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 17:24:00 by yorimek           #+#    #+#             */
/*   Updated: 2026/07/02 12:11:37 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/MateriaSource.hpp"

int main()
{
    ICharacter  *Aokiji = new Character("Aokiji");
    IMateriaSource  *Spell_book = new MateriaSource();
    ICharacter  *Akainu = new Character("Akainu");
    Spell_book->learnMateria(new Ice());
    Spell_book->learnMateria(new Cure());
    AMateria* spell_ice = Spell_book->createMateria("ice");
    AMateria* spell_cure = Spell_book->createMateria("cure");
    AMateria* spell_fire = Spell_book->createMateria("fire");
    
    if (!spell_fire)
        std::cout << "\nCharacter can't learn that spell !!\n";

    std::cout << "\n--- Test 1 : Remplir l'inventaire ---" << std::endl;
    Aokiji->equip(spell_ice);
    Aokiji->equip(spell_cure);
    Aokiji->equip(Spell_book->createMateria("ice"));
    Aokiji->equip(Spell_book->createMateria("cure"));
    
    AMateria* extra_spell = Spell_book->createMateria("ice");
    Aokiji->equip(extra_spell); 
    
    delete extra_spell;

    std::cout << "\n--- Test 2 : Utilisation ---" << std::endl;
    Aokiji->use(0, *Akainu);
    Aokiji->use(1, *Akainu);
    Aokiji->use(2, *Akainu);
    Aokiji->use(3, *Akainu);
    Aokiji->use(5, *Akainu);//hors limite

    std::cout << "\n--- Test 3 : Desequipement et Sol ---" << std::endl;
    Aokiji->unequip(0); // Aokiji jette son sort de glace au sol
    Aokiji->use(0, *Akainu); // La case 0 est vide : ne doit rien faire !

    std::cout << "\n--- Nettoyage ---" << std::endl;
    delete Aokiji; 
    delete Akainu;
    delete Spell_book;
    
    return 0;
}
