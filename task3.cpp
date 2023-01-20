#include <iostream>
using namespace std;

int totalDigits(int number);

main()
{
    int number;
    int numberofDigits;
    cout << "Enter your number: ";
    cin >> number;
    numberofDigits = totalDigits(number);
    cout << "Number of digits: " << numberofDigits << endl;
}

int totalDigits(int number)
{
    int counter = 0;
    int terminate = 0;
    while(number != 0)
    {
        number = number/10;
        counter = counter + 1;
    }
    return counter;
}