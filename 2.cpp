#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is an even integer." << endl;
    } else {
        cout << number << " is an odd integer." << endl;
    }

    return 0;
}