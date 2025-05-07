#include <iostream>

#include "Colors.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void printTestHeader(const std::string& message) {
	std::cout << GREEN << message << std::endl;
	for (unsigned long i = 0; i < message.length(); i++)
		std::cout << "=";
	std::cout << RST << std::endl;
}

void printSubtitle(const std::string& message) {
	std::cout << GREEN << message << RST << std::endl;
}

int main(void) {
	std::cout << std::endl;
	printTestHeader("Create DiamondTrap");
	DiamondTrap d1("Henry");
	DiamondTrap d2;

	std::cout << std::endl;
	printTestHeader("Create ScavTrap");
	ScavTrap s1;

    std::cout << std::endl;
    printTestHeader("Create FragTrap");
    FragTrap f1;

	std::cout << std::endl;
	printTestHeader("Test attack");
	d1.attack("Somebody");
	s1.setAttackDamage(53);
	f1.setAttackDamage(13);
	s1.attack("someone else");
	f1.attack("someone else");

	std::cout << std::endl;
	printTestHeader("Test whoAmI");
	d1.whoAmI();
	d2.whoAmI();


	std::cout << std::endl;
	printTestHeader("Test high fives");
	f1.highFivesGuys();
	
	std::cout << std::endl;
    printTestHeader("Destructors");
	return 0;
}