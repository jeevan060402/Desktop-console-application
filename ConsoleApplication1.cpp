// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
        << endl;

    Calculator c;
    int start = 1;
    while (true)
    {

        bool cont = true;
        if (start > 1) {
            char res = 'y';
            cout << "do you still want to calculate , please enter y/n : ";
            cin >> res;
            if (res == 'y')
                cont = true;
            else
                cont = false;
        }
        start = start + 1;
        if (cont)
        {
            cin >> x >> oper >> y;
            if (oper == '/' && y == 0)
            {
                cout << "Attempted to divide by zero!" << endl;
                continue;
            }
            else
            {
                result = c.Calculate(x, oper, y);
            }
            cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
        }
        else {
            cout << "Thank you";
            break;
        }
        
    }

    return 0;
}