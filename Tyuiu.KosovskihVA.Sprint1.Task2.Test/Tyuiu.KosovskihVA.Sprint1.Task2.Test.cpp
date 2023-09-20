#include "pch.h"
#include "CppUnitTest.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task2.Lib/Tyuiu.KosovskihVA.Sprint1.Task2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuKosovskihVASprint1Task2Test
{
	TEST_CLASS(Task2Test)
	{

	public:
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task2* lol1 = new Service1();
			int a = 739, c;
			if (lol1->LogicLong(a) == true)
			{
				c = a;
			}
			else
			{
				c = a - 1;
			};
		};

	public:
		TEST_METHOD(TestMethod2)
		{
			ISprint1Task2* lol2 = new Service2();
			int a = 7392, c;
			if (lol2->LogicLong(a) == true)
			{
				c = a;
			}
			else
			{
				c = a - 1;
			};
		};

	public:
		TEST_METHOD(TestMethod3)
		{
			ISprint1Task2* lol3 = new Service3();
			int a = 739, c, A = 10;
			if (lol3->LogicLong(a) % A == 0)
			{
				c = a;
			}
			else
			{
				c = a - 1;
			};
		};

	public:
		TEST_METHOD(TestMethod4)
		{
			ISprint1Task2* lol4 = new Service4();
			int a = 739, c;
			if (lol4->LogicLong(a) == true)
			{
				c = a;
			}
			else
			{
				c = a - 1;
			};
		};

	public:
		TEST_METHOD(TestMethod5)
		{
			ISprint1Task2* lol5 = new Service5();
			int a = 739, c, A = 10;
			if (lol5->LogicLong(a) > A == 0)
			{
				c = a;
			}
			else
			{
				c = a - 1;
			};
		};
	};
}
