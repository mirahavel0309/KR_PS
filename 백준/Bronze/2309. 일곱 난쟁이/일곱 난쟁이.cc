#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int arr[9];
    int s = 0;

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        s += arr[i];
    }

    int target = s - 100;
    int x = -1, y = -1;

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (arr[i] + arr[j] == target) {
                x = i;
                y = j;
                break;
            }
        }
        if (x != -1) break;
    }

    vector<int> v;
    for (int i = 0; i < 9; i++) {
        if (i == x || i == y) continue;
        v.push_back(arr[i]);
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < 7; i++) {
        cout << v[i] << "\n";
    }
}