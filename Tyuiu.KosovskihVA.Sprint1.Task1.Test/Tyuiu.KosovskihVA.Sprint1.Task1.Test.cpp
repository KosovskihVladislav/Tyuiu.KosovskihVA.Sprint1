#include "pch.h"
#include "CppUnitTest.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task1.Lib/Tyuiu.KosovskihVA.Sprint1.Task1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuKosovskihVASprint1Task1Test
{
	TEST_CLASS(Task1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* lol1 = new Service1();
			int a = 10, b = 10, c = 0;
			if (lol1->Logic(a) || lol1->Logic(b))
			{
				c = a + b;
			}
			else
			{
				c = a - b;
			};
		}

	public:

		TEST_METHOD(TestMethod2)
		{
			ISprint1Task1* lol2 = new Service2();
			int a = 123, c = 0;
			if (lol2->Logic(a))
			{
				c = a;
			}
			else
			{
				c = a - 1;
			};
		}

	public:

		TEST_METHOD(TestMethod3)
		{
			ISprint1Task1* lol3 = new Service3();
			int a = 337, c = 0;
			if (lol3->Logic(a))
			{
				c = a;
			}
			else
			{
				c = a - 1;
			};
		}

	public:

		TEST_METHOD(TestMethod4)
		{
			ISprint1Task1* lol4 = new Service4();
			int a = 337, c = 0;
			if (lol4->Logic(a))
			{
				c = a;
			}
			else
			{
				c = a - 1;
			};
		}

	public:

		TEST_METHOD(TestMethod5)
		{
			ISprint1Task1* lol5 = new Service5();
			int a = 337, c = 0;
			if (lol5->Logic(a))
			{
				c = a;
			}
			else
			{
				c = a - 1;
			};
		}
	};
}
