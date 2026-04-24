#include <bits/stdc++.h>
using namespace std;
int main() {
    int K; cin >> K;
    stack<int> st;
    while (K--) {
        int x; cin >> x;
        if (x == 0) st.pop();
        else st.push(x);
    }
    long long sum = 0;
    while (!st.empty()) { sum += st.top(); st.pop(); }
    cout << sum;
}