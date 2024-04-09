/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:00:54 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/09 13:52:58 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP
#ifndef AAnimal_HPP
#include "AAnimal.hpp"
#endif
#ifndef Brain_HPP
#include "Brain.hpp"
#endif
#include <iostream>
#include <ostream>
#include <string>

class Dog : public AAnimal
{
  public:
	// Constructors and Destructors
	Dog(void);
	Dog(const Dog &copy);
	virtual ~Dog();

	// Overloaded Operators
	Dog &operator=(const Dog &rhs);

	// Public Member Functions
	std::string getType(void) const;
	void makeSound(void) const;
	void addIdea(const std::string &idea);
	void sayIdeas();

  private:
	std::string type;
	Brain *brain;
};

#endif
