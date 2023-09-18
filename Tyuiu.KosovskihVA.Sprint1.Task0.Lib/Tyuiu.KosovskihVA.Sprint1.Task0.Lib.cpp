// Tyuiu.KosovskihVA.Sprint1.Task0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


class Service1 : public ISprint1Task0V01
{
	virtual int Rezalt(int a, int b, int c) override
	{
		return a * b * c;
	};
};

class Service2 : public ISprint1Task0V01
{
	virtual int Rezalt(int a, int b, int c) override
	{
		return 2 * c * (a + b);
	};
};

class Service3 : public ISprint1Task0V01
{
	virtual int Rezalt(int a, int b, int c) override
	{
		int v = c;
		v = (a * a) + (b * b);
		return v;
	};
};

class Service4 : public ISprint1Task0V01
{
	virtual int Rezalt(int a, int b, int c) override
	{
		int v = c;
		v = a * b;
		return v;
	};
};

class Service5 : public ISprint1Task0V01
{
	virtual int Rezalt(int a, int b, int c) override
	{
		return (a + b + c) / 3;
	};
};