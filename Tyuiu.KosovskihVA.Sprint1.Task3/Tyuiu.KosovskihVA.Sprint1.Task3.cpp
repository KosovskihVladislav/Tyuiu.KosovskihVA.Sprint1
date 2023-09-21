// Tyuiu.KosovskihVA.Sprint1.Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task3.Lib/Tyuiu.KosovskihVA.Sprint1.Task3.Lib.cpp"
#include <string>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Kosovskih\a\t" << "Vladislav\t" << "Alekseevich\n";
    ISprint1Task2* lol1 = new Service1();
    cout << "Task3\n";
    int a;
    cout << "Введите четырехзначное число: ";
    cin >> a;
    cout << endl;
    if (lol1->LogicLong(a) == true)
    {
        if (a != 1000 && a % 4 == 0)
        {
            a *= 2;
            cout << a;
        }
        else
        {
            a /= 5;
            cout << a;
        };
    }
    else
    {
        cout << "Вы ввели не четное или не четырехзначное число ";
    };
    cout << endl;
    cout << endl;
}
