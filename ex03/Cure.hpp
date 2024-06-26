/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:11:28 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/04 00:12:33 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP
#include <iostream>
#include <ostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
  public:
	// Constructors and Destructors
	Cure(void);
	Cure(const Cure &src);
	~Cure(void);

	// Overloaded Operators
	Cure &operator=(const Cure &rhs);

	// Public Member Functions
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
