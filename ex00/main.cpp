/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:32:09 by makacem           #+#    #+#             */
/*   Updated: 2023/07/05 10:36:15 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>


int main()
{
    try
    {
        std::vector<int> test;
        
        test.push_back(10);
        test.push_back(20);
        test.push_back(30);
        test.push_back(40);
        
        std::cout << easyfind(test, 20) << std::endl;
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	
    try
    {
        std::list<int> test;
        
        test.push_back(10);
        test.push_back(20);
        test.push_back(30);
        test.push_back(40);
        
        std::cout << easyfind(test, 5) << std::endl;
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}