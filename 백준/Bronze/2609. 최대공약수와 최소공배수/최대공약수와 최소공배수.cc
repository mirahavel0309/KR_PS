#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	
	int a, b;
	cin >> a >> b;
	
	cout << gcd(a, b) << '\n';
	cout << lcm(a, b) << '\n';
}