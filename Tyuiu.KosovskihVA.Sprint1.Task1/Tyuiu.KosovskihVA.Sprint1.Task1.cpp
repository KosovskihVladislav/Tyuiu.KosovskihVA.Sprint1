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
    cout << "������� ������� ��������������: ";
    cin >> a;
    cout << endl;
    cout << "������� ��� ���� ������� ��������������: ";
    cin >> b;
    cout << endl;
    if ((lol1->Logic(a) == true) || (lol1->Logic(b) == true))
    {
        c = a + b;
        cout << "�������� �������������� = " + to_string(c);
    }
    else
    {
        cout << "�� ���� ������� �������������� �� ������ 5 ";
    };
    cout << endl;
    cout << endl;


    ISprint1Task1* lol2 = new Service2();
    cout << "Task1.V2\n";
    cout << "������� ����� �����: ";
    cin >> a;
    cout << endl;
    if (lol2->Logic(a) == true)
    {
        cout << "�������";
    }
    else
    {
        cout << "�� �������";
    };
    cout << endl;
    cout << endl;

    ISprint1Task1* lol3 = new Service3();
    cout << "Task1.V3\n";
    cout << "������� ����� �����: ";
    cin >> a;
    cout << endl;
    if (lol3->Logic(a) == true)
    {
        cout << "������";
    }
    else
    {
        cout << "�� ������";
    };
    cout << endl;
    cout << endl;

    ISprint1Task1* lol4 = new Service4();
    cout << "Task1.V4\n";
    cout << "������� ����� �����: ";
    cin >> a;
    cout << endl;
    if (lol4->Logic(a) == true)
    {
        cout << "������������ ��������";
    }
    else
    {
        cout << "�� ������������ ��������";
    };
    cout << endl;
    cout << endl;

    ISprint1Task1* lol5 = new Service5();
    cout << "Task1.V4\n";
    cout << "������� ����������� �����: ";
    cin >> a;
    cout << endl;
    if (to_string(a).size() == 3)
    {
        if (lol5->Logic(a) == true)
        {
            cout << "�� ��������";
        }
        else
        {
            cout << "�� ��������";
        };
    }
    else
    {
        cout << "��� �� ����������� �����";
    };

    cout << endl;
    cout << endl;
}


