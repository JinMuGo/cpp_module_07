/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:23:07 by jgo               #+#    #+#             */
/*   Updated: 2023/07/18 13:30:51 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Array.hpp"

static inline void printArray(void) {

	std::cout << " ______                                     \n";
	std::cout << "/\\  _  \\                                    \n";
	std::cout << "\\ \\ \\L\\ \\  _ __   _ __    __     __  __     \n";
	std::cout << " \\ \\  __ \\/\\`'__\\/\\`'__\\/'__`\\  /\\ \\/\\ \\    \n";
	std::cout << "  \\ \\ \\/\\ \\ \\ \\/ \\ \\ \\//\\ \\L\\.\\_\\ \\ \\_\\ \\   \n";
	std::cout << "   \\ \\_\\ \\_\\ \\_\\  \\ \\_\\\\ \\__/.\\_\\\\/`____ \\  \n";
	std::cout << "    \\/_/\\/_/\\/_/   \\/_/ \\/__/\\/_/ `/___/> \\ \n";
	std::cout << "                                     /\\___/ \n";
	std::cout << "                                     \\/__/  \n";
}

static inline void myTest(void) {
	std::cout << "\nint test\n";
	Array<int> a(5);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 66;
	a[4] = 123123;
	for (std::size_t i = 0; i < a.size(); ++i)
		std::cout << a[i] << std::endl;

	std::cout << "\nfloat test\n";
	Array<float> b(10);
	for (std::size_t i = 0; i < b.size(); ++i)
		b[i] = i + '~' + 0.123f;

	for (std::size_t i = 0; i < b.size(); ++i)
		std::cout << std::fixed << std::setprecision(3) << b[i] << std::endl;

	std::cout << "\nstring test\n";
	Array<std::string> c(3);
	Array<std::string> d(10);

	c[0] = "hi";
	c[1] = "i\'m";
	c[2] = "jgo";
	for (std::size_t i = 0; i < c.size(); ++i)
		std::cout << c[i] << " ";
	std::cout << std::endl;
	d[0] = "and";
	d[1] = "this is";
	d[2] = "stuff";
	d[3] = "like a";
	d[4] = "lorem ipsum";
	for (std::size_t i = 0; i < d.size(); ++i)
		std::cout << d[i] << " ";
	std::cout << std::endl;
	Array<std::string> f(c);
	for (std::size_t i = 0; i < f.size(); ++i)
		std::cout << f[i] << " ";
	std::cout << std::endl;
	c = d;
	for (std::size_t i = 0; i < c.size(); ++i)
		std::cout << c[i] << " ";
	std::cout << std::endl;
}

int main(void) {
	printArray();
	try {
		std::cout << "\n===== myTest =====\n" << std::endl;
		myTest();
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	system("leaks Array");
	return (0);
}