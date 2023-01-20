#include <iostream>
using namespace std;

float calculateMoneySaved(int age, int priceOfEachToy);

main()
{
    int age;
    float priceOfEachToy, priceOfMachine, moneySaved, difference;
    cout << "Enter Lily's age: ";
    cin >> age;
    cout << "Enter price of washing machine: ";
    cin >> priceOfMachine;
    cout << "Enter price of each toy: ";
    cin >> priceOfEachToy;

    moneySaved = calculateMoneySaved(age, priceOfEachToy);

    difference = moneySaved - priceOfMachine;

    if (difference >= 0)
    {
        cout << "Yes! " << difference << endl;
    }
    else 
    {
        difference = 0 - difference;
        cout << "No! " << difference << endl;
    }
    
    
}

float calculateMoneySaved(int age, int priceOfEachToy)
{
    int numberOfEvenBirthdays, numberOfOddBirthdays;
    float moneySavedDuringEvenBirthdays = 0;
    float moneyEarnedFromOddBirthdays, moneyTookByBrother, moneySaved;
    if (age%2 == 0)
    {
        numberOfEvenBirthdays = age/2;
        numberOfOddBirthdays = numberOfEvenBirthdays;
    }
    else
    {
        numberOfEvenBirthdays = (age-1)/2;
        numberOfOddBirthdays = age - numberOfEvenBirthdays;
    }
    for (int counter=1; counter<=numberOfEvenBirthdays; counter++)
    {
        moneySavedDuringEvenBirthdays = moneySavedDuringEvenBirthdays + counter*10;
    }
    moneyEarnedFromOddBirthdays = priceOfEachToy * numberOfOddBirthdays;
    moneyTookByBrother = numberOfEvenBirthdays;
    moneySaved = moneySavedDuringEvenBirthdays + moneyEarnedFromOddBirthdays - moneyTookByBrother;

    return moneySaved;

}