/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:23:27 by jgo               #+#    #+#             */
/*   Updated: 2023/07/17 16:42:48 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include "color.h"

#define ARR_DFLT_CTOR GREEN "- Array: Default constructor called" RESET
#define ARR_CTOR DARK_GREEN "- Array: constructor called" RESET
#define ARR_CTR LIGHT_CYAN "- Array: constructor called" RESET
#define ARR_CPY_CTOR CYAN "- Array: Copy constructor called" RESET
#define ARR_CPY_ASGMT_OP_CALL DARK_CYAN "- Array: Copy assignment operator called" RESET
#define ARR_DTOR ORANGE "- Array: Destructor called" RESET
#define ARR_MEMBER_FUNC_CALL "- Array member function called" 

#endif