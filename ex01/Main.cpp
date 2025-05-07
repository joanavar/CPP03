#include <iostream>

#include "Colors.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	printTestHeader("Creating ScavTrap robot");
	ScavTrap ply1("Robot");
	std::cout << std::endl;
	
	printTestHeader("Creating other ScavTrap robot by copying the existing one");
	ScavTrap ply2(ply1);
	std::cout << std::endl;

	printTestHeader("Testing attack form Scavtrap 1 to Scavtrap 2");
	std::cout << "ScavTrap 1 Energy: " << ply1.getEnergyPoints() << std::endl;
	ply1.attack(ply2.getName());
	std::cout << "ScavTrap 1 Energy: " << ply1.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	printTestHeader("Testing copy asignment operator");
	printSubtitle("Create an instance with default constructor");
	ScavTrap ply3;
	std::cout << "ScavTrap 3 name: " << ply3.getName() << std::endl;
	std::cout << "ScavTrap 3 energy: " << ply3.getEnergyPoints() << std::endl;
	printSubtitle("Using asignment operator to clone the second ScavTrap");
	ply3 = ply1;
	std::cout << "ScavTrap 3 name: " << ply3.getName() << std::endl;
	std::cout << "ScavTrap 3 enrgy: " << ply3.getEnergyPoints() << std::endl;
	std::cout << std::endl;

	printTestHeader("Testing guard gate state");
	std::cout << "ScavTrap 3 name: " << ply3.getName() << std::endl;
	ply3.guardGate();
	std::cout << std::endl;

	printTestHeader("Destroy objects");
	return 0;
}