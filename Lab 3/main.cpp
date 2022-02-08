#include "imaginary.h"
#include <iostream>
using namespace std;

int main() {

    string temp = "";

    Imaginary TestClassA;

    Imaginary TestClassB;

    do
    {
        cout << "Enter values for X and Y: ";
        float a;
        float b;
        cin >> a >> b;
        TestClassA = Imaginary(a, b);
        cout << "Enter values for A and B: ";
        cin >> a >> b;
        TestClassB = Imaginary(a, b);
        cout << endl << "Choose an operation (+, -, *, /, ==, polar): ";
        cin >> temp;
        cout << endl;

        if (temp == "+") {
            TestClassA.operator+(TestClassB);
            TestClassA.printNumber();
        } else if (temp == "-") {
            TestClassA.operator-(TestClassB);
            TestClassA.printNumber();
        } else if (temp == "*") {
            cout << "Enter a scalar value: ";
            cin >> a;
            TestClassA.operator*(a);
            TestClassA.printNumber();
        } else if (temp == "/") {
            cout << "Enter a scalar value: ";
            cin >> a;
            TestClassA.operator/(a);
            TestClassA.printNumber();
        }
        else if (temp == "==") {
            cout << (TestClassA.operator==(TestClassB) ? "True" : "False");
        } else if (temp == "polar") {
            TestClassA.printPolar();
        } else {
            cout << "Invalid operator.";
        }

        cout << endl << "Would you like to continue? [y/n] ";
        cin >> temp;

    } while (temp == "y");
    
    return 0;
}