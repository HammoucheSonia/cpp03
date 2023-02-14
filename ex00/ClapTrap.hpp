/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:25:36 by shammouc          #+#    #+#             */
/*   Updated: 2023/02/01 17:25:38 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <ostream>

class ClapTrap
{
    private:
        std :: string name;
        unsigned int Hit_point;
        unsigned int Energy_point;
        unsigned int Attack_domage;
    public:
        ClapTrap(std :: string); //Constructeur par defaut
        ~ClapTrap(void); // destructeur
        ClapTrap(const ClapTrap &src); // constructeur de copie
        ClapTrap& operator=(const ClapTrap &other); // operateur d'affectatio
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std :: string get_name(void)const;
};

#endif