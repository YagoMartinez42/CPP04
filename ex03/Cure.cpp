/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:05:02 by samartin          #+#    #+#             */
/*   Updated: 2025/01/13 14:30:47 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

/* Constructors (Default, set type, copy) and destructor */

Cure::Cure()
{
	this->_type = "cure";
	std::cout << "Cure Materia instance created." << std::endl;
}

Cure::Cure(const Cure& orig)
{
	/* If Cure Class is expanded, there should be something to fill in a copy.
	 At the moment, all Cure Materias are completely equal. */
	(void)orig;
	this->_type = "cure";
	std::cout << "Cure Materia instance created as a copy of another." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Materia instance destroyed." << std::endl;
}

/* Asignment operator function */

Cure& Cure::operator=(const Cure& orig)
{
	std::cout << "Asignment operator for Cure Materia called." << std::endl;
	if (this != &orig)
		this->_type = orig.getType();
	return (*this);
}

/* Utility member functions*/

Cure* Cure::clone() const
{
	Cure* cloned = new Cure();

	return (cloned);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
