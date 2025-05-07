#include "ClapTrap.hpp"

int main()
{
    ClapTrap ply1("Joan");
    ClapTrap ply2("Noelia");

    std::cout << "setting damage attack...\n\n";
    ply1.setAttackDamage(3);
    ply2.setAttackDamage(4);
    
    std::cout << "Attacking someone\n\n";
    ply1.attack("Mp7");
    ply2.attack("C4");

    std::cout << "recives damage...\n\n";
    ply1.takeDamage(4);
    ply2.takeDamage(3);

    std::cout << "Repairing...\n\n";
    ply1.beRepaired(2);
    ply2.beRepaired(2);

    std::cout << "Try to attack\n\n";
    ply2.attack("touch my bols");
    std::cout << "oh is critical !!\n\n";
    ply1.takeDamage(15);
    return (0);
}