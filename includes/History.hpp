/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*   history.hpp                                         :+:     :+:    :+:   */
/*                                                     +:+ +:+        +:+     */
/*   By: seetwoo <marvin@42students.fr>              +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*   Created:                                           #+#    #+#            */
/*   Uptated:                                          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef HISTORY_HPP
# define HISTORY_HPP

#include <string>
#include <vector>

class History {
	private :
		std::vector<std::string>			_history;
		std::vector<std::string>::iterator	_it;
	public :
		void	display();
		void	add(std::string command);
};

#endif
