#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "Enter the first integer: ";
    cin >> number1;

    cout << "Enter the second integer: ";
    cin >> number2;

    if (number1 == number2) {
        cout << "Number1 and Number2 are equal." << endl;
    } else {
        cout << "Number1 and Number2 are not equal." << endl;
    }

    return 0;
}