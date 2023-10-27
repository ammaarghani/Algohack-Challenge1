#include <iostream>
using namespace std;

int main() {
    int litersOfAppleJuice = 4;
    int millilitersInLiter1 = 500;
    int millilitersInLiter2 = 250;

    int result1 = litersOfAppleJuice * millilitersInLiter1;
    int result2 = litersOfAppleJuice * millilitersInLiter2;

    cout << litersOfAppleJuice << " liters of apple juice is equal to:" << endl;
    cout << result1 << " milliliters (If 1 liter = 500 milliliters)" << endl;
    cout << result2 << " milliliters (If 1 liter = 250 milliliters)" << endl;
}
