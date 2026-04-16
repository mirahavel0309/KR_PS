#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        long long d2 = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        long long sum2 = (r1+r2)*(r1+r2);
        long long diff2 = (r1-r2)*(r1-r2);

        if (d2 == 0 && diff2 == 0) cout << -1 << "\n";
        else if (d2 > sum2 || d2 < diff2) cout << 0 << "\n";
        else if (d2 == sum2 || d2 == diff2) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
}