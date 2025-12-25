#include <iostream>
using namespace std;

int main() {
    string s;
    int cnt = 0;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) cnt++;
    }
    cout << cnt;
    return 0;
}