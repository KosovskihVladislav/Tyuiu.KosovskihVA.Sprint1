// Tyuiu.KosovskihVA.Sprint1.Task1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <string>

class Service1 : public ISprint1Task1
{

	virtual int Logic(int a) override
	{
		if (a % 5 == 0)
		{
			return true;
		}
		else
		{
			return false;
		};
		
	};
};

class Service2 : public ISprint1Task1
{

	virtual int Logic(int a) override
	{
		if (a % 13 == 0)
		{
			return true;
		}
		else
		{
			return false;
		};

	};
};

class Service3 : public ISprint1Task1
{

	virtual int Logic(int a) override
	{
		if (a % 2 == 0)
		{
			return true;
		}
		else
		{
			return false;
		};

	};
};

class Service4 : public ISprint1Task1
{

	virtual int Logic(int a) override
	{
		if (a % 10 == 7)
		{
			return true;
		}
		else
		{
			return false;
		};

	};
};

class Service5 : public ISprint1Task1
{

	virtual int Logic(int n) override
	{
		int a = n / 100;
		int b = (n / 10) % 10;
		int c = n % 10;

		int i = a + b + c;
		if (i >= 10 && i <= 99)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
};