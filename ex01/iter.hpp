/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:41:48 by jgo               #+#    #+#             */
/*   Updated: 2023/07/19 09:20:00 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iter.h"

template <typename T1, typename T2>
void iter(T1* arr, const std::size_t& len, T2 f) {
	if (arr == NULL)
		return;
	for (std::size_t i = 0; i < len; i++)
		f(arr[i]);
};

template <typename T>
void printElem(const T& elem) {
	std::cout << elem << " ";
}

// template <class T>
// class Test {
//    private:
//    public:
// 	void operator()(const T& elem) {
// 		std::cout << elem << " ";
// 	};
// };


#endif