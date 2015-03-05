#pragma once
#include <iostream>
#include "Cell.h"

class Ship
{
public:
	virtual std::size_t getSize() const = 0;
	virtual bool getIsAlive() const = 0;

	virtual void setSize(std::size_t newSize) = 0;
	virtual void setIsAlive(bool is_alive) = 0;

private:
	std::size_t size;
	Cell ** cellsOfShip;
	bool is_alive;
};