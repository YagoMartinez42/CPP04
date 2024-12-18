/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2024/12/16 15:23:12 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "";
	std::cout << "Generic Wrong Animal instance created with empty type." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string typeP) : type(typeP)
{
	std::cout << "Generic Wrong Animal instance created with " << this->type << " type." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& orig)
{
	std::cout << "Generic Wrong Animal instance created as a copy of another." << std::endl;
	this->type = orig.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Generic Wrong Animal instance destroyed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& orig)
{
	std::cout << "Asignment operator for Generic Wrong Animal called" << std::endl;
	if (this != &orig)
		this->type = orig.type;
	return (*this);
}

std::string const & WrongAnimal::getType() const
{
	std::string const & typeRef = this->type;
	return(typeRef);
}

void WrongAnimal::setType(std::string typeP)
{
	this->type = typeP;
}

void WrongAnimal::makeSound() const
{
	std::cout << "The " << this->type << " barks. Everybody knows every animal barks." << std::endl;
}
