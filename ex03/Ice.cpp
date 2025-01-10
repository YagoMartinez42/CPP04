/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:38:49 by samartin          #+#    #+#             */
/*   Updated: 2025/01/08 16:09:15 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

/* Constructors (Default, set type, copy) and destructor */

Ice::Ice()
{
	this->_type = "Ice";
	std::cout << "Ice Materia instance created." << std::endl;
}

Ice::Ice(const Ice& orig)
{
	this->_type = orig.getType();
	std::cout << "Ice Materia instance created as a copy of another." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Materia instance destroyed." << std::endl;
}

/* Asignment operator function */

Ice& Ice::operator=(const Ice& orig)
{
	std::cout << "Asignment operator for Ice Materia called." << std::endl;
	if (this != &orig)
		this->_type = orig.getType();
	return (*this);
}

/* Utility member functions*/

Ice* Ice::clone() const
{
	Ice* cloned = new Ice();

	return (cloned);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
