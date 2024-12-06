/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_cat.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:29:40 by samartin          #+#    #+#             */
/*   Updated: 2024/11/28 17:30:23 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrong_cat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "";
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

