#pragma once
#include "Ship.h"

class Boat : public Ship
{
public:
	Boat();
	~Boat();

	virtual std::size_t getSize() const;
	virtual bool getIsAlive() const;

	virtual void setSize(std::size_t newSize);
	virtual void setIsAlive(bool is_alive);

private:
	std::size_t size;
	bool is_alive;
	char symbol;
};

Boat::Boat()
{
	this->size = 0;
	this->is_alive = true;
	this->symbol = '@';
}

Boat::~Boat()
{
}

std::size_t Boat::getSize() const
{
	return this->size;
}

bool Boat::getIsAlive() const
{
	return this->is_alive;
}

void Boat::setSize(std::size_t newSize)
{
	this->size = newSize;
}

void Boat::setIsAlive(bool is_alive)
{
	this->is_alive = is_alive;
}