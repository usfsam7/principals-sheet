#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "The alphabet is a vowel." << endl;
        } else {
            cout << "The alphabet is a consonant." << endl;
        }
    } else {
        cout << "Invalid input. Please enter an alphabet." << endl;
    }

    return 0;
}