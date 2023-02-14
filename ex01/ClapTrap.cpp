/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:25:45 by shammouc          #+#    #+#             */
/*   Updated: 2023/02/01 17:25:47 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <stdlib.h>


ClapTrap :: ClapTrap(std :: string name)
{
    std :: cout << "Default constructor called" << std :: endl;
    this->name = name;
    this->Hit_point = 10;
    this->Energy_point = 10;
    this->Attack_domage = 0;
}

ClapTrap :: ~ClapTrap(void)
{
    std :: cout << "Destructor called" << std ::endl;
}

//constructeur par copie
ClapTrap :: ClapTrap(const ClapTrap &src)
{
    std :: cout << "copy constructor called" << std :: endl;
    *this = src;
    return ;
}

ClapTrap &ClapTrap :: operator=(const ClapTrap &other)
{
    this->name = other.name;
    this->Hit_point = other.Hit_point;
    this->Energy_point = other.Energy_point;
    this->Attack_domage = other.Attack_domage;
    return (*this);
}


void ClapTrap :: takeDamage(unsigned int amount)
{
    int n = this->Hit_point - (this->Attack_domage + amount);
    if (this->Energy_point <= 0 || n < 0)
    {
        std :: cout << "ClapTrap n'a pas de point de vie pour faire cette action" << std :: endl;
        exit (EXIT_SUCCESS);
    }
    else 
    {
        this->Attack_domage += amount;
        this->Hit_point= this->Hit_point - this->Attack_domage;
        this->Energy_point--;
        std :: cout << "##### Apres une attaque #####" << std :: endl;
        std :: cout << "Hit points : " << this->Hit_point << std :: endl;
        std :: cout << "Energy points : " << this->Energy_point << std :: endl;
        std :: cout << "Attack damage : " << this->Attack_domage << std :: endl;
        std :: cout << "#############################" << std ::endl;
        std :: cout << "" << std :: endl;
    }
}

void ClapTrap :: beRepaired(unsigned int amount)
{
    this->Hit_point += amount;
    this->Energy_point -= 1;
    std :: cout << "##### Apres une reparation ######" << std ::endl;
    std :: cout << "Hit points : " << this->Hit_point << std :: endl;
    std :: cout << "Energy points : " << this->Energy_point << std :: endl;
    std :: cout << "#############################" << std ::endl;
    std :: cout << "" << std :: endl;
}

void ClapTrap :: attack(const std::string& target)
{
    if (this->Energy_point <= 0 || this->Hit_point <= 0)
    {
        std :: cout << "ClapTrap ne peut exécuter aucune action" << std :: endl;
        exit (EXIT_SUCCESS);
    }
    else 
    {
        unsigned amount = 1;
        takeDamage(amount);
        beRepaired(amount);
        std :: cout << "ClapTrap " << this->name <<  " attacks "\
        <<target << " causing " << this->Attack_domage << \
        " points of damage! "<< std :: endl;
    }
}
