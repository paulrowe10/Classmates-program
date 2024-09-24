//Paul Rowe
//9/24/24
//Mrs. Alblas
//Code your classmates program

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "Greatest to least: " << num1 << ", " << num2 << endl;
        cout << "Least to greatest: " << num2  << ", " << num1 << endl;
    }
    else if (num2 > num1) {
        cout << "Greatest to least: " << num2 << ", " << num1 << endl;
        cout << "Least to greatest: " << num1 << ", " << num2 << endl;
    }
    else {
        cout << "These numbers are equal.";
    }
}
