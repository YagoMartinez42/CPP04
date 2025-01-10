/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:31:48 by samartin          #+#    #+#             */
/*   Updated: 2024/12/31 15:34:31 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	/*
	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "|     This doesn't work anymore     |" << std::endl;
	std::cout << "=====================================" << std::endl;
	{
		const AAnimal* a = new AAnimal();
		a->makeSound();
		delete a;
	}*/

	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "|         TEST FROM SUBJECT         |" << std::endl;
	std::cout << "=====================================" << std::endl;
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		std::cout << "Object j is a " << j->getType() << "." << std::endl;
		std::cout << "Object i is a " << i->getType() << "." << std::endl;
		i->makeSound();
		j->makeSound();
		delete j;
		delete i;
	}
	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "|    IDEA FILL AND DEEP COPY TEST   |" << std::endl;
	std::cout << "=====================================" << std::endl;
	{
		Dog*	toby = new Dog();
		Dog*	mako = new Dog();
		Cat*	michi = new Cat();
		int		b = 0;

		toby->getFullBrain().addIdea("I'm hungry.");
		toby->getFullBrain().addIdea("I smell something funny.");
		michi->getFullBrain().addIdea("I'll go sleep a bit.");
		michi->getFullBrain().addIdea("I wonder if that think is huntable.");
		*mako = *toby;
		mako->getFullBrain().addIdea("I'll call my human until she comes here.");
		std::cout << std::endl;
		while (b < 100 && toby->getFullBrain().getIdea(b) != "")
		{
			std::cout << toby->getType() << " 'toby' has the idea: " << toby->getFullBrain().getIdea(b) << std::endl;
			b++;
		}
		std::cout << std::endl;
		b = 0;
		while (b < 100 && michi->getFullBrain().getIdea(b) != "")
		{
			std::cout << michi->getType() << " 'michi' has the idea: " << michi->getFullBrain().getIdea(b) << std::endl;
			b++;
		}
		std::cout << std::endl;
		b = 0;
		while (b < 100 && mako->getFullBrain().getIdea(b) != "")
		{
			std::cout << mako->getType() << " 'mako' has the idea: " << mako->getFullBrain().getIdea(b) << std::endl;
			b++;
		}
		std::cout << std::endl;

		Dog* pipo = new Dog(*toby);

		std::cout << std::endl;
		b = 0;
		while (b < 100 && pipo->getFullBrain().getIdea(b) != "")
		{
			std::cout << pipo->getType() << " 'pipo' has the idea: " << pipo->getFullBrain().getIdea(b) << std::endl;
			b++;
		}
		std::cout << std::endl;

		delete toby;
		delete mako;
		delete michi;
		delete pipo;
	}
	return (0);
}