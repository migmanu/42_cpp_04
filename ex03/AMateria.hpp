/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 23:06:21 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/24 23:07:24 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
#define AMateria_HPP
#include <iostream>
#include <ostream>
#include <string>

class AMateria
{
  public:
	// Constructors and Destructors
	AMateria(void);
	AMateria(const AMateria &copy);
	~AMateria(void);

	// Overloaded Operators
	AMateria &operator=(const AMateria &rhs);

  protected:

  private:
};

#endif
