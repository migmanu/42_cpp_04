/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:44:05 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/24 12:40:14 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal")
{
	std::cout << "AAnimal Default Constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "AAnimal Copy Constructor called" << std::endl;
	*this = copy;
	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Default Destructor called" << std::endl;
	return;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "AAnimal Assignment Operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}
