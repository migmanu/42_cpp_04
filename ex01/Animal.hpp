/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:44:13 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 19:55:38 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP
#include <iostream>
#include <ostream>
#include <string>

class Animal
{
  public:
	// Constructors and Destructors
	Animal(void);
	Animal(const Animal &copy);
	virtual ~Animal();

	// Overloaded Operators
	Animal &operator=(const Animal &rhs);

	// Public Member Functions
	virtual std::string getType(void) const;
	virtual void makeSound(void) const;
	virtual void addIdea(const std::string &idea) = 0;

  protected:
	std::string type;
};

#endif
