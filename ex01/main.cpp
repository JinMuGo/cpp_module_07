/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:41:24 by jgo               #+#    #+#             */
/*   Updated: 2023/07/17 16:12:08 by jgo              ###   ########.fr       */
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

	::iter(sArr, sizeof(sArr) / sizeof(sArr[0]), printElem);
	std::cout << std::endl;
	::iter(iArr, sizeof(iArr) / sizeof(iArr[0]), printElem);
	std::cout << std::endl;
	::iter(fArr, sizeof(fArr) / sizeof(fArr[0]), printElem);
	std::cout << std::endl;
}

int main(void) {
	printIter();
	myTest();
	return (EXIT_SUCCESS);
}