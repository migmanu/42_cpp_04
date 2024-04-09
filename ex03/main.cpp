/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:15:08 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/09 14:32:46 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	std::string divider = "-------------------";

	std::cout << std::endl << divider << "START PROGRAM" << divider << std::endl << std::endl;
	std::cout << std::endl << divider << "Instanciate objects" << divider << std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	std::cout << std::endl << divider << "Add materias to Character" << divider << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl << divider << "Surpass max Materias" << divider << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl << divider << "Unequip Materia and add another" << divider << std::endl;
	me ->unequip(2);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl << divider << "Attack and cure" << divider << std::endl;
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << std::endl << divider << "Delete all" << divider << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
	return 0;
}
