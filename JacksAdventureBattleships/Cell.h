#pragma once
#include <iostream>

class Cell
{
public:
	Cell();
	virtual ~Cell();
	Cell(size_t Row, size_t Column, char Symbol);
	Cell(const Cell& other);

	virtual	Cell* Clone() const = 0;

	size_t	getRow() const;
	size_t	getColumn() const;
	char	getSymbol() const;
	bool	getIsFree() const;

	void	setRow(size_t Row);
	void	setColumn(size_t Column);
	void	setSymbol(char Symbol);
	void	setIsFree(bool NewIsFree);
	
	void	printCell() const;

private:
	std::size_t row;
	std::size_t column;
	char symbol;
	bool isFree;
};
