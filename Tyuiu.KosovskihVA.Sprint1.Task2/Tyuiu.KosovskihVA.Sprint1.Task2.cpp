// Tyuiu.KosovskihVA.Sprint1.Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../Tyuiu.KosovskihVA.Sprint1/Tyuiu.KosovskihVA.Sprint1.Task2.Lib/Tyuiu.KosovskihVA.Sprint1.Task2.Lib.cpp"
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Kosovskih\a\t" << "Vladislav\t" << "Alekseevich\n";
    ISprint1Task2* lol1 = new Service1();
    cout << "Task2.V1\n";
    int a;
    cout << "������� ����������� �����: ";
    cin >> a;
    cout << endl;
    if ((lol1->LogicLong(a) == true) && to_string(a).size() == 3)
    {
        cout << "��, �������� ";
    }
    else
    {
        cout << "�� ��������, ���� ����� �� ����������� ";
    };
    cout << endl;
    cout << endl;

    
    ISprint1Task2* lol2 = new Service2();
    cout << "Task2.V2\n";
    cout << "������� �������������� �����: ";
    cin >> a;
    cout << endl;
    if ((lol2->LogicLong(a) == true) && to_string(a).size() == 4)
    {
        cout << "��, ����� ��� ����, ������ ���� ";
    }
    else
    {
        cout << "�� ������, ���� ����� �� �������������� ";
    };
    cout << endl;
    cout << endl;

    
    
    ISprint1Task2* lol3 = new Service3();
    cout << "Task2.V3\n";
    cout << "������� ����������� �����: ";
    cin >> a;
    cout << endl;
    int A;
    cout << "������� ����� A: ";
    cin >> A;
    cout << endl;
    if ((lol3->LogicLong(a) % A == 0) && to_string(a).size() == 3)
    {
        cout << "��, ����� ��� ����, ������ ����� � ";
    }
    else
    {
        cout << "�� ������, ���� ����� �� ����������� ";
    };
    cout << endl;
    cout << endl;



    ISprint1Task2* lol4 = new Service4();
    cout << "Task2.V4\n";
    cout << "������� ����������� �����: ";
    cin >> a;
    cout << endl;
    if ((lol4->LogicLong(a) == true) && to_string(a).size() == 3)
    {
        cout << "��, ��� ��������� ����� ������ ���� ";
    }
    else
    {
        cout << "�� ������, ���� ����� �� ����������� ";
    };
    cout << endl;
    cout << endl;



    ISprint1Task2* lol5 = new Service5();
    cout << "Task2.V5\n";
    cout << "������� ����������� �����: ";
    cin >> a;
    cout << endl;
    cout << "������� ����� A: ";
    cin >> A;
    cout << endl;
    if ((lol5->LogicLong(a) > A) && to_string(a).size() == 3)
    {
        cout << "��, ������������ ��� ���� ������ ����� � ";
    }
    else
    {
        cout << "��� ������, ���� �����, ���� ����� �� ����������� ";
    };
    cout << endl;
    cout << endl;
}

