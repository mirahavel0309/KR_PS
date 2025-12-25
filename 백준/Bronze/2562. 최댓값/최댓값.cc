#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int maxValue = -1;
    int maxIndex = 0;

    for (int i = 0; i < 9; i++) {
        int x;
        cin >> x;

        if (x > maxValue) {
            maxValue = x;
            maxIndex = i;
        }
    }

    cout << maxValue << '\n';
    cout << maxIndex + 1 << '\n';

    return 0;
}