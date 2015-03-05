#include <fstream>
#include "Cell.h"

using namespace std;

//Constructor
Cell::Cell()
{
	this->row = 0;
	this->column = 0;
	this->symbol = NULL;
}

//Destructor
Cell::~Cell()
{
}

//Constructor for easy creating a Cell
Cell::Cell(size_t Row, size_t Column, char Symbol)
{
	this->row = Row;
	this->column = Column;
	this->symbol = Symbol;
}

//Constructor for copy one Cell to other
Cell::Cell(const Cell& other)
{
	this->row = other.getRow();
	this->column = other.getColumn();
	this->symbol = other.getSymbol();
}


//Get cell row
size_t Cell::getRow() const
{
	return this->row;
}

//Get cell column
size_t Cell::getColumn() const
{
	return this->column;
}

//Get cell symbol
char Cell::getSymbol() const
{
	return this->symbol;
}

//Check that one cell is free
bool Cell::getIsFree() const
{
	return this->isFree;
}


//Set row to cell
void Cell::setRow(size_t Row)
{
	this->row = Row;
}

//Set column to cell
void Cell::setColumn(size_t Column)
{
	this->column = Column;
}

//Set symbol to cell
void Cell::setSymbol(char Symbol)
{
		this->symbol = Symbol;
}

//Set value to isFree
void Cell::setIsFree(bool NewIsFree)
{
	this->isFree = NewIsFree;
}


//Print cell
void Cell::printCell() const
{
	cout << this->symbol;
}


