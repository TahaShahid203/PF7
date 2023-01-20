#include <iostream>
#include <windows.h>
using namespace std;

void printTable(int number);

main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    printTable(number);
}

void printTable(int number)
{
    int value;
    for (int count = 1; count <= 10; count++)
    {
        value = number*count;
        cout << number << " * " << count << " = " << value << endl;
    }
}