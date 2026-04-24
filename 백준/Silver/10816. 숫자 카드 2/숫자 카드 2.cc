#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N; cin >> N;
    unordered_map<int,int> cnt;
    for (int i = 0; i < N; i++) { int x; cin >> x; cnt[x]++; }
    int M; cin >> M;
    while (M--) { int x; cin >> x; cout << cnt[x] << " "; }
}