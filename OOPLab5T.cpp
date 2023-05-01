#include <iostream>
#include "Dot.h"
#include "Computer.h"
#include "People.h"
using namespace std;


void Task1()
//Task 1.10.
// Створити клас точка, що має координати. Визначити конструктори, деструктор і функцію друку. Створити похідний клас - кольорова точка колір. 
//Визначити конструктори за замовчуванням та із різним числом параметрів, деструктори, функцію друку.
//Визначити функції перепризначення кольору й координат точки, виведення координат точки. Написати програму тестування всіх можливостей цього класу.
{
    CppColorDot dot(4.9, 7);
    int select = 0;
    do
    {
        cout << "Please, select the required option: " << endl;
        cout << '\t' << endl;
        cout << "1. Enter abscissa of dot (X): " << endl;
        cout << "2. Enter ordinate of dot (Y): " << endl;
        cout << "3. Enter the color code: " << endl;
        cout << "4. Print coordinates of dot (X,Y): " << endl;
        cout << "5. Print all information: " << endl;
        cout << "6. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            system("cls");
            double x;
            cout << "Input abscissa X: ";
            cin >> x;
            dot.SetX(x);
            break;
        case 2:
            system("cls");
            double y;
            cout << "Input ordinate Y: ";
            cin >> y;
            dot.SetY(y);
            break;
        case 3:
            system("cls");
            unsigned long color;
            cout << "Input color code: ";
            cin >> color;
            dot.SetColor(color);
            break;
        case 4:
            system("cls");
            cout << '\t' << '\t' << '\t' << " Print coordinates of dot (X,Y): " << endl;
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
//2.10.
//Створити клас процесор, що має потужність(Мгц). Визначити конструктори й метод доступу.
//Створити клас комп'ютер, що містить клас процесор. Додатково є марка (вказівник на рядок), ціна. Визначити конструктори й деструктор.
//Визначити private-, public- похідний клас комп'ютерів з монітором розмір, що має додатково, монітора.Визначить конструктори, деструктори й функцію друку.
{
    CppProcessor proc(3000);
    CppDesktopComputer desComp("Dell", 1500, proc, 27);

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
        cout << "Main menu" << endl;
        cout << '\t' << endl;
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