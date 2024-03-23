/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:11:17 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 21:11:15 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::string divider = "-------------------";

	std::cout << divider << "Allocate animals on heap" << divider << std::endl;
	Animal *dog_1 = new Dog();
	Animal *cat_1 = new Cat();
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
		cat_test_1.addIdea("I like muerdering birds");
		dog_test_2.sayIdeas();
		cat_test_2.sayIdeas();
		std::cout << divider << "Stack animals in brackets go out of scope" << divider << std::endl;
	}
	std::cout << divider << "Deallocate animals on heap" << divider << std::endl;
	delete dog_1;
	delete cat_1;
	std::cout << divider << "Animals on stack go out of scope" << divider << std::endl;
	return 0;
}
