#include <iostream>
#include "Colors.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	printTestHeader("Create Clap and FragTraps");
	ClapTrap clap1;
	ClapTrap clap2("clap2");
	FragTrap frag1;
	FragTrap frag2("frag2");

	std::cout << std::endl;
	frag2.getInfo();
	printTestHeader("Test attack");
	frag2.attack(clap2.getName());
	printTestHeader("Print info before assignment operator call");
	frag1 = frag2;
	std::cout << std::endl;
	printTestHeader("Print info after");
	frag1.getInfo();
	printTestHeader("Test high fives");
	frag1.highFivesGuys();
	return 0;
}