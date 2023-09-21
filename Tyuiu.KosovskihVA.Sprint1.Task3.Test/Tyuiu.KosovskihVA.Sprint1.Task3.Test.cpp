#include "pch.h"
#include "CppUnitTest.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task3.Lib/Tyuiu.KosovskihVA.Sprint1.Task3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuKosovskihVASprint1Task3Test
{
	TEST_CLASS(Task3Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task2* lol1 = new Service1();
			int a = 4444;
            if (lol1->LogicLong(a) == true)
            {
                if (a != 1000 && a % 4 == 0)
                {
                    a *= 2;

                }
                else
                {
                    a /= 5;

                };
            }
            else
            {
                a += 2222;
            };
		}
	};
}
