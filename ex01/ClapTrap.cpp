#include "ClapTrap.hpp"


/*
* Default values
 */
const std::string ClapTrap::_defName = "ClapTrapNoName";
const unsigned int ClapTrap::_defHP = 10;
const unsigned int ClapTrap::_defEP = 10;
const unsigned int ClapTrap::_defAD = 0;


ClapTrap::ClapTrap(std::string _name):_hitPoints(_defHP), _energyPoints(_defEP), _attackDamage(_defAD), _name(_name)
{
    std::cout << "Constructor called\n";
}
ClapTrap::ClapTrap(void):_hitPoints(_defHP), _energyPoints(_defEP), _attackDamage(_defAD), _name(_defName)
{
    std::cout << "Default constructor called\n";
}

ClapTrap::~ClapTrap(){ std::cout << "destructor called\n";}

ClapTrap::ClapTrap(const ClapTrap &copy):_name(copy.getName()), _hitPoints(copy.getHitpoints()),
    _energyPoints(copy.getEnergyPoints()), _attackDamage(copy.getAttackDamage())
{
    std::cout << "Constructor copy called\n";
   
}

ClapTrap::ClapTrap(std::string _name, unsigned int _hp, unsigned int _ep, unsigned int _ad)
: _name(_name), _hitPoints(_hp), _energyPoints(_ep), _attackDamage(_ad) 
{
  std::cout << "Constructor called for " << _name << std::endl;
}
ClapTrap    &ClapTrap::operator=(const ClapTrap &copy)
{
  std::cout << "Copy assignment operator called" << std::endl;

  if (this != &copy)
  {
    _name = copy.getName();
    _hitPoints = copy.getHitpoints();
    _energyPoints = copy.getEnergyPoints();
    _attackDamage = copy.getAttackDamage();
  }

  return *this;
}

void    ClapTrap::setAttackDamage(unsigned int points)
{
      std::cout << "ClapTrap " <<  _name << " sets it's attack damage whit " << points << " points" << std::endl;
        _attackDamage = points;
}
void    ClapTrap::attack(std::string const &target)
{
    if(!_energyPoints)
    {
        std::cout << "ClapTrap " << getName() << " can't attack. No energy points\n";
        return ;
    }
    if (!_attackDamage)
    {
        std::cout << "ClapTrap " << getName() << " can't attack. No Damage\n";
        return ;
    }
    if (!_hitPoints)
    {
        std::cout << "ClapTrap " << getName() << " no hitpoints\n";
        exit(0);   
    }

    std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << _attackDamage << " points damage\n";
    --_energyPoints;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(!_energyPoints)
    {
        std::cout << "ClapTrap " << getName() << " can't attack. No energy points\n";
        return ;
    }
    if(!_hitPoints)
    {
        std::cout << "ClapTrap " << getName() << " no hitpoints\n";
        exit(0);   
    }
    std::cout << "ClapTrap " << getName() << " repaired " << amount << " hit points." << std::endl;
    _hitPoints = _hitPoints + amount;
    --_energyPoints;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
      std::cout << "ClapTrap " << getName() << " receives " << amount << " of damage." << std::endl;

      if (amount >= _hitPoints)
      {
        _hitPoints = 0;
        std::cout << "ClapTrap " << getName() << " is dead\n";
      }
      else
        _hitPoints = _hitPoints - amount;
}

unsigned int    ClapTrap::getHitpoints(void) const {return _hitPoints;}

unsigned int    ClapTrap::getAttackDamage(void) const {return _attackDamage;}

unsigned int    ClapTrap::getEnergyPoints(void) const {return _energyPoints;}

std::string    ClapTrap::getName(void) const {return _name;}
