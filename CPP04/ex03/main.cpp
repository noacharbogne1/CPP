/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:23:20 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/19 09:33:25 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "Character.hpp"

int main(void)
{
        std::cout << std::endl << MAGENTA << "/// TESTING THE INVENTORY OF MATERIAS ///"
            << RESET << std::endl << std::endl;

        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Cure());
        src->learnMateria(new Cure());
        src->learnMateria(new Cure());

        std::cout << std::endl << MAGENTA << "/// TESTS TO EQUIP/UNEQUIP A CHARACTER ///"
            << RESET << std::endl << std::endl;

        Character me("coucou");

        AMateria* tmp1 = src->createMateria("coucou");
        me.equip(tmp1);

        AMateria* tmp2 = src->createMateria("ice");
        me.equip(tmp2);

        AMateria* tmp3 = src->createMateria("cure");
        me.equip(tmp3);

        AMateria* tmp4 = src->createMateria("ice");
        me.equip(tmp4);

        me.unequip(2);
        me.unequip(2);
        me.unequip(3);

        AMateria* tmp5 = src->createMateria("cure");
        me.equip(tmp5);

        AMateria* tmp6 = src->createMateria("cure");
        me.equip(tmp6);

        std::cout << std::endl << MAGENTA << "/// TESTS TO USE MATERIAS ///"
            << RESET << std::endl << std::endl;

        ICharacter* edgar = new Character("edgar");
        ICharacter* rosetta = new Character("rosetta");

        AMateria* tmp;
        tmp = src->createMateria("ice");
        edgar->equip(tmp);
        tmp = src->createMateria("cure");
        edgar->equip(tmp);

        edgar->use(0, *rosetta);
        edgar->use(1, *rosetta);

        std::cout << std::endl << MAGENTA << "/// TESTING THE COPY CONSTRUCTOR OF CHARACTER ///"
            << RESET << std::endl << std::endl;

        Character me2(me);

        AMateria* tmp7 = src->createMateria("cure");
        me2.equip(tmp7);

        std::cout << std::endl << MAGENTA << "/// DELETING ///"
        << RESET << std::endl << std::endl;

        delete src;
        delete rosetta;
        delete edgar;
        return 0;
}
