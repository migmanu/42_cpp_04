/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:03:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/24 22:56:14 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : type("Dog"), brain(new Brain())
{
	std::cout << "Dog Default Constructor called" << std::endl;
	return;
}

Dog::Dog(const Dog &copy) : AAnimal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->brain = NULL;
	*this = copy;
	return;
}

Dog::~Dog(void)
{
	std::cout << "Dog Default Destructor called" << std::endl;
	if (this->brain)
	{
		delete this->brain;
		this->brain = NULL;
	}
	return;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	if (this->brain)
	{
		delete this->brain;
		this->brain = NULL;
	}
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

std::string Dog::getType(void) const
{
	return (this->type);
}

void Dog::makeSound(void) const
{
	std::cout << "Wuf wuf wuf!" << std::endl;
	return;
}

void Dog::addIdea(const std::string &idea)
{
	this->brain->addIdea(idea);
	return;
}

void Dog::sayIdeas()
{
	this->brain->sayIdeas();
	return;
}
