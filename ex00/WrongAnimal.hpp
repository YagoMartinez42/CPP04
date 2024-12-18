/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_animal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:27:55 by samartin          #+#    #+#             */
/*   Updated: 2024/12/16 13:21:31 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const std::string typeP);
		WrongAnimal(const WrongAnimal& orig);
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& orig);
		std::string const & getType() const;
		void setType(std::string typeP);
		void makeSound() const;
	protected:
		std::string type;
};

#endif