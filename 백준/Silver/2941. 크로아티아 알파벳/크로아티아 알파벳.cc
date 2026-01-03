#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string pat[] = {"dz=", "c=", "c-", "d-", "lj", "nj", "s=", "z="};

    string s;
    cin >> s;

    int ans = 0;
    int pos = 0;
    int P = (int)(sizeof(pat) / sizeof(pat[0]));

    while (pos < (int)s.size()) {
        bool matched = false;

        for (int i = 0; i < P; i++) {
            int len = (int)pat[i].size();

            if (pos + len <= (int)s.size() && s.compare(pos, len, pat[i]) == 0) {
                ans++;
                pos += len;
                matched = true;
                break;
            }
        }

        if (!matched) {
            ans++;
            pos++;
        }
    }

    cout << ans << '\n';
    return 0;
}