/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:36:09 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 21:11:49 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor called" << std::endl;
	return;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = copy;
	return;
}

Brain::~Brain(void)
{
	std::cout << "Brain Default Destructor called" << std::endl;
	return;
}

Brain &Brain::operator=(const Brain &rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Brain Assignment Operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

void Brain::addIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i].empty())
		{
			this->ideas[i] = idea;
			std::cout << "Added idea: " << idea << std::endl;
			return;
		}
	}
	std::cout << "Brain is full, cannot add more ideas" << std::endl;
	return;
}

void Brain::sayIdeas(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (!this->ideas[i].empty())
			std::cout << "Idea " << i + 1 << ": " << this->ideas[i] << std::endl;
	}
}
