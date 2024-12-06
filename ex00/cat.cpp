/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2024/12/06 15:17:28 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

/* Constructors (Default and copy) and destructor */

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat instance created." << std::endl;
}

Cat::Cat(const Cat& orig) : Animal(orig)
{
	std::cout << "Cat instance created as a copy of another." << std::endl;
	this->type = orig.type;
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
		this->type = orig.type;
	return (*this);
}

/* Utility member functions*/

void Cat::makeSound() const
{
	std::cout << "The" << this->type << "meows." << std::endl;
}
