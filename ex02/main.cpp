/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:11:17 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/24 23:00:02 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::string divider = "-------------------";

	// AAnimal animal; // Error: AAnimal is abstract class
	std::cout << std::endl << divider << "START PROGRAM" << divider << std::endl << std::endl;
	std::cout << divider << "Allocate animals on heap" << divider << std::endl;
	AAnimal *dog_1 = new Dog();
	AAnimal *cat_1 = new Cat();
	std::cout << divider << "Create animals on stack" << divider << std::endl;
	Dog dog_test_1;
	Cat cat_test_1;
	std::cout << divider << "Add ideas" << divider << std::endl;
	dog_test_1.addIdea("I am a dog");
	cat_test_1.addIdea("I am a Cat");
	{
		std::cout << divider << "Create animals on stack inside brackets" << divider << std::endl;
		Dog dog_test_2(dog_test_1);
		Cat cat_test_2(cat_test_1);
		std::cout << divider << "Add new ideas to first animals, check seconds" << divider << std::endl;
		dog_test_1.addIdea("I like bones");
		cat_test_1.addIdea("I like murdering birds");
		dog_test_2.sayIdeas();
		cat_test_2.sayIdeas();
		std::cout << divider << "Stack animals in brackets go out of scope" << divider << std::endl;
	}
	std::cout << divider << "Deallocate animals on heap" << divider << std::endl;
	delete dog_1;
	delete cat_1;
	std::cout << divider << "Check deep copy" << divider << std::endl;
	Dog x = Dog();
	Dog z = Dog();
	z.makeSound();
	z = x;
	AAnimal *deep_cat_1 = new Cat();
	AAnimal *deep_cat_2 = new Cat();
	AAnimal *deep_cat_3 = deep_cat_2;
	deep_cat_1->makeSound();
	deep_cat_2 = deep_cat_1;
	delete deep_cat_1;
	delete deep_cat_3;
	std::cout << divider << "Animals on stack go out of scope" << divider << std::endl;
	return 0;
}
