#include <iostream>
using namespace std;

float calculatePrice(float money, int year);

main()
{
    float inheritance, difference;
    int lastYear;


    cout << "Enter inheritance obtained: ";
    cin >> inheritance;
    cout << "Enter the year till which he wants to live: ";
    cin >> lastYear;

    difference = calculatePrice(inheritance, lastYear);

    if (difference >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " << difference << " dollars saved. " << endl;
    }
    else 
    {
        difference = 0 - difference;
        cout << "He will need " << difference << " dollars to survive." << endl;
    }

}

float calculatePrice(float money, int year)
{
    int yearsLived, oddYears, evenYears;
    float moneySpentDuringEvenYears, moneySpent, difference;
    float moneySpentDuringOddYears = 0;

    yearsLived = year - 1799;
    if (yearsLived%2 == 0)
    {
        evenYears = (yearsLived/2);
    }
    else 
    {
        evenYears = (yearsLived + 1) / 2;
    }

    oddYears = yearsLived - evenYears;

    moneySpentDuringEvenYears = 12000*evenYears;
    for (int counter=1; counter<=oddYears; counter++)
    {
        moneySpentDuringOddYears = moneySpentDuringOddYears + 12000 + 50*(19 + (counter - 1)*2);
    }

    moneySpent = moneySpentDuringEvenYears + moneySpentDuringOddYears;

    difference = money - moneySpent;

    return difference;


}