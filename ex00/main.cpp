/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:31:48 by samartin          #+#    #+#             */
/*   Updated: 2024/12/18 12:14:09 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "|   INSTANCE AND INHERITANCE TEST   |" << std::endl;
	std::cout << "=====================================" << std::endl;
	{
		Animal nothing = Animal();
		Animal rabbit1 = Animal("Rabbit");
		Animal rabbit2 = Animal(rabbit1);
		Dog dog = Dog();
		Cat cat = Cat();

		nothing.makeSound();
		rabbit1.makeSound();
		rabbit2.makeSound();
		dog.makeSound();
		cat.makeSound();
	}
	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "|         TEST FROM SUBJECT         |" << std::endl;
	std::cout << "=====================================" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
	}

	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "| FROM HERE ON, EVERYTHING IS WRONG |" << std::endl;
	std::cout << "=====================================" << std::endl;
{
	WrongAnimal *cat = new WrongCat();
	WrongAnimal *f = new WrongAnimal("Rabbit");

	cat->makeSound();
	f->makeSound();
	delete cat;
	delete f;
	return (0);
}
}
