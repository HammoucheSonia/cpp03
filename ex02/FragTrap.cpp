/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:39:20 by shammouc          #+#    #+#             */
/*   Updated: 2023/02/02 16:39:22 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap :: FragTrap(std :: string name) : ClapTrap(name)
{
    this->name = name;
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_domage = 30;
    std :: cout << "Default constructor FragTrap called" << std :: endl;
}

FragTrap :: ~FragTrap(void)
{
    std :: cout << "Destructor FragTrap called" << std ::endl;
}

void FragTrap :: highFivesGuys(void)
{
    if (this->Energy_point <= 0)
    {
        std :: cout << this->name << "n'a pas d'energie" << std :: endl;
        return ;
    }
    std :: cout << this->name << " une demande de high fives" << std :: endl;
    this->Energy_point -=1;
}