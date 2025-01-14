/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:33:19 by samartin          #+#    #+#             */
/*   Updated: 2025/01/13 14:50:27 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <cstring>

/* Constructors (Default, set type, copy) and destructor */

Character::Character()
{
	this->_name = "";
	std::memset(this->_inventory, 0, CMAXMAT * sizeof(AMateria*));
	std::cout << "Character instance created with no name." << std::endl;
}

Character::Character(std::string const & name)
{
	this->_name = name;
	std::memset(this->_inventory, 0, CMAXMAT * sizeof(AMateria*));
	std::cout << "Character " << name << " instance created." << std::endl;
}

Character::Character(const Character& orig)
{
	this->_name = orig._name;
	for (int i = 0; i < CMAXMAT; i++)
		this->_inventory[i] = orig._inventory[i]->clone();
	std::cout << "Character instance created as a copy of another." << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < CMAXMAT; i++)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
	}
	std::cout << "Character instance destroyed." << std::endl;
}

/* Asignment operator function */

Character& Character::operator=(const Character& orig)
{
	std::cout << "Asignment operator for Character called." << std::endl;
	if (this != &orig)
	{
		this->_name = orig._name;
		for (int i = 0; i < CMAXMAT; i++)
			this->_inventory[i] = orig._inventory[i]->clone();
	}
	return (*this);
}

/* Utility member functions*/

std::string const & Character::getName() const
{
	std::string const & typeRef = this->_name;
	return(typeRef);
}

void Character::equip(AMateria* m)
{
	int i;

	if (!m)
		return;
	for (i = 0; i < CMAXMAT; i++)
	{
		if (!(this->_inventory[i]))
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " equiped a " << m->getType() << " Materia in inventory slot " << i << "." << std::endl;
			break;
		}
	}
	if (i == CMAXMAT)
		std::cout << this->_name << "'s inventory is already full of materias." << std::endl;
}

void Character::unequip(int idx)
{
	if (this->_inventory[idx])
	{
		std::cout << this->_name << " unequiped a " << this->_inventory[idx]->getType() << " Materia from inventory slot " << idx << "." << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << this->_name << "'s inventory has no materia in that slot." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < CMAXMAT && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << this->_name << "'s inventory has no materia in that slot." << std::endl;
}

AMateria* Character::getMateriaAtIdx(int idx)
{
	if (idx >= 0 && idx < CMAXMAT)
		return (this->_inventory[idx]);
	return (NULL);
}
