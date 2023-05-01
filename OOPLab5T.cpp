
#include <iostream>
using namespace std;


void Task1()
{
    cout << "Hello Task 1" << endl;
}
void Task2()
{
    cout << "Hello Task 2" << endl;
}
void Task3()
{
    cout << "Hello Task 3" << endl;
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