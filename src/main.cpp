/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*   main.cpp                                            :+:     :+:    :+:   */
/*                                                     +:+ +:+        +:+     */
/*   By: seetwoo <marvin@42students.fr>              +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*   Created:                                           #+#    #+#            */
/*   Uptated:                                          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "History.hpp"

void	enableTerminalRawMode() {
	struct termios	orig;
	struct termios	raw;

	tcgetadttr(STDIN_FILENO, &orig);
	raw = orig;
	raw.c_lflag &= ~(ICANON | ECHO);
	raw.c_cc[VMIN] = 1;
	raw.c_cc[VTIME] = 0;
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

void	jppReadline(std::string &line, History &history) {

}

void	main_loop() {
	History		history;
	History		&historyRef = history;
	std::string	line;
	std::string	&lineRef = line;

	while (1) {
		jppReadline(lineRef, historyRef);
		history.add(line);
		if (line == "exit")
			break ;
	}
	history.display();
}

int	main() {
	main_loop();
	return 0;
}
