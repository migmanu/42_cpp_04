/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 23:12:34 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/04/04 00:42:40 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMateriaSource_HPP
#define IMateriaSource_HPP

#include "AMateria.hpp"

class IMateriaSource
{
  public:
	// Constructors and Destructors
	virtual ~IMateriaSource(void) {};

	// Public Member Functions
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
