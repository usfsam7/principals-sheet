#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    cout << "1st Number = " << num1 << ", \t2nd Number = " << num2 << ", \t3rd Number = " << num3 << endl;

    if (num1 > num2 && num1 > num3) {
        cout << "The 1st Number is the greatest among three." << endl;
    } else if (num2 > num1 && num2 > num3) {
        cout << "The 2nd Number is the greatest among three." << endl;
    } else {
        cout << "The 3rd Number is the greatest among three." << endl;
    }

    return 0;
}