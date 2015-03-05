#pragma once
#include "Cell.h"

class WaterCell : public Cell
{
public:
	WaterCell() : Cell() {}
	virtual ~WaterCell();
	WaterCell(size_t Row, size_t Column, char Symbol) : Cell(Row, Column, char(177)) {}
	WaterCell(const WaterCell& other) : Cell(other) {}

	virtual	WaterCell* Clone() const { return new WaterCell(*this); }
};