/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:31:31 by makacem           #+#    #+#             */
/*   Updated: 2023/06/20 18:06:53 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

template<typename T>
int easyfind(T container, int i)
{
    if (std::find(container.begin(), container.end(), i) != container.end())
        return (*(std::find(container.begin(), container.end(), i)));
    else
        throw std::out_of_range("exception: no occurrence is found");
}

#endif