#include "Map.h"
#include "ShipCell.h"
#include "Boat.h"

using namespace std;

int main()
{
	Map myNewMap(20, 10);

	ShipCell cellsOfShip1(0, 0);
	ShipCell cellsOfShip2(0, 1);
	vector<ShipCell> cells (2);
	cells[0] = cellsOfShip1;
	cells[1] = cellsOfShip2;
	Ship* myboat = new Boat(cells);

	myNewMap.addShipToMap(myboat);

	myNewMap.printMap();

	return 0;
}