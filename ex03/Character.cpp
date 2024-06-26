/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:26:27 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/09 14:32:05 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "Character " << this->_name << " created" << std::endl;
}

Character::Character(Character const &src) : _name(src._name)
{
	*this = src;
	std::cout << "Character " << this->_name << " created" << std::endl;
}

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character " << this->_name << " destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "Character " << this->_name << " equipped with " << m->getType() << std::endl;
			return;
		}
	std::cout << "Character " << this->_name << " can't equip " << m->getType() << std::endl;
	delete m;
}

void Character::unequip(int i)
{
	if (this->_inventory[i])
	{
		std::cout << "Character " << this->_name << " dropped " << this->_inventory[i]->getType() << std::endl;
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	else
		std::cout << "Character can't drop " << this->_name << std::endl;
}

void Character::use(int i, ICharacter &target)
{
	if (this->_inventory[i])
	{
		this->_inventory[i]->use(target);
		std::cout << "Character " << this->_name << " uses " << this->_inventory[i]->getType() << std::endl;
	}
	else
		std::cout << "Character " << this->_name << " can't use" << std::endl;
}

std::string const &Character::getName() const
{
	return this->_name;
}
