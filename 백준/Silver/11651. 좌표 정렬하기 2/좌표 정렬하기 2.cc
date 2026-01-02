#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	
	int n;
	cin >> n;

	vector<pair<int,int>> v;
	v.reserve(n);

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;

		v.push_back({y,x});
	}

	sort(v.begin(), v.end());

	for (auto &p : v) {
		cout << p.second << ' ' << p.first << '\n';
	}

	return 0;
}