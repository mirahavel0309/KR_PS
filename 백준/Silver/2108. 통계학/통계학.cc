#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> v(N);
    for (auto& x : v) cin >> x;
    sort(v.begin(), v.end());

    double sum = 0;
    for (int x : v) sum += x;
    cout << (int)round(sum / N) << "\n";

    cout << v[N/2] << "\n";

    map<int,int> freq;
    for (int x : v) freq[x]++;
    int maxFreq = max_element(freq.begin(), freq.end(), [](auto& a, auto& b){ return a.second < b.second; })->second;
    int modeCount = 0, mode = 0;
    for (auto& [val, cnt] : freq) {
        if (cnt == maxFreq) {
            modeCount++;
            if (modeCount == 2) { mode = val; break; }
            else mode = val;
        }
    }
    cout << mode << "\n";

    cout << v.back() - v.front() << "\n";
}