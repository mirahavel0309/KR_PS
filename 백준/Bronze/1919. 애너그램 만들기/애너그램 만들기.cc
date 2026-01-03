#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	int diff[26] {};

	for (char c : a) {
		diff[c - 'a']++;
	}

	for (char c : b) {
		diff[c - 'a']--;
	}

	int ans {};
	for (int i = 0; i < 26; i++) {
		ans += abs(diff[i]);
	}

	cout << ans << '\n';

	return 0;
		
}