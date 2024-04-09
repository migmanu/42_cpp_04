/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:59:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/04 00:12:41 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP
#include <iostream>
#include <ostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
  public:
	// Constructors and Destructors
	Ice(void);
	Ice(const Ice &src);
	~Ice(void);

	// Overloaded Operators
	Ice &operator=(const Ice &rhs);

	// Public Member Functions
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif
