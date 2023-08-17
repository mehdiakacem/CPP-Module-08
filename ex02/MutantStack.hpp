/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:43:23 by makacem           #+#    #+#             */
/*   Updated: 2023/08/17 19:38:17 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP

#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
public:
	MutantStack(){}
	~MutantStack()
	{}
	MutantStack(MutantStack const &other) : std::stack<T>(other)
    {
        *this = other;
        std::cout << "MutantStack copy constructor called\n";
    }
	MutantStack &operator=(const MutantStack &other)
    {
        if (this != &other)
        {
			std::stack<T>::operator=(other);
        }
        std::cout << "MutantStack copy assignment constructor called\n";
        return *this;
    }
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(){return this->c.begin();};
    iterator end(){return this->c.end();};
};


#endif