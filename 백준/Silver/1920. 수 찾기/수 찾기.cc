#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<int> a(N);
    for (auto& x : a) cin >> x;
    sort(a.begin(), a.end());
    int M; cin >> M;
    while (M--) {
        int x; cin >> x;
        cout << (binary_search(a.begin(), a.end(), x) ? 1 : 0) << "\n";
    }
}