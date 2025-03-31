#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    
        std::string _name;
        unsigned int         _hitpoints;
        unsigned int         _energy_points;
        unsigned int         _attack_damage;

        static const std::string _defName;
        static const unsigned int _defHP;
        static const unsigned int _defEP;
        static const unsigned int _defAD;

public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
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
    virtual const std::string getClassName(void) const;
};


#endif