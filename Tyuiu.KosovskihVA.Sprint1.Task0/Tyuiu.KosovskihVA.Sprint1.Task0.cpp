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
    cout << "����� ���������������: ";
    cin >> a;
    cout << endl;
    cout << "������ ���������������: ";
    cin >> b;
    cout << endl;
    cout << "������ ���������������: ";
    cin >> c;
    cout << endl;
    string v;
    v = to_string(dota1->Rezalt(a, b, c));
    cout << "����� ��������������� = " + v;
    cout << endl;
    cout << endl;


    ISprint1Task0V01* dota2 = new Service2();
    cout << "Task0.V2\n";
    cout << "����� ���������������: ";
    cin >> a;
    cout << endl;
    cout << "������ ���������������: ";
    cin >> b;
    cout << endl;
    cout << "������ ���������������: ";
    cin >> c;
    cout << endl;
    v = to_string(dota2->Rezalt(a, b, c));
    cout << "������� ������� ����������� ��������������� = " + v;
    cout << endl;
    cout << endl;

    ISprint1Task0V01* dota3 = new Service3();
    cout << "Task0.V3\n";
    cout << "������ �����: ";
    cin >> a;
    cout << endl;
    cout << "������ �����: ";
    cin >> b;
    cout << endl;
    v = to_string(dota3->Rezalt(a, b, c));
    cout << "����� ��������� ���� ����� = " + v;
    cout << endl;
    cout << endl;

    ISprint1Task0V01* dota4 = new Service4();
    cout << "Task0.V4\n";
    cout << "����� ������ ������� ��������������: ";
    cin >> a;
    cout << endl;
    cout << "����� ������ ������� ��������������: ";
    cin >> b;
    c = 0;
    cout << endl;
    v = to_string(dota4->Rezalt(a, b, c));
    cout << "������� �������������� = " + v;
    cout << endl;
    cout << endl;

    ISprint1Task0V01* dota5 = new Service5();
    cout << "Task0.V5\n";
    cout << "������ �����: ";
    cin >> a;
    cout << endl;
    cout << "������ �����: ";
    cin >> b;
    cout << endl;
    cout << "������ �����: ";
    cin >> c;
    cout << endl;
    v = to_string(dota5->Rezalt(a, b, c));
    cout << "������� �������� ���� ����� = " + v;
    cout << endl;
    cout << endl;
}

