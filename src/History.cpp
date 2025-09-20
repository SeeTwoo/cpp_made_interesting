/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*   history.cpp                                         :+:     :+:    :+:   */
/*                                                     +:+ +:+        +:+     */
/*   By: seetwoo <marvin@42students.fr>              +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*   Created:                                           #+#    #+#            */
/*   Uptated:                                          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "History.hpp"

void	History::display() {
	for (_it = _history.begin(); _it != _history.end(); ++_it)
		std::cout << *_it << std::endl;
}

void	History::add(std::string command) {
	_history.push_back(command);
}
