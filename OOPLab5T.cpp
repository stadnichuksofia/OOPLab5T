#include <iostream>
#include "Dot.h"
#include "Comp.h"
#include "People.h"
using namespace std;


void Task1()
{
    TColorDot dot(3.5, 5);
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Select option " << endl;
        cout << "1. Set X" << endl;
        cout << "2. Set Y" << endl;
        cout << "3. Set color" << endl;
        cout << "4. Print Coordinates" << endl;
        cout << "5. Print All" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            system("cls");
            double x;
            cout << "Input X: ";
            cin >> x;
            dot.SetX(x);
            break;
        case 2:
            system("cls");
            double y;
            cout << "Input Y: ";
            cin >> y;
            dot.SetY(y);
            break;
        case 3:
            system("cls");
            unsigned long color;
            cout << "Input color: ";
            cin >> color;
            dot.SetColor(color);
            break;
        case 4:
            system("cls");
            cout << '\t' << '\t' << '\t' << "Print Coordinates: " << endl;
            dot.PrintCoordinates();
            cout << endl << endl;
            break;
        case 5:
            system("cls");
            dot.PrintAll();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}
void Task2()
{
    TProcessor proc(3000);
    TDesktopComputer desComp("Dell", 1500, proc, 27);

    desComp.PrintAll();
}
void Task3()
{
    TPerson person;
    TEmployee employee, employee2;
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Main menu" << endl;
        cout << "1. Cin info" << endl;
        cout << "2. Cout info" << endl;
        cout << "3. Copy" << endl;
        cout << "4. Apropriation" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        if (select == 1)
        {
            system("cls");
            cout << "Enter info(Firstname, lastname, age, height, weight, salary)" << endl;
            cin >> employee;
        }
        else
            if (select == 2)
            {
                system("cls");
                cout << employee;
            }
            else
                if (select == 3)
                {
                    system("cls");
                    TEmployee employee1 = employee;
                    cout << employee1;
                }
                else
                    if (select == 4)
                    {
                        system("cls");
                        employee2 = employee;
                        cout << employee2;
                    }
                    else
                        system("cls");
    } while (select != 0);
}

void MainMenu()
{
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Main menu" << endl;
        cout << "1. Task 1" << endl;
        cout << "2. Task 2" << endl;
        cout << "3. Task 3" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            system("cls");
            Task1();
            break;
        case 2:
            system("cls");
            Task2();
            break;
        case 3:
            system("cls");
            Task3();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}

int main()
{
    MainMenu();

}