/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:41:24 by jgo               #+#    #+#             */
/*   Updated: 2023/07/19 09:20:30 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

static inline void printIter(void) {
	std::cout << "    __                    \n";
	std::cout << " __/\\ \\__                 \n";
	std::cout << "/\\_\\ \\ ,_\\    __   _ __   \n";
	std::cout << "\\/\\ \\ \\ \\/  /'__`\\/\\`'__\\ \n";
	std::cout << " \\ \\ \\ \\ \\_/\\  __/\\ \\ \\/  \n";
	std::cout << "  \\ \\_\\ \\__\\ \\____\\\\ \\_\\  \n";
	std::cout << "   \\/_/\\/__/\\/____/ \\/_/  \n";
	std::cout << "                          \n";
}

static inline void myTest(void) {
	const std::string sArr[] = {"iteration", "array", "hello"};
	const int iArr[] = {4, 2, 2, 4};
	const float fArr[] = {13.23f, 15.41f, 59.39999999f};

	::iter(sArr, sizeof(sArr) / sizeof(sArr[0]), printElem<std::string>);
	std::cout << std::endl;
	::iter(iArr, sizeof(iArr) / sizeof(iArr[0]), printElem<int>);
	std::cout << std::endl;
	::iter(fArr, sizeof(fArr) / sizeof(fArr[0]), printElem<float>);
	std::cout << std::endl;

	// Test<float> test;
	// ::iter(fArr, sizeof(fArr) / sizeof(fArr[0]), test);
	// std::cout << std::endl;
}

int main(void) {
	printIter();
	myTest();
	return (0);
}