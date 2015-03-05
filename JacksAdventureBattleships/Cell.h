#pragma once
#include <iostream>

class Cell
{
public:
	Cell();
	virtual ~Cell();
	Cell(size_t Row, size_t Column, char Symbol);
	Cell(const Cell& other);

	size_t		 getRow() const;
	size_t		 getColumn() const;
	char		 getSymbol() const;

	void		 setRow(size_t Row);
	void		 setColumn(size_t Column);
	void		 setSymbol(char Symbol);

	virtual void printCell() const = 0;

private:
	std::size_t row;
	std::size_t column;
	char symbol;
};
