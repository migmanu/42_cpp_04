/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:00:54 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 21:09:37 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP
#ifndef Animal_HPP
#include "Animal.hpp"
#endif
#ifndef Brain_HPP
#include "Brain.hpp"
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
	void addIdea(const std::string &idea);
	void sayIdeas();

  private:
	std::string type;
	Brain *brain;
};

#endif
