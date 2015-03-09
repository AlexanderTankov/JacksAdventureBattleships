#pragma once
#include "Cell.h"

class WaterCell : public Cell
{
public:
	WaterCell() : Cell(char(178)) {}
	virtual ~WaterCell() {}
	WaterCell(size_t Row, size_t Column) : Cell(Row, Column, char(178)) {}
	WaterCell(const WaterCell& other) : Cell(other) {}

	virtual	Cell* Clone() const { return new WaterCell(*this); }
};