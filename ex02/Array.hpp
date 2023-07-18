/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:23:40 by jgo               #+#    #+#             */
/*   Updated: 2023/07/18 13:30:55 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "Array.h"

template <class T>
class Array {
   private:
	T* arr_;
	const std::size_t size_;

	class OutOfRangeException : public std::exception {
	   public:
		virtual const char* what() const throw();
	};

   public:
	Array();
	Array(const unsigned int& n);
	Array(const Array& obj);
	~Array();
	std::size_t size() const;
	T& operator[](const std::size_t idx);
	const T& operator[](const std::size_t idx) const;
	Array& operator=(const Array& obj);
};

#include "Array.tpp"

#endif
