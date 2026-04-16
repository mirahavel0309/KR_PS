#include <bits/stdc++.h>
using namespace std;

bool isApocalypse(int n) {
    string s = to_string(n);
    return s.find("666") != string::npos;
}

int main() {
    int N; cin >> N;
    int cnt = 0, i = 0;
    while (cnt < N) if (isApocalypse(++i)) cnt++;
    cout << i;
}