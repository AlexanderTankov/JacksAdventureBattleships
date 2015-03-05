#pragma once
#include "Ship.h"

class Boat : public Ship
{
public:
	Boat(std::vector<ShipCell> cellsOfShip) : Ship(cellsOfShip, 2) {}
	~Boat() {}

	//za da trugne
	virtual bool getIsAlive() const { return true; }

};
