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
    ClapTrap(std::string _name);
    ClapTrap(const ClapTrap &copy);
    ClapTrap &operator=(const ClapTrap &other);
    ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad);

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void) const;
    unsigned int    getHitpoints(void) const;
    unsigned int    getEnergyPoints(void) const;
    unsigned int    getAttackDamage(void) const;

    void    setAttackDamage(unsigned int points);
};


#endif