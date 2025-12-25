#include <iostream>
#include <vector>
#include <string>
#include <complex>
#include <cmath>
#include <algorithm>

using namespace std;

using cd = complex<double>;
const double pi = acos(-1.0);

void fft(vector<cd> &a, bool invert) {
    int n = (int)a.size();

    for (int i = 1, j = 0; i < n; i++) {
        int bit = n >> 1;
        while (j & bit) {
            j ^= bit;
            bit >>= 1;
        }
        j |= bit;
        if (i < j) swap(a[i], a[j]);
    }

    for (int len = 2; len <= n; len <<= 1) {
        double ang = 2.0 * pi / len * (invert ? -1.0 : 1.0);
        cd wlen(cos(ang), sin(ang));
        for (int i = 0; i < n; i += len) {
            cd w(1.0, 0.0);
            int half = len >> 1;
            for (int j = 0; j < half; j++) {
                cd u = a[i + j];
                cd v = a[i + j + half] * w;
                a[i + j] = u + v;
                a[i + j + half] = u - v;
                w *= wlen;
            }
        }
    }

    if (invert) {
        for (int i = 0; i < n; i++) a[i] /= (double)n;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    string a, b;
    cin >> n >> m;
    cin >> a >> b;

    if (a == "0" || b == "0") {
        cout << "0";
        return 0;
    }

    vector<int> aint(n), bint(m);
    for (int i = 0; i < n; i++) aint[i] = a[n - 1 - i] - '0';
    for (int i = 0; i < m; i++) bint[i] = b[m - 1 - i] - '0';

    int sz = 1;
    while (sz < n + m) sz <<= 1;

    vector<cd> fa(sz), fb(sz);
    for (int i = 0; i < n; i++) fa[i] = cd((double)aint[i], 0.0);
    for (int i = 0; i < m; i++) fb[i] = cd((double)bint[i], 0.0);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < sz; i++) fa[i] *= fb[i];
    fft(fa, true);

    vector<long long> res(sz);
    for (int i = 0; i < sz; i++) res[i] = (long long)(fa[i].real() + 0.5);

    long long carry = 0;
    for (int i = 0; i < sz; i++) {
        long long t = res[i] + carry;
        res[i] = t % 10;
        carry = t / 10;
    }

    int i = sz - 1;
    while (i > 0 && res[i] == 0) i--;

    for (; i >= 0; i--) cout << res[i];

    return 0;
}