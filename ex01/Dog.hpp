/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:00:54 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 15:38:24 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP
#ifndef Animal_HPP
#include "Animal.hpp"
#endif
#include <iostream>
#include <ostream>
#include <string>

class Dog : public Animal
{
  public:
	// Constructors and Destructors
	Dog(void);
	Dog(const Dog &copy);
	~Dog();

	// Overloaded Operators
	Dog &operator=(const Dog &rhs);

	// Public Member Functions
	std::string getType(void) const;
	void makeSound(void) const;

  protected:
	std::string type;

  private:
};

#endif