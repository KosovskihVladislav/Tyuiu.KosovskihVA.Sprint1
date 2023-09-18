// Tyuiu.KosovskihVA.Sprint1.Task0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task0.Lib/Tyuiu.KosovskihVA.Sprint1.Task0.Lib.cpp"
#include <math.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Kosovskih\a\t" << "Vladislav\t" << "Alekseevich\n";
    ISprint1Task0V01* dota1 = new Service1();
    cout << "Task0.V1\n";
    int a, b, c;
    cout << "Длина параллелепипеда: ";
    cin >> a;
    cout << endl;
    cout << "Ширина параллелепипеда: ";
    cin >> b;
    cout << endl;
    cout << "Высота параллелепипеда: ";
    cin >> c;
    cout << endl;
    string v;
    v = to_string(dota1->Rezalt(a, b, c));
    cout << "Объем параллелепипеда = " + v;
    cout << endl;
    cout << endl;


    ISprint1Task0V01* dota2 = new Service2();
    cout << "Task0.V2\n";
    cout << "Длина параллелепипеда: ";
    cin >> a;
    cout << endl;
    cout << "Ширина параллелепипеда: ";
    cin >> b;
    cout << endl;
    cout << "Высота параллелепипеда: ";
    cin >> c;
    cout << endl;
    v = to_string(dota2->Rezalt(a, b, c));
    cout << "Площадь боковой поверхности параллелепипеда = " + v;
    cout << endl;
    cout << endl;

    ISprint1Task0V01* dota3 = new Service3();
    cout << "Task0.V3\n";
    cout << "Первое число: ";
    cin >> a;
    cout << endl;
    cout << "Второе число: ";
    cin >> b;
    cout << endl;
    v = to_string(dota3->Rezalt(a, b, c));
    cout << "Сумма квадратов двух чисел = " + v;
    cout << endl;
    cout << endl;

    ISprint1Task0V01* dota4 = new Service4();
    cout << "Task0.V4\n";
    cout << "Длина первой стороны прямоугольника: ";
    cin >> a;
    cout << endl;
    cout << "Длина второй стороны прямоугольника: ";
    cin >> b;
    c = 0;
    cout << endl;
    v = to_string(dota4->Rezalt(a, b, c));
    cout << "Площадь прямоугольника = " + v;
    cout << endl;
    cout << endl;

    ISprint1Task0V01* dota5 = new Service5();
    cout << "Task0.V5\n";
    cout << "Первое число: ";
    cin >> a;
    cout << endl;
    cout << "Второе число: ";
    cin >> b;
    cout << endl;
    cout << "Третье число: ";
    cin >> c;
    cout << endl;
    v = to_string(dota5->Rezalt(a, b, c));
    cout << "Среднее значение трех чисел = " + v;
    cout << endl;
    cout << endl;
}

