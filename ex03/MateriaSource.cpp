/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 23:20:08 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/04 00:38:16 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			materias[i] = rhs.materias[i];
	}
	return *this;
}

AMateria *MateriaSource::getMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (materias[i] && materias[i]->getType() == type)
			return materias[i];
	return NULL;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (materias[i] == NULL)
		{
			materias[i] = m;
			std::cout << "MateriaSource learned " << m->getType() << std::endl;
			return;
		}
	std::cout << "MateriaSource can't learn " << m->getType() << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	return NULL;
}
