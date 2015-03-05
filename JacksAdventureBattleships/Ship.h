#pragma once
#include <iostream>
#include <vector>
#include "ShipCell.h"

class Ship
{
public:
	Ship(std::vector<ShipCell> cellsOfShip, std::size_t Size);
	virtual ~Ship();

	std::size_t getSize() const;
	//za da trugne
	virtual bool getIsAlive() const = 0;
	std::vector<ShipCell> getCellsOfShip() const;

	void setIsAlive(bool is_alive);

private:
	std::size_t size;
	std::vector<ShipCell> cellsOfShip;
	bool is_alive;
};