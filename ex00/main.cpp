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


#include "ClapTrap.hpp"
#include <ostream>

int main()
{
    ClapTrap one = ClapTrap("one");
    one.attack("chat");
    one.attack("chien");
    one.attack("elephant");
    one.attack("sepant");
    one.attack("une_individu");

    return (0);
}