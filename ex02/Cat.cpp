/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2025/01/10 14:18:02 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors (Default and copy) and destructor */

Cat::Cat() : AAnimal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat instance created." << std::endl;
}

Cat::Cat(const Cat& orig) : AAnimal(orig)
{
	this->type = orig.getType();
	this->_brain = new Brain(orig.getFullBrain());
	std::cout << "Cat instance created as a copy of another." << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat instance destroyed." << std::endl;
}

/* Asignment operator function */

Cat& Cat::operator=(const Cat& orig)
{
	std::cout << "Asignment operator for Cat called." << std::endl;
	if (this != &orig)
	{
		this->type = orig.getType();
		delete this->_brain;
		this->_brain = new Brain(orig.getFullBrain());
	}
	return (*this);
}

/* Utility member functions */

void Cat::makeSound() const
{
	std::cout << "The " << this->type << " meows." << std::endl;
}

Brain & Cat::getFullBrain() const
{
	return (*(this->_brain));
}