#pragma once

#include <string>
#include "Map.h"

class Player
{
public:
	Player(std::string newName);
	~Player();

	std::string getName() const;
	Map& getMap();

	void setName(std::string newName);
	void setMap(Map& newMap);

private:
	std::string name;
	Map ownMap;
};