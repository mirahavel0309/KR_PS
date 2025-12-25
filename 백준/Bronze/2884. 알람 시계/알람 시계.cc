#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;

    int total = h * 60 + m;   
    total -= 45;

    if (total < 0) {
        total += 1440;
    }

    h = total / 60;
    m = total % 60;

    cout << h << ' ' << m;
    return 0;
}
