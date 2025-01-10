/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:27:55 by samartin          #+#    #+#             */
/*   Updated: 2024/12/23 15:09:52 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal& orig);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal& orig);
		std::string const & getType() const;
		void setType(std::string typeP);
		virtual void makeSound() const = 0;
	protected:
		std::string type;
};

#endif
