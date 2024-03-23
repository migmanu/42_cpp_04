/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:58:52 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/23 20:19:36 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP
#include <iostream>
#include <ostream>
#include <string>

class Brain
{
  public:
	// Constructors and Destructors
	Brain(void);
	Brain(const Brain &copy);
	~Brain(void);

	// Overloaded Operators
	Brain &operator=(const Brain &rhs);

	// Public Member Functions
	void addIdea(std::string idea);
	void sayIdeas();

  private:
	std::string ideas[100];
};

#endif
