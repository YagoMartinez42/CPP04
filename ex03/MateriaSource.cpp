/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:49:36 by samartin          #+#    #+#             */
/*   Updated: 2025/01/09 11:47:53 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Constructors (Default, set type, copy) and destructor */

MateriaSource::MateriaSource()
{
	std::cout << "Materia Source instance created." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& orig)
{
	for (int i = 0; i < SMAXMAT; i++)
		this->_library[i] = orig._library[i];
	std::cout << "Materia Source instance created as a copy of another." << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < SMAXMAT; i++)
	{
		if (this->_library[i])
			delete (this->_library[i]);
	}
	std::cout << "Materia Source instance destroyed." << std::endl;
}

/* Asignment operator function */

MateriaSource& MateriaSource::operator=(const MateriaSource& orig)
{
	std::cout << "Asignment operator for Materia Source called." << std::endl;
	if (this != &orig)
	{
		for (int i = 0; i < SMAXMAT; i++)
			this->_library[i] = orig._library[i];
	}
	return (*this);
}

/* Utility member functions*/

void MateriaSource::learnMateria(AMateria* materia)
{
	int i;

	for (i = 0; i < SMAXMAT; i++)
	{
		if (!(this->_library[i]))
		{
			this->_library[i] = materia;
			break;
		}
	}
	if (i == SMAXMAT)
		std::cout << "All Materia slots are already full on this source." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria* newMateria;

	if (type == "cure")
		newMateria = new Cure();
	else if(type == "ice")
		newMateria = new Ice();
	else
	{
		std::cout << "Unknown Materia type." << std::endl;
		newMateria = NULL;
	}
	return (newMateria);
}

void MateriaSource::listKnownMaterias()
{
	for (int i = 0; i < SMAXMAT; i++)
	{
		if (!(this->_library[i]))
			std::cout << "- " << this->_library[i]->getType() << std::endl;
	}
}
