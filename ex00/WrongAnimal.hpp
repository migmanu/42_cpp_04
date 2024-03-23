/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:44:13 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 16:09:49 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <iostream>
#include <ostream>
#include <string>

class WrongAnimal
{
  public:
	// Constructors and Destructors
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &copy);
	virtual ~WrongAnimal();

	// Overloaded Operators
	WrongAnimal &operator=(const WrongAnimal &rhs);

	// Public Member Functions
	std::string getType(void) const;
	void makeSound(void) const;

  protected:
	std::string type;

  private:
};

#endif
