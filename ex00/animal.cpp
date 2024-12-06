/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2024/12/06 15:17:59 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

/* Constructors (Default, set type, copy) and destructor */

Animal::Animal()
{
	this->type = "";
	std::cout << "Generic Animal instance created with empty type." << std::endl;
}

Animal::Animal(const std::string typeP) : type(typeP)
{
	std::cout << "Generic Animal instance created with " << this->type << " type." << std::endl;
}

Animal::Animal(const Animal& orig)
{
	std::cout << "Generic Animal instance created as a copy of another." << std::endl;
	this->type = orig.type;
}

Animal::~Animal()
{
	std::cout << "Generic Animal instance destroyed." << std::endl;
}

/* Asignment operator function */

Animal& Animal::operator=(const Animal& orig)
{
	std::cout << "Asignment operator for Generic Animal called" << std::endl;
	if (this != &orig)
		this->type = orig.type;
	return (*this);
}

/* Utility member functions*/

std::string const & Animal::getType() const
{
	std::string const & typeRef = this->type;
	return(typeRef);
}

void Animal::setType(std::string typeP)
{
	this->type = typeP;
}

void Animal::makeSound() const
{
	std::cout << "The" << this->type << "does his undescriptible sound." << std::endl;
}
