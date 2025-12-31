#include <bits/stdc++.h>
using namespace std;

int main() {
	string s[5] = {"E", "A", "B", "C", "D"};
	for (int t = 0; t < 3; t++) {
		int sum = 0, x;
		for (int i = 0; i < 4; i++) cin >> x, sum += x;
		cout << s[4 - sum] << '\n';
	}
}