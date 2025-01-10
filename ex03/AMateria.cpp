/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:28:52 by samartin          #+#    #+#             */
/*   Updated: 2025/01/08 16:00:10 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

/* Constructors (Default, set type, copy) and destructor */

AMateria::AMateria()
{
	this->_type = "";
	std::cout << "Generic Materia instance created with empty type." << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	std::cout << "Generic Materia instance created with " << type << " type." << std::endl;
}

AMateria::AMateria(const AMateria& orig)
{
	std::cout << "Generic Materia instance created as a copy of another." << std::endl;
	this->_type = orig.getType();
}

AMateria::~AMateria()
{
	std::cout << "Generic Materia instance destroyed." << std::endl;
}

/* Asignment operator function */

AMateria& AMateria::operator=(const AMateria& orig)
{
	std::cout << "Asignment operator for Generic Materia called." << std::endl;
	if (this != &orig)
		this->_type = orig.getType();
	return (*this);
}

/* Utility member functions*/

std::string const & AMateria::getType() const
{
	std::string const & typeRef = this->_type;
	return(typeRef);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Generic materia used over " << target.getName()  << ", what a waste." << std::endl;
}
