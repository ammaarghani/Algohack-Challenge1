#include <iostream>

using namespace std;

int main() {
    int lordCrowTotalWorkHours = 32;
    int daysWorkedByLordCrow = 4;
    int lordCrowWorkHoursPerDay = lordCrowTotalWorkHours / daysWorkedByLordCrow;
    cout << "Lord Crow worked for: " << lordCrowWorkHoursPerDay << " hours each day" << endl;
}