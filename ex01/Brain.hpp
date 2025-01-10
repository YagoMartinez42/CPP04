/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:58:50 by samartin          #+#    #+#             */
/*   Updated: 2024/12/19 12:17:13 by samartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# ifndef MAXIDEAS
#  define MAXIDEAS 100
# endif
# include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain& orig);
		~Brain();
		Brain& operator=(const Brain& orig);
		void addIdea(std::string ideaP);
		std::string getIdea(int idx) const;
		void removeIdea(int idx);
	private:
		std::string ideas[MAXIDEAS];
};

#endif
