#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
        std::string name;
        int         hitpoints;
        int         energy_points;
        int         attack_damage;
public:

    FragTrap(void);
    ~FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);
    FragTrap &operator=(const FragTrap &copy);
    FragTrap(std::string _name, unsigned int hp, unsigned int ep, unsigned int ad);

    void highFivesGuys(void);
    void getInfo(void);
};

#endif