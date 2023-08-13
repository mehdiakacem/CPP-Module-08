/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:01:47 by makacem           #+#    #+#             */
/*   Updated: 2023/08/13 15:33:07 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>

class Span
{
private:
	unsigned int maxSize;
	std::vector<int> integers;
public:
	void addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();
	void addNumber(int number);
	Span();
	~Span();
	Span(unsigned int N);
	Span(Span const &other);
	Span  &operator=(const Span &other);
};

#endif