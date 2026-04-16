#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M; cin >> N >> M;
    vector<int> v(N);
    for (auto& x : v) cin >> x;
    int ans = 0;
    for (int i = 0; i < N; i++)
        for (int j = i+1; j < N; j++)
            for (int k = j+1; k < N; k++) {
                int s = v[i]+v[j]+v[k];
                if (s <= M) ans = max(ans, s);
            }
    cout << ans;
}