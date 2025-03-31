#include "ClapTrap.hpp"


const std::string ClapTrap::_defName = "ClapTrapNoName";
const unsigned int ClapTrap::_defHP = 10;
const unsigned int ClapTrap::_defEP = 10;
const unsigned int ClapTrap::_defAD = 0;

ClapTrap::ClapTrap(std::string name):_hitpoints(_defHP), _energy_points(_defEP), _attack_damage(_defAD), _name(_defName)
{
    std::cout << "Constructor called\n";
}
ClapTrap::ClapTrap(void):_hitpoints(_defHP), _energy_points(_defEP), _attack_damage(_defAD), _name("unnamed")
{
    std::cout << "Default constructor called\n";
}

ClapTrap::~ClapTrap(){ std::cout << "destructor called\n";}

ClapTrap::ClapTrap(const ClapTrap &copy):_name(copy.getName()), _hitpoints(copy.getHitpoints()),
    _energy_points(copy.getEnergyPoints()), _attack_damage(copy.getAttackDamage())
{
    std::cout << "Constructor copy called\n";
   
}

ClapTrap::ClapTrap(std::string _name, unsigned int _hp, unsigned int _ep, unsigned int _ad)
: _name(_name), _hitpoints(_hp), _energy_points(_ep), _attack_damage(_ad) 
{
  std::cout << "Constructor called for " << getName() << std::endl;
}
ClapTrap    &ClapTrap::operator=(const ClapTrap &copy)
{
  std::cout << "Copy assignment operator called" << std::endl;

  if (this != &copy)
  {
    _name = copy.getName();
    _hitpoints = copy.getHitpoints();
    _energy_points = copy.getEnergyPoints();
    _attack_damage = copy.getAttackDamage();
  }

  return *this;
}

void    ClapTrap::setAttackDamage(unsigned int points)
{
      std::cout << getClassName() <<  getName() << " sets it's attack damage whit " << points << " points" << std::endl;
        _attack_damage = points;
}
void    ClapTrap::attack(std::string const &target)
{
    if(!_energy_points)
    {
        std::cout << getClassName() << getName() << " can't attack. No energy points\n";
        return ;
    }
    if (!_attack_damage)
    {
        std::cout << getClassName() << getName() << " can't attack. No Damage\n";
        return ;
    }
    if (!_hitpoints)
    {
        std::cout << getClassName() << getName() << " no hitpoints\n";
        exit(0);   
    }

    std::cout << getClassName() << getName() << " attacks " << target << " causing " << _attack_damage << " points damage\n";
    --_energy_points;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(!_energy_points)
    {
        std::cout << getClassName() << getName() << " can't attack. No energy points\n";
        return ;
    }
    if(!_hitpoints)
    {
        std::cout << getClassName() << getName() << " no hitpoints\n";
        exit(0);   
    }
    std::cout << getClassName() << getName() << " repaired " << amount << " hit points." << std::endl;
    _hitpoints = _hitpoints + amount;
    --_energy_points;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
      std::cout << getClassName() << getName() << " receives " << amount << " of damage." << std::endl;

      if (amount >= _hitpoints)
      {
        _hitpoints = 0;
        std::cout << getClassName() << getName() << " is dead\n";
      }
      else
        _hitpoints = _hitpoints - amount;
}

unsigned int    ClapTrap::getHitpoints(void) const {return _hitpoints;}

unsigned int    ClapTrap::getAttackDamage(void) const {return _attack_damage;}

unsigned int    ClapTrap::getEnergyPoints(void) const {return _energy_points;}

const std::string ClapTrap::getClassName(void) const { return "ClapTrap";}

std::string    ClapTrap::getName(void) const {return _name;}
