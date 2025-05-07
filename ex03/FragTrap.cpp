#include "FragTrap.hpp"

const std::string FragTrap::_defName = "FragTrap";
const unsigned int FragTrap::_defHP = 100;
const unsigned int FragTrap::_defEP = 100;
const unsigned int FragTrap::_defAD = 30;

FragTrap::FragTrap(void) : ClapTrap("FragTrap", _defHP, _defEP, _defAD)
{
    std::cout << "FragTrap Constructor default is called\n";
}

FragTrap::~FragTrap(void)
{
  std::cout << "FragTrap destructor for " << _name << " called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, _defHP, _defEP, _defAD)
{
    std::cout << "FragTrap Constructor is called\n";
}

FragTrap::FragTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad) 
: ClapTrap(name, hp, ep, ad)
{
    std::cout << "FragTrap constructor called for\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy constructor called\n";    
}

FragTrap    &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
        ClapTrap::operator=(copy);
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << getClassName() << getName() << " rises its hand requesting a high five" << std::endl;
    std::cout << "PRESS ENTER TO HIGH FIVE " << std::endl;
    getchar();
    std::cout << "CLAP !\n";
}

const std::string FragTrap::getClassName(void) const { return "FragTrap";}
