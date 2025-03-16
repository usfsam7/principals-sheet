#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies in the First quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies in the Second quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies in the Third quadrant." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies in the Fourth quadrant." << endl;
    } else if (x == 0 && y == 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies at the origin." << endl;
    } else if (x == 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies on the y-axis." << endl;
    } else if (y == 0) {
        cout << "The coordinate point (" << x << "," << y << ") lies on the x-axis." << endl;
    }

    return 0;
}