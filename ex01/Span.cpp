/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 20:01:45 by makacem           #+#    #+#             */
/*   Updated: 2023/08/13 15:36:32 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	Span::addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->integers.size() + std::distance(begin, end) <= this->maxSize)
		this->integers.insert(integers.end(), begin, end);
	else
		throw std::exception();
}

int	Span::shortestSpan()
{
	int minSpan;
	int span;

	if(integers.size() < 2)
		throw std::exception();
	
	std::sort(integers.begin(), integers.end());

	minSpan = integers[1] - integers[0];
	for (size_t i = 2; i < integers.size(); i++)
	{
		span = integers[i] - integers[i-1];
		if (span < minSpan)
			minSpan = span;
	}

	return minSpan;
}

int	Span::longestSpan()
{
	int maxSpan;

	if(integers.size() < 2)
		throw std::exception();

	std::sort(integers.begin(), integers.end());
	maxSpan = integers[integers.size() - 1] - integers[0];
	return maxSpan;
}

void	Span::addNumber(int number)
{
	if (integers.size() < maxSize)
		integers.push_back(number);
	else
		throw std::runtime_error("maximum number of integers reached");
}

Span::Span(Span const &other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
    {
        this->maxSize = other.maxSize;
		this->integers = other.integers;
    }
    return *this;
}

Span::Span()
{
	std::cout << "Default constructor called\n";
}

Span::Span(unsigned int N)
: maxSize(N)
{
	std::cout << "Constructor called\n";
}

Span::~Span()
{
	std::cout << "Destructor callled\n";
}