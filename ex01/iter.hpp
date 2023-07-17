/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:41:48 by jgo               #+#    #+#             */
/*   Updated: 2023/07/17 15:59:03 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include "iter.h"

template <typename T>
void iter(T* arr, const std::size_t &len, void (*f)(const T&))
{
	for (std::size_t i = 0; i < len; i++)
		f(arr[i]);
};

template <typename T>
void printElem(const T& elem)
{
	std::cout << elem << " ";
}

#endif