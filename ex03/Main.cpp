#include "Colors.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << std::endl;
    std::cout << std::endl << "Create DiamondTrap" << std::endl;
	DiamondTrap d1("Henry");
	DiamondTrap d2;

	std::cout << std::endl;
    std::cout << std::endl << "Create ScavTrap" << std::endl;
	ScavTrap s1;

    std::cout << std::endl;
    std::cout << std::endl << "Create FragTrap" << std::endl;
    FragTrap f1;

	std::cout << std::endl;
    std::cout << std::endl << "Test attack" << std::endl;
	d1.attack("Somebody");
	s1.setAttackDamage(53);
	f1.setAttackDamage(13);
	s1.attack("someone else");
	f1.attack("someone else");

	std::cout << std::endl;
    std::cout << std::endl << "Test whoAmI" << std::endl;
	d1.whoAmI();
	d2.whoAmI();

	std::cout << std::endl;
    std::cout << std::endl << "Print info before assignment operator call" << std::endl;
	//d1.getInfo();
	d1 = d2;
	d1.whoAmI();
	d2.whoAmI();

	std::cout << std::endl;
    std::cout << std::endl << "Test high fives" << std::endl;
	f1.highFivesGuys();
	
	std::cout << std::endl;
    std::cout << std::endl << "Destructors" << std::endl;
	return 0;}