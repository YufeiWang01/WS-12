#ifndef CREATURE_H
#define CREATURE_H
#include "Card.h"

class Creature : public Card {
 public:
  enum class CreatureType { WARRIOR, MAGE, ARCHER };

 private:
  CreatureType type;
  int attack;
  int defense;
  static int totalCreatures;

 public:
  Creature(const std::string& name, int cost, CreatureType type, int attack, int defense);
  Creature(const Creature& other);
  ~Creature();
  void printInfo() const override;
  int getAttack() const;
  int getDefense() const;
  CreatureType getCreatureType() const;
  static int getTotalCreatures();
  Card* clone() const override;
  Card::Type getType() const override;
};

#endif