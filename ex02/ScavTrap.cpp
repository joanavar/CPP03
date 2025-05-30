#include "ScavTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap(void) : ClapTrap(name, hitpoints, energy_points, attack_damage)
{
  std::cout << "ScavTrap default constructor called\n";
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, hitpoints, energy_points, attack_damage)
{
  std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad ) 
    : ClapTrap(name, hitpoints, energy_points, attack_damage)
{
  std::cout << "Constructor called for " << getName()  << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(name, hitpoints, energy_points, attack_damage)
{
  std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called for "  << getName() << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &copy)
        ClapTrap::operator=(copy);
    
    return *this;
}

void    ScavTrap::attack(const std::string &target)
{
    if(!energy_points)
    {
        std::cout << "ClapTrap "  << getName()  << " can't attack. No energy points" <<std::endl;
        return ;
    }
    if (!attack_damage)
    {
        std::cout << "ClapTrap "  << getName() << " can't attack. No Damage" <<std::endl;
        return ;
    }
    if (!hitpoints)
    {
        std::cout << "ClapTrap " << getName() << " no hitpoints" <<std::endl;
        exit(0);   
    }

    std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " <<  attack_damage << " points damage\n";
    
    --energy_points;
}