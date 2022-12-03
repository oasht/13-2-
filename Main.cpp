#include "Header.h"


int main()
{
	double total_price = 0;
	int total_time = 0;
	Object* objects[4]{ new Wall(100, 200, 40, 45.34), new Door("Wood", 29.09, 20), new Roof("Triangle", 55, 150.90), new Window("French", 15, 13.87) };

	cout << "Material used to build your house:" << endl << endl;
	for (int i = 0; i < 4; i++)
	{
		objects[i]->Show();

	}

	for (int i = 0; i < 4; i++)
	{
		total_price += objects[0]->Get_price();
	}
	for (int i = 1; i < 4; i++)
	{
		total_price += objects[i]->Get_price();
	}

	for (int i = 0; i < 4; i++)
	{
		total_time += objects[0]->Get_time();
	}
	for (int i = 1; i < 4; i++)
	{
		total_time += objects[i]->Get_time();
	}

	cout << endl << endl << "House overall price = " << total_price << " $" << endl << "Overall time to buid = " << total_time << " mins" << endl;


}