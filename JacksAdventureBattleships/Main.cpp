#include "WaterCell.h"
#include "ShipCell.h"

using namespace std;

int main()
{
	Cell* my_ship = new WaterCell(1, 1);
	my_ship->printCell();
	Cell* my_ship2 = new ShipCell(1, 1);
	my_ship2->printCell();

	return 0;
}