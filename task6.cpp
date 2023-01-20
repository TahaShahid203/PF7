#include <iostream>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);


main()
{
    int number1, number2, gcd, lcm;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    gcd = calculateGCD(number1, number2);
    lcm = calculateLCM(number1, number2, gcd);

    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;    
}

int calculateGCD(int number1, int number2)
{
    int gcd = 1;
    int small;
    if (number1 < number2)
    {
        small = number1;
    }
    else
    {
        small = number2;
    }
    for (int counter=1; counter <= small; counter++)
    {
        if (number1%counter==0 && number2%counter == 0)
        {
            gcd = counter;
        }
    }
    return gcd;
}

int calculateLCM(int number1, int number2, int gcd)
{
    int lcm, product;
    product = number1 * number2;
    lcm = product/gcd;
    return lcm;
}