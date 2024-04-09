/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:04:43 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/03 20:08:42 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
	std::cout << "AMateria default constructor init" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria parameterized constructor init, type:" << this->_type << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria " << this->_type << " destrucor called" << std::endl;
}

std::string const &AMateria::getType()
{
	return this->_type;
}

AMateria *AMateria::clone() const
{
	return (AMateria *)this;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}
