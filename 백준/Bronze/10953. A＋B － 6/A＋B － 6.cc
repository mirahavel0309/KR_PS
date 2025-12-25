#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int a, b;
        char c;
        cin >> a >> c >> b;
        cout << a + b << '\n'; 
    }

}