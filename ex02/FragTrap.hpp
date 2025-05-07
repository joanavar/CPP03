#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
static const std::string _defName;
  static const unsigned int _defHP;
  static const unsigned int _defEP;
  static const unsigned int _defAD;
public:

    FragTrap(void);
    ~FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &copy);
    FragTrap &operator=(const FragTrap &copy);
    FragTrap(std::string _name, unsigned int hp, unsigned int ep, unsigned int ad);

    void highFivesGuys(void);
    void getInfo(void);
};

#endif