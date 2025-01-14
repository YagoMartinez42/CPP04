/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:58:50 by samartin          #+#    #+#             */
/*   Updated: 2025/01/10 14:18:00 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructors (Default, copy) and destructor */

Brain::Brain()
{
	std::cout << "Be careful. The animal has grown a brain." << std::endl;
}

Brain::Brain(const Brain& orig)
{
	int i = 0;

	std::cout << "How can this be? A new animal brain that is the copy of another" << std::endl;
	while (i < MAXIDEAS)
	{
		this->ideas[i] = orig.getIdea(i);
		i++;
	}
}

Brain::~Brain()
{
	std::cout << "The animal is now brain-dead." << std::endl;
}

/* Asignment operator function */

Brain& Brain::operator=(const Brain& orig)
{
	int i = 0;

	std::cout << "Asignment operator for Brain called." << std::endl;
	if (this != &orig)
		{
			while (i < MAXIDEAS)
			{
				this->ideas[i] = orig.getIdea(i);
				i++;
			}
		}
	return (*this);
}

/* Utility member functions */

void Brain::addIdea(std::string ideaP)
{
	int i = 0;

	while (i < MAXIDEAS && ideas[i] != "")
		i++;
	if (i < MAXIDEAS)
		ideas[i] = ideaP;
	else
		std::cout << "This animal can't have more new ideas until forgets something." << std::endl;
}

std::string Brain::getIdea(int idx) const
{
	if (idx >= 0 && idx < MAXIDEAS)
		return(this->ideas[idx]);
	return ("");
}

void Brain::removeIdea(int idx)
{
	if (idx > 0 && idx < MAXIDEAS)
		this->ideas[idx] = "";
}
