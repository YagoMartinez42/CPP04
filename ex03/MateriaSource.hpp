/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 15:36:20 by samartin          #+#    #+#             */
/*   Updated: 2025/01/08 16:04:17 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <stdint.h>
# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# ifndef SMAXMAT
#  define SMAXMAT 4
# endif

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _library [SMAXMAT];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& orig);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource& orig);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
		void listKnownMaterias();
};

#endif