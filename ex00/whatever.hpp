/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:23:40 by jgo               #+#    #+#             */
/*   Updated: 2023/07/17 15:33:15 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include "whatever.h"

template <typename T>
void swap(T& a, T& b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T& a, T& b) {
	if (a < b)
		return (a);
	else if (a > b)
		return (b);
	else
		return (b);
}

template <typename T>
T max(T& a, T& b) {
	if (a < b)
		return (b);
	else if (a > b)
		return (a);
	else
		return (b);
}

#endif