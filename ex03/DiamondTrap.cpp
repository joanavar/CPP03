#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

const std::string DiamondTrap::_defName = "NoNameDiamondTrap";
const unsigned int DiamondTrap::_defHP = FragTrap::_defHP;
const unsigned int DiamondTrap::_defEP = ScavTrap::_defEP;
const unsigned int DiamondTrap::_defAD = FragTrap::_defAD;

DiamondTrap::DiamondTrap(void)
: ClapTrap(_defName + "ClapName", _defHP, _defEP, _defAD), _name(_defName)
{
    std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called for " << _defName << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "ClapName", _defHP, _defEP, _defAD), _name(name)
{
    std::cout << "DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad)
: ClapTrap(name + " ClapName", hp, ep, ad)
{
  std::cout << "DiamondTrap Constructor called for " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
: ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;

    if (this != &copy)
        ClapTrap::operator=(copy);
    
    return *this;
}

const std::string   DiamondTrap::getClassName(void) const {return "DiamondTrap";}

void DiamondTrap::whoAmI(void)
{
  std::cout << "My name is " << ClapTrap::_name
	        << " but you can call me " << _name
	        << std::endl;
}

