#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int arr[26] = {0};
	for (char c : s) {
		arr[c - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
}
