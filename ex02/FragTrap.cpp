#include "FragTrap.hpp"

std::string name    = "FragTrap";
unsigned int hitpoints  = 100;
unsigned int energy_points = 100;
unsigned int attack_damage = 30;

FragTrap::FragTrap(void) : ClapTrap(name, hitpoints, energy_points, attack_damage)
{
    std::cout << " FragTrap Constructor default is called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, hitpoints, energy_points, attack_damage)
{
    std::cout << "FragTrap Constructor is called\n";
}

FragTrap::FragTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad) 
: ClapTrap(name, hitpoints, energy_points, attack_damage)
{
    std::cout << "FragTrap constructor called for\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy constructor called\n"    
}

FragTrap    &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " rises its hand requesting a high five" << std::endl;
    std::cout << "PRESS ENTER TO HIGH FIVE" << std::endl;
    getchar();
    std::cout << "CLAP !\n";
}

void FragTrap::getInfo(void) {
  std::cout << "FragTrap: " << getName() << std::endl
            << "Hit points: " << getHitpoints() << std::endl
            << "Energy points: " << getEnergyPoints() << std::endl
            << "Attack damage: " << getAttackDamage() << std::endl;
}