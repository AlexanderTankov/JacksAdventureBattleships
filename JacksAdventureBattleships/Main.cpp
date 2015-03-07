#include "Map.h"
#include "ShipCell.h"
#include "Boat.h"
#include "Player.h"

using namespace std;

int main()
{
	Player Alex("Alex");
	Player Nikol("Nikol");

	cout << "Hi :) Now is player " << Alex.getName() << "!" << endl;
	cout << "Select where you want to set your ship(coordinates)!" << endl;
	
	cout << "Row: ";
	size_t row;
	cin >> row;
	cout << "Col: ";
	size_t col;
	cin >> col;

	ShipCell cellsOfShip1(row, col);

	cout << "Row: ";
	cin >> row;
	cout << "Col: ";
	cin >> col;

	ShipCell cellsOfShip2(row, col);

	std::vector<ShipCell> alexShips = { cellsOfShip1, cellsOfShip2 };
	Ship* ship1 = new Boat(alexShips);
	Alex.getMap().addShipToMap(ship1);
	Alex.getMap().printMap();

	system("cls");

	cout << "Hi :) Now is player " << Nikol.getName() << "!/nSelect where you want to set your ship (coordinates)!";

	cout << "Row: ";
	cin >> row;
	cout << "Col: ";
	cin >> col;

	ShipCell cellsOfShip3(row, col);

	cout << "Row: ";
	cin >> row;
	cout << "Col: ";
	cin >> col;

	ShipCell cellsOfShip4(row, col);

	std::vector<ShipCell> NikolShips = { cellsOfShip3, cellsOfShip4 };
	Ship* ship2 = new Boat(NikolShips);
	Nikol.getMap().addShipToMap(ship2);
	Nikol.getMap().printMap();

	//system("cls");
	delete ship1;
	delete ship2;

	return 0;
}