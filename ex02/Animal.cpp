/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:44:05 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 17:00:48 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal Default Constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal Default Destructor called" << std::endl;
	return;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Animal Assignment Operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "I am but the concept of an animal. Concepts make no sound" << std::endl;
	return;
}
