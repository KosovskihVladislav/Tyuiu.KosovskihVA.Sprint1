// Tyuiu.KosovskihVA.Sprint1.Task4.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
#include <string>
#include "math.h"

using namespace std;

class Service1 : public ISprint1Task4
{

	virtual float Vibor(float x) override
	{
		float a, b, c;
		if (x > 0 && x != 8)
		{
			a = 1 - 3 * x;
			return a;
		}
		else if (x <= 1)
		{
			b = pow(x, 2) - sin(x);
			return b;
		}
		else
		{
			c = cos(x);
			return c;
		}
	};
};