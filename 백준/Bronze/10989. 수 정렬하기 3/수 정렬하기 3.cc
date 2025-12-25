#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt[10001] = {0};

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (cnt[i]--) cout << i << '\n';
    }
    return 0;
}