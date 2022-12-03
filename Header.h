#include <iostream>  
#include <iomanip>  
#include <string.h>  
#include <Windows.h>  
#include<conio.h>  

using namespace std;
class Object
{
protected:
	double price;
	int time;
public:
	Object()
	{
		price = 0;
		time = 0;
	}
	Object(double p, int t)
	{
		price = p;
		time = t;
	}
	virtual double Get_price() = 0;
	virtual int Get_time() = 0;
	virtual void Show()
	{
		cout << "\nPrice - " << price << "\nTime to install - " << time << endl;
	}
};
class Door :public Object
{
protected:
	string material;

public:
	Door()
	{
		material = "Wood";
	}
	Door(string m, double p, int t) :Object(p, t)
	{
		material = m;
		price = p;
		time = t;
	}

	double Get_price();
	int Get_time();
	void Show() override;
	string Get_material();
};
class Wall :public Object
{
protected:
	int width;
	int height;

public:
	Wall()
	{
		width = 0;
		height = 0;
	}
	Wall(int w, int h, int t, double p) :Object(t, p)
	{
		width = w;
		height = h;
		time = t;
		price = p;
	}
	double Get_price();
	int Get_time();
	void Show() override;

};

class Roof :public Object
{
protected:
	string form;
public:
	Roof()
	{
		form = "Triangle";
	}
	Roof(string f, int t, double p) :Object(t, p)
	{
		form = f;
		time = t;
		price = p;
	}
	double Get_price();

	int Get_time();

	string Get_form();

	void Show() override;

};
class Window :public Object
{
protected:
	string type;

public:
	Window()
	{
		type = "French";
	}
	Window(string _type, int t, double p) :Object(t, p)
	{
		type = _type;
		price = p;
		time = t;
	}
	int Get_time();
	double Get_price();
	string Get_type();
	void Show() override;
};


