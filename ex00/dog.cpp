/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2024/12/06 15:17:10 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

/* Constructors (Default and copy) and destructor */

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog instance created." << std::endl;
}

Dog::Dog(const Dog& orig) : Animal(orig)
{
	std::cout << "Dog instance created as a copy of another." << std::endl;
	this->type = orig.type;
}

Dog::~Dog()
{
	std::cout << "Dog instance destroyed." << std::endl;
}

/* Asignment operator function */

Dog& Dog::operator=(const Dog& orig)
{
	std::cout << "Asignment operator for Dog called" << std::endl;
	if (this != &orig)
		this->type = orig.type;
	return (*this);
}

/* Utility member functions*/

void Dog::makeSound() const
{
	std::cout << "The" << this->type << "barks." << std::endl;
}
