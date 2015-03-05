#pragma once
#include "Cell.h"

class ShipCell : public Cell
{
public:
	ShipCell() : Cell() { this->isStricken = false; }
	virtual ~ShipCell();
	ShipCell(size_t Row, size_t Column, char Symbol) : Cell(Row, Column, char(177)) { this->isStricken = false; }
	ShipCell(const ShipCell& other) : Cell(other) { this->isStricken = other.getIsStricken(); }

	virtual	ShipCell* Clone() const { return new ShipCell(*this); }

	bool getIsStricken() const { return this->isStricken; }
	void setIsStricken(bool newIsStricken) { this->isStricken = newIsStricken; }

private:
	bool isStricken;
};