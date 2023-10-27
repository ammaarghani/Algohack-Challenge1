#include <iostream>

using namespace std;

int main() {
    int pebbleWeight = 20; // grams
    int lordPebblesThrown = 16, ladyPebblesThrown = 8;
    int totalPebblesWeight = (lordPebblesThrown + ladyPebblesThrown) * pebbleWeight;
    cout << "Total weight of pebbles: " << totalPebblesWeight << " grams" << endl;
}