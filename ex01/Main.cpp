#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "Colors.hpp"

int main()
{
    std::cout << std::endl << GREEN << "Create a ScavTrap robot\n" << RST;
    ScavTrap ply1("Joan");
    std::cout << std::endl;

    std::cout << std::endl << GREEN << "Create a ScavTrap robot\n" << RST;
    ScavTrap ply2("Jesus");
    std::cout << std::endl;
    return 0;
}