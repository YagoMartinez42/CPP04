/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:24:49 by samartin          #+#    #+#             */
/*   Updated: 2025/01/14 12:44:34 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include <cstring>

int main()
{
	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "|         TEST FROM SUBJECT         |" << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << "|    ADITIONAL TEST WITH 'GROUND'    |" << std::endl;
	std::cout << "=====================================" << std::endl;
	std::cout << std::endl;
	{
		MateriaSource* src = new MateriaSource();
		Ice* copyAbleIce = new Ice();
		Ice* iceCopy = new Ice(*copyAbleIce);
		AMateria* ground[128];
		Character cloud("Cloud");
		Character aerith("Aerith");
		Character sinraMinion1("Sinra Minion 1");
		std::memset(ground, 0, 128 * sizeof(AMateria*));
		std::cout << std::endl << "\033[32mWe put some instanced Materias (or instance new ones) in the Source:\033[0m" << std::endl << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(copyAbleIce);
		std::cout << std::endl << "\033[32mBut we can't repeat there the same exact instance.\033[0m" << std::endl << std::endl;
		src->learnMateria(copyAbleIce);
		src->learnMateria(new Ice());
		std::cout << std::endl << "\033[32mCan we set a fifth? (No).\033[0m" << std::endl << std::endl;
		src->learnMateria(iceCopy);
		std::cout << "\033[32mThe source known Materias are:\033[0m" << std::endl;
		src->listKnownMaterias();
		std::cout << std::endl << std::endl << "\033[32mHere come some Materias from the source, left in ground:\033[0m" << std::endl << std::endl;
		ground[0] = src->createMateria("ice");
		ground[1] = src->createMateria("cure");
		std::cout << std::endl << "\033[32mBut this Materia is not in the source (actually not defined at all).\033[0m" << std::endl << std::endl;
		ground[2] = src->createMateria("pyro");
		std::cout << std::endl << "\033[32mCloud equips these Materias:\033[0m" << std::endl << std::endl;
		cloud.equip(ground[0]);
		ground[0] = NULL;
		cloud.equip(ground[1]);
		ground[1] = NULL;
		cloud.equip(ground[2]);
		std::cout << std::endl << "\033[32mBut better leave some for the others...\033[0m" << std::endl << std::endl;
		ground[0] = cloud.getMateriaAtIdx(1);
		cloud.unequip(1);
		std::cout << std::endl << "\033[32mAerith equips the Cure:\033[0m" << std::endl << std::endl;
		aerith.equip(ground[0]);
		ground[0] = NULL;
		std::cout << std::endl << "\033[32mAnd we go for the first encounter.\033[0m" << std::endl << std::endl;
		cloud.use(0, sinraMinion1);
		aerith.use(0, cloud);
		std::cout << std::endl << "\033[32mThat's all.\033[0m" << std::endl << std::endl;
		delete (src);
		delete (iceCopy); //This one should have been rejected due source being full
	}
	return(0);
}
