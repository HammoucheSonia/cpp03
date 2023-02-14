/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:55:45 by shammouc          #+#    #+#             */
/*   Updated: 2023/02/02 13:55:47 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <ostream>

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(std :: string name);
        ~ScavTrap(void);
        void attack(std::string const& target);
        void guardGate();
};

#endif