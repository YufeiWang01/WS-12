#include "Creature.h"
#include "Land.h"
#include <iostream>

int main(){

  Creature c("Dragon", 5, Creature::CreatureType::WARRIOR, 10, 8);
  Land l("Forest", 0, Land::LandType::FOREST);
  
  c.printInfo();
  l.printInfo();

  std::cout << "Total Cards: " << Card::getTotalCards() << std::endl;
  std::cout << "Creatures: " << Creature::getTotalCreatures() << std::endl;
  std::cout << "Lands: " << Land::getTotalLands() << std::endl;
}
