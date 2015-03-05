#include <iostream>
#include "Boat.h"

using namespace std;

int main()
{
	Ship* my_ship = new Boat;
	cout << my_ship->getSize();

	return 0;
}