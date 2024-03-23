/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:03:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 15:34:49 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : type("Cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
	return;
}

Cat::Cat(const Cat &copy) : Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
	return;
}

Cat::~Cat(void)
{
	std::cout << "Cat Default Destructor called" << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Assignment Operator called" << std::endl;
	this->type = rhs.type;
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
