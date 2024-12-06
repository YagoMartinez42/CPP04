/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:58:50 by samartin          #+#    #+#             */
/*   Updated: 2024/12/05 15:02:43 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(std::string typeP);
		~Animal();
		std::string const & getType() const;
		void setType(std::string typeP);
		void Animal::makeSound() const;
	protected:
		std::string type;
};

#endif
