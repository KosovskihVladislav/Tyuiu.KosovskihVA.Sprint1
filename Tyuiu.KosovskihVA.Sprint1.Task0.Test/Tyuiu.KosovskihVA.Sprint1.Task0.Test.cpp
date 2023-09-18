#include "pch.h"
#include "CppUnitTest.h"
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task0.Lib/Tyuiu.KosovskihVA.Sprint1.Task0.Lib.cpp"
#include <math.h>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuKosovskihVASprint1Task0Test
{
	TEST_CLASS(Task0Test)
	{
	public:
		
		TEST_METHOD(TestSit1)
		{
			ISprint1Task0V01* dota1 = new Service1();
			int a = 10, b = 10, c = 5, v;
			v = dota1->Rezalt(a, b, c);
		};
	
	public:

		TEST_METHOD(TestSit2)
		{
			ISprint1Task0V01* dota2 = new Service2();
			int a = 10, b = 10, c = 5, v;
			v = dota2->Rezalt(a, b, c);
		};
	
	public:

		TEST_METHOD(TestSit3)
		{
			ISprint1Task0V01* dota3 = new Service3();
			int a = 10, b = 10, c = 0, v;
			v = dota3->Rezalt(a, b, c);
		};
	
	public:

		TEST_METHOD(TestSit4)
		{
			ISprint1Task0V01* dota4 = new Service4();
			int a = 10, b = 10, c = 0, v;
			v = dota4->Rezalt(a, b, c);
		};
	
	public:

		TEST_METHOD(TestSit5)
		{
			ISprint1Task0V01* dota5 = new Service5();
			int a = 10, b = 10, c = 5, v;
			v = dota5->Rezalt(a, b, c);
		};
	};
}
