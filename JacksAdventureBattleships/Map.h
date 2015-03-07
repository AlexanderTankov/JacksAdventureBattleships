#pragma once
#include "WaterCell.h"
#include "Ship.h"

class Map
{
public:
	Map();
	Map(size_t Rows, size_t Columns);
	~Map();

	size_t							getRows() const;
	size_t							getColumns() const;
	std::vector<std::vector<Cell*>>	getPpMap() const;

	void							printMap() const;
	void							addShipToMap(const Ship* newShip);

private:
	size_t							rows;
	size_t							columns;
	std::vector<std::vector<Cell*>>	ppMap;
};