/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2024/12/16 16:22:58 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "Cat";
	std::cout << "Wrong Cat instance created with empty type." << std::endl;
}

WrongCat::WrongCat(const std::string typeP) : WrongAnimal(typeP)
{
	std::cout << "Wrong Cat instance created with " << this->type << " type." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat instance destroyed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& orig)
{
	std::cout << "Asignment operator for Cat called" << std::endl;
	if (this != &orig)
		this->type = orig.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "The" << this->type << "meows." << std::endl;
}