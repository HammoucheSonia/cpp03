/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:55:53 by shammouc          #+#    #+#             */
/*   Updated: 2023/02/02 13:55:55 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <stdlib.h>
#include <iostream>


ScavTrap :: ScavTrap(std :: string name) : ClapTrap(name)
{
    this->name = name;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_domage = 20;
    std :: cout << "Default constructor ScavTrap called" << std :: endl;
}

ScavTrap :: ~ScavTrap(void)
{
    std :: cout << "Destructor ScavTrap called" << std ::endl;
}

void ScavTrap :: attack(std::string const& target)
{
    if (this->Energy_point <= 0)
    {
        std :: cout << this->name << "n'a plus d energie" << std :: endl;
        exit(EXIT_SUCCESS);
    }
    std :: cout << "ScavTrap " << this->name <<  " attacks "\
        <<target << " causing " << this->Attack_domage << \
        " points of damage! "<< std :: endl;
}

void ScavTrap :: guardGate()
{
    std :: cout << this->name << " ScavTrap est entré en mode Gate keeper" << std :: endl;
}