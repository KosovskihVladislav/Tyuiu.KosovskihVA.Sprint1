// Tyuiu.KosovskihVA.Sprint1.Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task1.Lib/Tyuiu.KosovskihVA.Sprint1.Task1.Lib.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Kosovskih\a\t" << "Vladislav\t" << "Alekseevich\n";
    ISprint1Task1* lol1 = new Service1();
    cout << "Task1.V1\n";
    int a, b, c;
    cout << "Введите сторону прямоугольника: ";
    cin >> a;
    cout << endl;
    cout << "Введите еще одну сторону прямоугольника: ";
    cin >> b;
    cout << endl;
    if ((lol1->Logic(a) == true) || (lol1->Logic(b) == true))
    {
        c = a + b;
        cout << "Периметр прямоугольника = " + to_string(c);
    }
    else
    {
        cout << "Ни одна сторона прямоугольника не кратна 5 ";
    };
    cout << endl;
    cout << endl;


    ISprint1Task1* lol2 = new Service2();
    cout << "Task1.V2\n";
    cout << "Введите целое число: ";
    cin >> a;
    cout << endl;
    if (lol2->Logic(a) == true)
    {
        cout << "Делится";
    }
    else
    {
        cout << "Не делится";
    };
    cout << endl;
    cout << endl;

    ISprint1Task1* lol3 = new Service3();
    cout << "Task1.V3\n";
    cout << "Введите целое число: ";
    cin >> a;
    cout << endl;
    if (lol3->Logic(a) == true)
    {
        cout << "Четное";
    }
    else
    {
        cout << "Не четное";
    };
    cout << endl;
    cout << endl;

    ISprint1Task1* lol4 = new Service4();
    cout << "Task1.V4\n";
    cout << "Введите целое число: ";
    cin >> a;
    cout << endl;
    if (lol4->Logic(a) == true)
    {
        cout << "Оканчивается семеркой";
    }
    else
    {
        cout << "Не оканчивается семеркой";
    };
    cout << endl;
    cout << endl;

    ISprint1Task1* lol5 = new Service5();
    cout << "Task1.V4\n";
    cout << "Введите трехзначное число: ";
    cin >> a;
    cout << endl;
    if (to_string(a).size() == 3)
    {
        if (lol5->Logic(a) == true)
        {
            cout << "Да является";
        }
        else
        {
            cout << "Не является";
        };
    }
    else
    {
        cout << "Это не трехзначное число";
    };

    cout << endl;
    cout << endl;
}


