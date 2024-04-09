/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:22:06 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/04 00:32:12 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_HPP
#define Character_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
class Character : public ICharacter
{
  public:
	// Constructors and Destructors
	Character(void);
	Character(std::string const &name);
	Character(const Character &src);
	virtual ~Character(void);

	// Overloaded Operators
	Character &operator=(const Character &rhs);

	// Public Member Functions
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

  private:
	std::string _name;
	AMateria *_inventory[4];
};

#endif
