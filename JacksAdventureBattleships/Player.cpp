#include "Player.h"

Player::Player(std::string newName)
{
	this->name = newName;
}

Player::~Player()
{
}

std::string Player::getName() const
{
	return this->name;
}

Map& Player::getMap()
{
	return this->ownMap;
}

void Player::setName(std::string newName)
{
	this->name = newName;
}

void Player::setMap(Map& newMap)
{
	this->ownMap = newMap;
}