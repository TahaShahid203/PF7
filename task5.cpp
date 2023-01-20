#include <iostream>
using namespace std;

int digitSum(int number);

main()
{
    int number;
    int sumOfDigits;
    cout << "Enter your number: ";
    cin >> number;

    sumOfDigits = digitSum(number);
    cout << "Sum of digits: " << sumOfDigits << endl;
}

int digitSum(int number)
{
    int value = 0;
    int sum = 0;
    while(number != 0)
    {
        value = number%10;
        sum = sum + value;
        number = number/10;
    }
    return sum;
}