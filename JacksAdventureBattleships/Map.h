#pragma once
#include "Cell.h"

class Map
{
public:
	size_t		getRows() const;
	size_t		getColumns() const;
	Cell***		getPpmap() const;

	void		setRows(size_t Rows);
	void		setColumns(size_t Columns);
	void		setMap(Cell*** Map);

	void		printMap() const;

private:
	size_t rows;
	size_t columns;
	Cell ***ppMap;
};