// Tyuiu.KosovskihVA.Sprint1.Task3.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <string>

using namespace std;

class Service1 : public ISprint1Task2
{

	virtual int LogicLong(int n) override
	{
		if (to_string(n).length() == 4 && n % 2 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
};
