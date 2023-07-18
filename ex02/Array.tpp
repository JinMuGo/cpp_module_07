/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:22:38 by jgo               #+#    #+#             */
/*   Updated: 2023/07/18 18:01:38 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <class T>
Array<T>::Array(void) : arr_(NULL), size_(0) {
	std::cout << ARR_DFLT_CTOR << std::endl;
};

template <class T>
Array<T>::Array(const unsigned int& n) : size_(n) {
	std::cout << ARR_CTOR << std::endl;
	this->arr_ = new T[n];
}

template <class T>
Array<T>::Array(const int& n) : size_(n) {
	std::cout << ARR_CTOR << std::endl;
	if (n < 0)
		throw Array<T>::CantNegativeException();
	this->arr_ = new T[n];
}

template <class T>
Array<T>::Array(const Array& obj) : arr_(NULL), size_(obj.size()) {
	std::cout << ARR_CPY_CTOR << std::endl;
	if (this != &obj)
		*this = obj;
}

template <class T>
Array<T>::~Array(void) {
	std::cout << ARR_DTOR << std::endl;
	if (this->arr_) {
		delete[] arr_;
		arr_ = NULL;
		const_cast<std::size_t&>(this->size_) = 0;
	}
}

template <class T>
T& Array<T>::operator[](const std::size_t idx) {
	if (idx >= this->size_)
		throw Array<T>::OutOfRangeException();
	return (this->arr_[idx]);
}

template <class T>
const T& Array<T>::operator[](const std::size_t idx) const {
	if (idx >= this->size_)
		throw Array<T>::OutOfRangeException();
	return (this->arr_[idx]);
}

template <class T>
Array<T>& Array<T>::operator=(const Array& obj) {
	std::cout << ARR_CPY_ASGMT_OP_CALL << std::endl;
	if (this != &obj) {
		if (this->arr_) {
			delete[] arr_;
			arr_ = NULL;
		}
		const_cast<std::size_t&>(this->size_) = obj.size() ? obj.size() : 0;
		if (this->size_)
			this->arr_ = new T[this->size_];
		for (std::size_t i = 0; i < this->size_; ++i)
			this->arr_[i] = obj[i];
	}
	return (*this);
}

template <class T>
std::size_t Array<T>::size() const {
	return (this->size_);
}

template <class T>
const char* Array<T>::OutOfRangeException::what() const throw() {
	return ("Out of Range!");
}

template <class T>
const char* Array<T>::CantNegativeException::what() const throw() {
	return ("the argument can\'t negative!");
}

#endif