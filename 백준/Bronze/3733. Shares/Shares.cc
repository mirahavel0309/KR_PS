#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;
    while (cin >> n >> s) {
        int x = s / (n + 1);
        cout << x << '\n';
    }
}
