/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:44:13 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/24 12:39:42 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP
#include <iostream>
#include <ostream>
#include <string>

class AAnimal
{
  public:
	// Constructors and Destructors
	AAnimal(void);
	AAnimal(const AAnimal &copy);
	virtual ~AAnimal();

	// Overloaded Operators
	AAnimal &operator=(const AAnimal &rhs);

	// Public Member Functions
	virtual std::string getType(void) const;
	virtual void makeSound(void) const = 0; // Pure virtual function

  protected:
	std::string type;
};

#endif
