// Tyuiu.KosovskihVA.Sprint1.Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task4.Lib/Tyuiu.KosovskihVA.Sprint1.Task4.Lib.cpp"
#include <string>
#include "math.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Kosovskih\a\t" << "Vladislav\t" << "Alekseevich\n";
    ISprint1Task4* lol1 = new Service1();
    cout << "Task4\n";
    float x;
    cout << "Введите любое значение X: ";
    cin >> x;
    cout << endl;
    float y = lol1->Vibor(x);
    cout << "Функция y = " + to_string(y);
    cout << endl;
}


