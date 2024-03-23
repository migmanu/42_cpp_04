/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:11:17 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 16:24:41 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void testAnimals(const Animal **animals, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "Animal " << i << " type: " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
}

int main()
{
	std::string divider = "-------------------";
	std::cout << divider << "Correct versions" << divider << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << divider << "Types" << divider << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << divider <<  "Sounds" << divider << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << divider << "Test in function" << divider << std::endl;
	const Animal *arr[3] = {j, i, meta};
	testAnimals(arr, 3);
	std::cout << divider <<  "Destructors" << divider << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl << divider << "Incorrect versions:" << divider << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << divider << "Types" << divider << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << divider <<  "Sounds" << divider << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();
	std::cout << divider <<  "Destructors" << divider << std::endl;
	delete wrongMeta;
	delete wrongCat;
	return 0;
}
