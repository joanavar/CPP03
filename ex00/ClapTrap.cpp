#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):hitpoints(10), energy_points(10), attack_damage(0), name("unnamed")
{
    std::cout << "Constructor called\n";
}
ClapTrap::ClapTrap(void):hitpoints(10), energy_points(10), attack_damage(0), name("unnamed")
{
    std::cout << "Default constructor called\n";
}

ClapTrap::~ClapTrap(){ std::cout << "destructor called\n";}