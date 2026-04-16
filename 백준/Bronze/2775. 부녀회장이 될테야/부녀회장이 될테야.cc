#include <bits/stdc++.h>
using namespace std;

int apt[15][15];

int main() {
    for (int i = 1; i <= 14; i++) apt[0][i] = i;
    for (int floor = 1; floor <= 14; floor++)
        for (int room = 1; room <= 14; room++)
            for (int i = 1; i <= room; i++)
                apt[floor][room] += apt[floor-1][i];

    int T; cin >> T;
    while (T--) {
        int k, n; cin >> k >> n;
        cout << apt[k][n] << "\n";
    }
}