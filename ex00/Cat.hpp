/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:00:54 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 19:20:27 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP
#ifndef Animal_HPP
#include "Animal.hpp"
#endif
#include <iostream>
#include <ostream>
#include <string>

class Cat : public Animal
{
  public:
	// Constructors and Destructors
	Cat(void);
	Cat(const Cat &copy);
	~Cat();

	// Overloaded Operators
	Cat &operator=(const Cat &rhs);

	// Public Member Functions
	std::string getType(void) const;
	void makeSound(void) const;

  private:
	std::string type;
};

#endif
