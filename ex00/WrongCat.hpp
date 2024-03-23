/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:00:54 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 19:20:56 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP
#ifndef WrongAnimal_HPP
#include "WrongAnimal.hpp"
#endif
#include <iostream>
#include <ostream>
#include <string>

class WrongCat : public WrongAnimal
{
  public:
	// Constructors and Destructors
	WrongCat(void);
	WrongCat(const WrongCat &copy);
	~WrongCat();

	// Overloaded Operators
	WrongCat &operator=(const WrongCat &rhs);

	// Public Member Functions
	std::string getType(void) const;
	void makeSound(void) const;

  private:
	std::string type;
};

#endif
