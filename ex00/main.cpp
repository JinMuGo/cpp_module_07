/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:06:40 by jgo               #+#    #+#             */
/*   Updated: 2023/07/17 16:13:57 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

static inline void printWhatEver(void) {

	std::cout << " __      __  __                __    ____                             \n";
	std::cout << "/\\ \\  __/\\ \\/\\ \\              /\\ \\__/\\  _`\\                           \n";
	std::cout << "\\ \\ \\/\\ \\ \\ \\ \\ \\___      __  \\ \\ ,_\\ \\ \\L\\_\\  __  __     __   _ __   \n";
	std::cout << " \\ \\ \\ \\ \\ \\ \\ \\  _ `\\  /'__`\\ \\ \\ \\/\\ \\  _\\L /\\ \\/\\ \\  /'__`\\/\\`'__\\ \n";
	std::cout << "  \\ \\ \\_/ \\_\\ \\ \\ \\ \\ \\/\\ \\L\\.\\_\\ \\ \\_\\ \\ \\L\\ \\ \\ \\_/ |/\\  __/\\ \\ \\/  \n";
	std::cout << "   \\ `\\___x___/\\ \\_\\ \\_\\ \\__/.\\_\\\\ \\__\\\\ \\____/\\ \\___/ \\ \\____\\\\ \\_\\  \n";
	std::cout << "    '\\/__//__/  \\/_/\\/_/\\/__/\\/_/ \\/__/ \\/___/  \\/__/   \\/____/ \\/_/  \n";
	std::cout << "                                                                      \n";
}

static inline void defaultTest(void) {
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
}

static inline void myTest(void) {
	float a = 123.4f;
	float b = 987987.4324234f;
	double c = 424.24242242424;
	double d = 242.242422342;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
}

int main(void) {
	printWhatEver();
	std::cout << "===== defaultTest =====\n" << std::endl;
	defaultTest();
	std::cout << "\n===== myTest =====\n" << std::endl;
	myTest();
	return 0;
}
