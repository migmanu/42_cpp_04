/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:03:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 17:01:21 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : type("WrongCat")
{
	std::cout << "WrongCat Default Constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = copy;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Default Destructor called" << std::endl;
	return;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "WrongCat Assignment Operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow Meeeeeoooooooowwwwwwwwww" << std::endl;
	return;
}
