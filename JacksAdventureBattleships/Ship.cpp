#include "Ship.h"

using namespace std;


Ship::Ship(std::vector<ShipCell> cellsOfShip, std::size_t Size)
{
	this->size = Size;
	this->cellsOfShip = cellsOfShip;
	this->is_alive = true;
}

Ship::~Ship()
{
}


std::size_t Ship::getSize() const
{
	return this->size;
}

bool Ship::getIsAlive() const
{
	return this->is_alive;
}

vector<ShipCell> Ship::getCellsOfShip() const
{
	return this->cellsOfShip;
}

void Ship::setIsAlive(bool is_alive)
{
	this->is_alive = is_alive;
}