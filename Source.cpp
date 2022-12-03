#include "Header.h"

double Door::Get_price()
{
	return price;
}

int Door::Get_time()
{
	return time;
}

void Door::Show()
{
	cout << "Door parameters: " << endl;
	Object::Show();
	cout << "Material - " << material << endl << endl;
}

string Door::Get_material()
{
	return material;
}

double Wall::Get_price()
{
	return price;
}

int Wall::Get_time()
{
	return time;
}

void Wall::Show()
{
	cout << "Wall parameters: \n";
	Object::Show();
	cout << "Width - " << width << "\nHeight - " << height << endl << endl;
}

double Roof::Get_price()
{
	return price;
}

int Roof::Get_time()
{
	return time;
}

string Roof::Get_form()
{
	return form;
}

void Roof::Show()
{
	cout << "Roof parameters: \n";
	Object::Show();
	cout << "Form - " << form << endl << endl;
}


int Window::Get_time()
{
	return time;
}

double Window::Get_price()
{
	return price;
}

string Window::Get_type()
{
	return type;
}

void Window::Show()
{
	cout << "Window parameters: \n\nType - " << type;
	Object::Show();
}
