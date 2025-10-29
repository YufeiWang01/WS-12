#ifndef CARD_H
#define CARD_H
#include <string>

class Card {

 protected:
  std::string name;
  int cost;
  static int totalCards;

 public:
  enum class Type { CREATURE, LAND };
  Card(const std::string& name, int cost);
  virtual ~Card();
  virtual void printInfo() const = 0;
  virtual Type getType() const = 0;
  virtual Card* clone() const = 0;
  std::string getName() const;
  int getCost() const;
  static int getTotalCards();
};

#endif