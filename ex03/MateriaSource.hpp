/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 23:18:18 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/04 00:40:46 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
#define MateriaSource_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  public:
	// Constructors and Destructors
	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(MateriaSource const &);

	// Overloaded Operators
	MateriaSource &operator=(MateriaSource const &);

	// Public Member Functions
	AMateria *getMateria(std::string const &type);
	AMateria *createMateria(std::string const &type);
	void learnMateria(AMateria *);
private:
	AMateria *materias[4];
};

#endif
