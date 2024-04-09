/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 23:06:21 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/04 00:42:13 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
#define AMateria_HPP
#include <iostream>
#include <ostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
  public:
	// Constructors and Destructors
	AMateria(void);
	AMateria(const AMateria &src);
	AMateria(const std::string &type);
	virtual ~AMateria(void);

	// Public Member Functions
	std::string const &getType();
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

  protected:
	std::string _type;
};

#endif
