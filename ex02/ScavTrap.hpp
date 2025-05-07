#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
  ScavTrap(void);
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &copy);
  ScavTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad);

  ScavTrap &operator=(const ScavTrap &copy);

  ~ScavTrap(void);

  void attack(const std::string& target);
  void guardGate(void);

private:
    
        std::string name;
        int         hitpoints;
        int         energy_points;
        int         attack_damage;
};

#endif