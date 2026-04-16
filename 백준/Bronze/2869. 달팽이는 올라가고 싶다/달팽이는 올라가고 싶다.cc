#include <bits/stdc++.h>
using namespace std;
int main() {
    long long A, B, V; cin >> A >> B >> V;
    cout << (V - A + A - B - 1) / (A - B) + 1;
}