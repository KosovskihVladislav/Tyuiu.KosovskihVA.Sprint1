// Tyuiu.KosovskihVA.Sprint1.Task2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


class Service1 : public ISprint1Task2
{

	virtual int LogicLong(int n) override
	{
		int a = n / 100;
		int b = (n / 10) % 10;
		int c = n % 10;

		int i = a * b * c;
		if (i >= 100 && i <= 999)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
};

class Service2 : public ISprint1Task2
{

	virtual int LogicLong(int n) override
	{
		int sum = 0, sum1 = 0;
		while (n >= 10)
		{
			sum += n % 10;
			n /= 10;
		}
		sum1 += n;
		if (sum % 5 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
};

class Service3 : public ISprint1Task2
{

	virtual int LogicLong(int n) override
	{
		int a = n / 100;
		int b = (n / 10) % 10;
		int c = n % 10;

		int i = a + b + c;
		return i;

	};
};

class Service4 : public ISprint1Task2
{

	virtual int LogicLong(int n) override
	{
		int c = n % 10;

		if (c % 3 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
};

class Service5 : public ISprint1Task2
{

	virtual int LogicLong(int n) override
	{
		int a = n / 100;
		int b = (n / 10) % 10;
		int c = n % 10;

		int i = a * b * c;
		return i;

	};
};