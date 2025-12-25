#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string strip(const string& s) {
    int i = 0;
    while (i + 1 < (int)s.size() && s[i] == '0') i++;
    return s.substr(i);
}

bool absGE(const string& a, const string& b) {
    if (a.size() != b.size()) return a.size() > b.size();
    return a >= b;
}

string add(const string& a, const string& b) {
    string r;
    int carry = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int s = carry;
        if (i >= 0) s += a[i--] - '0';
        if (j >= 0) s += b[j--] - '0';
        r.push_back(char(s % 10 + '0'));
        carry = s / 10;
    }
    reverse(r.begin(), r.end());
    return strip(r);
}

string sub(const string& a, const string& b) {
    string r;
    int borrow = 0;
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0) {
        int d = (a[i] - '0') - borrow;
        if (j >= 0) d -= (b[j] - '0');
        if (d < 0) {
            d += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        r.push_back(char(d + '0'));
        i--; j--;
    }
    reverse(r.begin(), r.end());
    return strip(r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B;
    cin >> A >> B;

    bool negA = (A[0] == '-');
    bool negB = (B[0] == '-');

    if (negA) A = A.substr(1);
    if (negB) B = B.substr(1);

    string res;
    bool neg = false;

    if (negA == negB) {
        res = add(A, B);
        neg = negA;
    } else {
        if (absGE(A, B)) {
            res = sub(A, B);
            neg = negA;
        } else {
            res = sub(B, A);
            neg = negB;
        }
    }

    if (res == "0") neg = false;
    if (neg) cout << "-";
    cout << res;

    return 0;
}