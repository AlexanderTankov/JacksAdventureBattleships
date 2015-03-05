#include <iostream>
#include "Map.h"

using namespace std;

//Get map rows
size_t Map::getRows() const
{
	return this->rows;
}

//Get map columns
size_t Map::getColumns() const
{
	return this->columns;
}

//Get map
Cell***	Map::getPpmap() const
{
	return this->ppMap;
}


//Set rows to map
void Map::setRows(size_t Rows)
{
	this->rows = Rows;
}

//Set columns to map
void Map::setColumns(size_t Columns)
{
	this->columns = Columns;
}

//Set map
void Map::setMap(Cell*** Map)
{
	this->ppMap = Map;
}


//Print map
void Map::printMap() const
{
	for (size_t i = 0; i < this->columns; i++)
	{
		for (size_t j = 0; j < this->rows; j++)
			this->ppMap[i][j]->printCell();
		cout << endl;
	}
}