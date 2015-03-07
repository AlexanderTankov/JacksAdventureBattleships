#include <iostream>
#include "Map.h"

using namespace std;

//Default Constructor
Map::Map()
{
	this->rows = 10;
	this->columns = 10;
	this->ppMap.resize(this->rows);
	for (size_t i = 0; i < this->rows; i++)
	{
		this->ppMap[i].resize(this->columns);
	}

	for (size_t i = 0; i < this->rows; i++)
	{
		for (size_t j = 0; j < this->columns; j++)
		{
			this->ppMap[i][j] = new WaterCell;
		}
	}
}

//Constructor
Map::Map(size_t Rows, size_t Columns)
{
	this->rows = Rows;
	this->columns = Columns;
	this->ppMap.resize(this->rows);
	for (size_t i = 0; i < this->rows; i++)
	{
		this->ppMap[i].resize(this->columns);
	}

	for (size_t i = 0; i < this->rows; i++)
	{
		for (size_t j = 0; j < this->columns; j++)
		{
			this->ppMap[i][j] = new WaterCell;
		}
	}
}

//Destructor
Map::~Map()
{
	for (size_t i = 0; i < this->rows; i++)
	{
		for (size_t j = 0; j < this->columns; j++)
		{
			delete this->ppMap[i][j];
		}
	}
}


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
std::vector<std::vector<Cell*>> Map::getPpMap() const
{
	return this->ppMap;
}


//Print map
void Map::printMap() const
{
	cout << "  |";
	for (size_t i = 0; i < 10; i++)
	{
		cout << i << "|";
	}
	cout << endl << "-----------------------" << endl;

	for (size_t i = 0; i < this->rows; i++)
	{
		for (size_t j = 0; j < this->columns; j++)
		{
			if (j == 0)
			{
				cout << i << "| ";
			}
			this->ppMap[i][j]->printCell();
			cout << "|";
		}
		cout << endl << "-----------------------" << endl;
	}
}

//Adding ship to map
void Map::addShipToMap(const Ship* newShip)
{
	for (size_t i = 0; i < newShip->getSize(); i++)
	{
		size_t rowOfShip = newShip->getCellsOfShip()[i].getRow();
		size_t columnOfShip = newShip->getCellsOfShip()[i].getColumn();
		this->ppMap[rowOfShip][columnOfShip] = newShip->getCellsOfShip()[i].Clone();
	}
}