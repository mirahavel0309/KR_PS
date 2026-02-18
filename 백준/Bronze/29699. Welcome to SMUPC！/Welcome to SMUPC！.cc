#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "WelcomeToSMUPC";
	int n;
	cin >> n;

	int len = s.length();
	int idx = (n - 1) % len;
	cout << s[idx];
}
