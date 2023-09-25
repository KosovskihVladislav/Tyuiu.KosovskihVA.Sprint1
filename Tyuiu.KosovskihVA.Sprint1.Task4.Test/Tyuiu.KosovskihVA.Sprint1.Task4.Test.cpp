#include "pch.h"
#include "CppUnitTest.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task4.Lib/Tyuiu.KosovskihVA.Sprint1.Task4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuKosovskihVASprint1Task4Test
{
	TEST_CLASS(Task4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task4* lol1 = new Service1();
			float x = 12;
			float y = lol1->Vibor(x);

		}
	public:

		TEST_METHOD(TestMethod2)
		{
			ISprint1Task4* lol1 = new Service1();
			float x = -4;
			float y = lol1->Vibor(x);
		}
	public:

		TEST_METHOD(TestMethod3)
		{
			ISprint1Task4* lol1 = new Service1();
			float x = 8;
			float y = lol1->Vibor(x);
		}
	};
}
