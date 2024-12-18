/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:27:55 by samartin          #+#    #+#             */
/*   Updated: 2024/12/18 11:45:11 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string typeP);
		Animal(const Animal& orig);
		virtual ~Animal();
		Animal& operator=(const Animal& orig);
		std::string const & getType() const;
		void setType(std::string typeP);
		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif
