
#include <iostream>
using namespace std;

int main() {
    int m, n;

    
    cout << "Enter the value of m: ";
    cin >> m;

    if (m > 0) {
        n = 1;
    } else if (m == 0) {
        n = 0;
    } else {
        n = -1;
    }

    cout << "The value of n = " << n << endl;

    return 0;
}