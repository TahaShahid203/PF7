#include <iostream>
using namespace std;

void printFibonacci(int number);

main()
{
    int number;
    cout << "Enter number of terms: ";
    cin >> number;
    printFibonacci(number);
}

void printFibonacci(int number)
{
    int n1 = 0;
    int n2 = 1;
    int c = 0;
    cout << n1 << ", ";
    for (int idx=1; idx < number; idx = idx + 1)
    {
        cout << n2 << ", ";
        c = n2;
        n2 = n1 + n2;
        n1 = c;
    }
}