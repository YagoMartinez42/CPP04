/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2025/01/04 15:49:06 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* Constructors (Default, set type, copy) and destructor */

AAnimal::AAnimal()
{
	this->type = "";
	std::cout << "Generic Animal instance created with empty type." << std::endl;
}

AAnimal::AAnimal(const AAnimal& orig)
{
	std::cout << "Generic Animal instance created as a copy of another." << std::endl;
	this->type = orig.getType();
}

AAnimal::~AAnimal()
{
	std::cout << "Generic Animal instance destroyed." << std::endl;
}

/* Asignment operator function */

AAnimal& AAnimal::operator=(const AAnimal& orig)
{
	std::cout << "Asignment operator for Generic Animal called" << std::endl;
	if (this != &orig)
		this->type = orig.getType();
	return (*this);
}

/* Utility member functions*/

std::string const & AAnimal::getType() const
{
	std::string const & typeRef = this->type;
	return(typeRef);
}

void AAnimal::setType(std::string typeP)
{
	this->type = typeP;
}

void AAnimal::makeSound() const
{
	std::cout << "The " << this->type << " does his undescriptible sound." << std::endl;
}
