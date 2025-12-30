#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end(), [](const string& a, const string& b) {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;
    });

    v.erase(unique(v.begin(), v.end()), v.end());

    for (auto& s : v) cout << s << '\n';
}