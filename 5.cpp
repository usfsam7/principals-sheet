#include <iostream>
using namespace std;

int main() {
    float height;

    cout << "Enter the height of the person (in centimeters): ";
    cin >> height;

    if (height < 150.0) {
        cout << "The person is Dwarf." << endl;
    } else if (height >= 150.0 && height < 165.0) {
        cout << "The person is of average height." << endl;
    } else if (height >= 165.0 && height < 180.0) {
        cout << "The person is tall." << endl;
    } else {
        cout << "The person is very tall." << endl;
    }

    return 0;
}