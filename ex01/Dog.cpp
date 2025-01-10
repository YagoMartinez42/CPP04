/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2025/01/04 15:48:41 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors (Default and copy) and destructor */

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog instance created." << std::endl;
}

Dog::Dog(const Dog& orig) : Animal(orig)
{
	this->type = orig.getType();
	this->_brain = new Brain(orig.getFullBrain());
	std::cout << "Dog instance created as a copy of another." << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog instance destroyed." << std::endl;
}

/* Asignment operator function */

Dog& Dog::operator=(const Dog& orig)
{
	std::cout << "Asignment operator for Dog called" << std::endl;
	if (this != &orig)
	{
		this->type = orig.getType();
		delete this->_brain;
		this->_brain = new Brain(orig.getFullBrain());
	}
	return (*this);
}

/* Utility member functions*/

void Dog::makeSound() const
{
	std::cout << "The " << this->type << " barks." << std::endl;
}

Brain & Dog::getFullBrain() const
{
	return (*(this->_brain));
}