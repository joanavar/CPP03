#include "ScavTrap.hpp"
#include <iostream>

const std::string ScavTrap::_defName = "ScavTrap";
const unsigned int ScavTrap::_defHP = 100;
const unsigned int ScavTrap::_defEP = 50;
const unsigned int ScavTrap::_defAD = 20;

ScavTrap::ScavTrap(void) : ClapTrap(_defName, _defHP, _defEP, _defAD)
{
  std::cout << "ScavTrap default constructor called\n";
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(_defName, _defHP, _defEP, _defAD)
{
  std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad ) 
    : ClapTrap(name, hp, ep, ad)
{
  std::cout << "Constructor called for " << GREEN << getName() << RST << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(_defName, _defHP, _defEP, _defAD)
{
  std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called for " << GREEN << getName() << RST << std::endl;
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
    if(!_defEP)
    {
        std::cout << getClassName() << " " << GREEN << getName() << RST << RED << " can't attack. No energy points" RST <<std::endl;
        return ;
    }
    if (!_defAD)
    {
        std::cout << getClassName() << GREEN << getName() << RST << RED << " can't attack. No Damage" << RST <<std::endl;
        return ;
    }
    if (!_defHP)
    {
        std::cout << getClassName() << GREEN << getName() << RST << RED << " no hitpoints" << RST <<std::endl;
        exit(0);   
    }

    std::cout << getClassName() << GREEN << getName() << RST << " attacks " << target << " causing " << YELLOW <<  _attack_damage << RST << " points damage\n";
    
    //--(_defEP);
}

const std::string ScavTrap::getClassName(void) const { return "ScavTrap";}
