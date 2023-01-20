#include <iostream>
using namespace std;

main()
{
    int numberOfNumbers;
    int number;
    float c1 = 0;
    float c2 = 0;
    float c3 = 0;
    float c4 = 0;
    float c5 = 0;
    float p1, p2, p3, p4, p5;
    cout << "Enter how many numbers to enter: ";
    cin >> numberOfNumbers;
    for (int counter = 1; counter <= numberOfNumbers; counter++)
    {
        cout << "Enter number: ";
        cin >> number;
        if (number < 200)
        {
            c1++;
        }
        else if (number >= 200 && number <=399)
        {
            c2++;
        }
        else if (number >= 400 && number <=599)
        {
            c3++;
        }
        else if (number >=600 && number <= 799)
        {
            c4++;
        }
        else if (number >=800)
        {
            c5++;
        }
    }
    
    p1 = c1/numberOfNumbers * 100;
    p2 = c2/numberOfNumbers * 100;
    p3 = c3/numberOfNumbers * 100;
    p4 = c4/numberOfNumbers * 100;
    p5 = c5/numberOfNumbers * 100;
    
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << p4 << endl;
    cout << p5 << endl;
}