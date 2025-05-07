#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

public:
    DiamondTrap(void);
    ~DiamondTrap(void);
    
    DiamondTrap(std::string _name);
    DiamondTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ad);
    DiamondTrap(const DiamondTrap &copy);
    DiamondTrap &operator=(const DiamondTrap &copy);

    const std::string getClassName(void) const;
    void whoAmI(void);


private:
  std::string _name;

protected:
  static const std::string _defName;
  static const unsigned int _defHP;
  static const unsigned int _defEP;
  static const unsigned int _defAD;


};



#endif
