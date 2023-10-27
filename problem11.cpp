#include <iostream>

using namespace std;

int main() {
    int lengthMeters;
    cout << "Enter a length in meters: ";
    cin >> lengthMeters;

    int conversion1 = 100;  // 1 meter = 100 centimeters
    int conversion2 = 50;   // 1 meter = 50 centimeters
    int conversion3 = 120;  // 1 meter = 120 centimeters

    int result1 = lengthMeters * conversion1;
    int result2 = lengthMeters * conversion2;
    int result3 = lengthMeters * conversion3;

    cout << lengthMeters << " meters is equal to:" << endl;
    cout << result1 << " centimeters (If 1 meter = 100 centimeters)" << endl;
    cout << result2 << " centimeters (If 1 meter = 50 centimeters)" << endl;
    cout << result3 << " centimeters (If 1 meter = 120 centimeters)" << endl;

    return 0;
}