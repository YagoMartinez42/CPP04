/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2025/01/04 15:50:45 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors (Default and copy) and destructor */

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat instance created." << std::endl;
}

Cat::Cat(const Cat& orig) : Animal(orig)
{
	std::cout << "Cat instance created as a copy of another." << std::endl;
	this->type = orig.getType();
}

Cat::~Cat()
{
	std::cout << "Cat instance destroyed." << std::endl;
}

/* Asignment operator function */

Cat& Cat::operator=(const Cat& orig)
{
	std::cout << "Asignment operator for Cat called" << std::endl;
	if (this != &orig)
		this->type = orig.getType();
	return (*this);
}

/* Utility member functions*/

void Cat::makeSound() const
{
	std::cout << "The " << this->type << " meows." << std::endl;
}
