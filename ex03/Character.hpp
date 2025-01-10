/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 16:05:49 by samartin          #+#    #+#             */
/*   Updated: 2025/01/08 16:02:53 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# ifndef CMAXMAT
#  define CMAXMAT 4
# endif
# include <stdint.h>
# include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory [4];
	public:
		Character();
		Character(std::string const & name);
		Character(const Character& orig);
		~Character();
		Character& operator=(const Character& orig);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria* getMateriaAtIdx(int idx);
};

#endif
