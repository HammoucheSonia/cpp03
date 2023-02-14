/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:25:25 by shammouc          #+#    #+#             */
/*   Updated: 2023/02/01 17:25:27 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <ostream>

int main()
{
    ScavTrap one = ScavTrap("one");
    one.attack("hello");
    one.attack("salut");
    one.guardGate();

    return (0);
}