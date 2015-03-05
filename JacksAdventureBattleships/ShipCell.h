#pragma once
#include "Cell.h"

class ShipCell : public Cell
{
public:
	ShipCell() : Cell('b') { this->isStricken = false; }
	virtual ~ShipCell() {}
	ShipCell(size_t Row, size_t Column) : Cell(Row, Column, 'b') { this->isStricken = false; }
	ShipCell(const ShipCell& other) : Cell(other) { this->isStricken = other.getIsStricken(); }

	virtual	ShipCell* Clone() const { return new ShipCell(*this); }

	bool getIsStricken() const { return this->isStricken; }
	void setIsStricken(bool newIsStricken) { this->isStricken = newIsStricken; }

private:
	bool isStricken;
};