#include <iostream>
using namespace std;

int frequencyDigits(int number, int digit);

main()
{
    int number;
    int digit;
    int frequencyOfDigits;
    cout << "Enter your number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit;
    frequencyOfDigits = frequencyDigits(number, digit);
    cout << "Frequency of digits: " << frequencyOfDigits << endl;
}

int frequencyDigits(int number, int digit)
{
    int counter = 0;
    int value = 0;
    while(number != 0)
    {
        value = number%10;
        if (value == digit)
        {
            counter = counter + 1;
        }
        number = number/10;
    }
    return counter;
}