#pragma once
#include <vector>
#include "Ship.h"
#include "Map.h"

class Player
{
public:
	Player();
	~Player();



private:
	std::vector<Ship*> ownShips;
	Map ownMap;
};

Player::Player()
{
}

Player::~Player()
{
}