#include "Land.h"
#include <iostream>

int Land::totalLands = 0;

static const char* lType(Land::LandType t) {
  switch (t) {
    case Land::LandType::FOREST: return "Forest";
    case Land::LandType::MOUNTAIN: return "Mountain";
    case Land::LandType::SWAMP: return "Swamp";
  }

  return "";

}

Land::Land(const std::string& n, int c, LandType t)
  : Card(n, c), landType(t) { ++totalLands; }
Land::Land(const Land& o)
  : Card(o.name, o.cost), landType(o.landType) { ++totalLands; }
Land::~Land() { --totalLands; }

void Land::printInfo() const {
  std::cout << "Land - " << name << " (Cost " << cost << "): " << lType(landType) << " land." << std::endl;
}

Land::LandType Land::getLandType() const { return landType; }
int Land::getTotalLands() { return totalLands; }
Card* Land::clone() const { return new Land(*this); }
Card::Type Land::getType() const { return Type::LAND; }