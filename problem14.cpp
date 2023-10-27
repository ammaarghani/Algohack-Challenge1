#include <iostream>

using namespace std;

int main() {
    int lordCrowSleepTime = 600;
    int lordCrowWakeTime = 1080;
    int difference = lordCrowSleepTime-lordCrowWakeTime;
    int difhours = difference/60;
    cout << difhours << " hours" <<endl;
}