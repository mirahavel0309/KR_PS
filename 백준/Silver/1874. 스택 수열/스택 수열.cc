#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> seq(n);
    for (auto& x : seq) cin >> x;
    
    stack<int> st;
    string result;
    int cur = 1;
    bool ok = true;
    
    for (int i = 0; i < n; i++) {
        while (cur <= seq[i]) { st.push(cur++); result += "+\n"; }
        if (st.top() != seq[i]) { ok = false; break; }
        st.pop(); result += "-\n";
    }
    
    cout << (ok ? result : "NO\n");
}