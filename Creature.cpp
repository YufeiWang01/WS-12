#include "Creature.h"
#include <iostream>

int Creature::totalCreatures = 0;

static const char* cType(Creature::CreatureType t){
  switch (t) {
    case Creature::CreatureType::WARRIOR: return "Warrior";
    case Creature::CreatureType::MAGE: return "Mage";
    case Creature::CreatureType::ARCHER: return "Archer";
  }
  return "";
}

Creature::Creature(const std::string& n, int c, CreatureType t, int a, int d)
  : Card(n, c), type(t), attack(a), defense(d) { ++totalCreatures; }
Creature::Creature(const Creature& o)
  : Card(o.name, o.cost), type(o.type), attack(o.attack), defense(o.defense) { ++totalCreatures; }
Creature::~Creature() { --totalCreatures; }

void Creature::printInfo() const {
  std::cout << "Creature - " << name << " (Cost " << cost << "): Creature Type=" 
            << cType(type) << ", Attack=" << attack << ", Defense=" << defense << std::endl;
}

int Creature::getAttack() const { return attack; }
int Creature::getDefense() const { return defense; }
Creature::CreatureType Creature::getCreatureType() const { return type; }
int Creature::getTotalCreatures() { return totalCreatures; }
Card* Creature::clone() const { return new Creature(*this); }
Card::Type Creature::getType() const { return Type::CREATURE; }