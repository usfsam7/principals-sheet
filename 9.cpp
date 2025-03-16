#include <iostream>
using namespace std;

int main() {
    float costPrice, sellingPrice;

    cout << "Enter the cost price: ";
    cin >> costPrice;
    cout << "Enter the selling price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        cout << "You can book your profit amount: " << profit << endl;
    } else if (sellingPrice < costPrice) {
        float loss = costPrice - sellingPrice;
        cout << "You incurred a loss amount: " << loss << endl;
    } else {
        cout << "No profit, no loss." << endl;
    }

    return 0;
}