#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    
        std::string name;
        int         hitpoints;
        int         energy_points;
        int         attack_damage;

public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
};


#endif