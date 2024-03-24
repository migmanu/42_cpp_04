/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:03:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/24 12:40:44 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : type("Cat"), brain(new Brain())
{
	std::cout << "Cat Default Constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat &copy) : AAnimal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat Default Destructor called" << std::endl;
	delete this->brain;
	return;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Cat Assignment Operator called" << std::endl;
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

std::string Cat::getType(void) const
{
	return (this->type);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow Meeeeeoooooooowwwwwwwwww" << std::endl;
	return;
}

void Cat::addIdea(const std::string &idea)
{
	this->brain->addIdea(idea);
	return;
}

void Cat::sayIdeas(void)
{
	this->brain->sayIdeas();
	return;
}
