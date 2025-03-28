#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name):hitpoints(100), energy_points(50), attack_damage(20), name(_name)
{
    std::cout << "Constructor called\n";
}
ClapTrap::ClapTrap(void):hitpoints(100), energy_points(50), attack_damage(20), name("unnamed")
{
    std::cout << "Default constructor called\n";
}

ClapTrap::~ClapTrap(){ std::cout << "destructor called\n";}

ClapTrap::ClapTrap(const ClapTrap &copy):name(copy.getName()), hitpoints(copy.getHitpoints()),
    energy_points(copy.getEnergyPoints()), attack_damage(copy.getAttackDamage())
{
    std::cout << "Constructor copy called\n";
   
}

ClapTrap::ClapTrap(std::string _name, unsigned int _hp, unsigned int _ep, unsigned int _ad)
: name(_name), hitpoints(_hp), energy_points(_ep), attack_damage(_ad) 
{
  std::cout << "Constructor called for " << name << std::endl;
}
ClapTrap    &ClapTrap::operator=(const ClapTrap &copy)
{
  std::cout << "Copy assignment operator called" << std::endl;

  if (this != &copy)
  {
    name = copy.getName();
    hitpoints = copy.getHitpoints();
    energy_points = copy.getEnergyPoints();
    attack_damage = copy.getAttackDamage();
  }

  return *this;
}

void    ClapTrap::setAttackDamage(unsigned int points)
{
      std::cout << "ClapTrap " <<  name << " sets it's attack damage whit " << points << " points" << std::endl;
        attack_damage = points;
}
void    ClapTrap::attack(std::string const &target)
{
    if(!energy_points)
    {
        std::cout << "ClapTrap " << getName() << " can't attack. No energy points\n";
        return ;
    }
    if (!attack_damage)
    {
        std::cout << "ClapTrap " << getName() << " can't attack. No Damage\n";
        return ;
    }
    if (!hitpoints)
    {
        std::cout << "ClapTrap " << getName() << " no hitpoints\n";
        exit(0);   
    }

    std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << attack_damage << " points damage\n";
    --energy_points;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(!energy_points)
    {
        std::cout << "ClapTrap " << getName() << " can't attack. No energy points\n";
        return ;
    }
    if(!hitpoints)
    {
        std::cout << "ClapTrap " << getName() << " no hitpoints\n";
        exit(0);   
    }
    std::cout << "ClapTrap " << getName() << " repaired " << amount << " hit points." << std::endl;
    hitpoints = hitpoints + amount;
    --energy_points;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
      std::cout << "ClapTrap " << getName() << " receives " << amount << " of damage." << std::endl;

      if (amount >= hitpoints)
      {
        hitpoints = 0;
        std::cout << "ClapTrap " << getName() << " is dead\n";
      }
      else
        hitpoints = hitpoints - amount;
}

unsigned int    ClapTrap::getHitpoints(void) const {return hitpoints;}

unsigned int    ClapTrap::getAttackDamage(void) const {return attack_damage;}

unsigned int    ClapTrap::getEnergyPoints(void) const {return energy_points;}

std::string    ClapTrap::getName(void) const {return name;}
