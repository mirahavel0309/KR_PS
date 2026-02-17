#include <bits/stdc++.h>
using namespace std;

int main() {
	while(true) {
		string s;
		cin >> s;
		int len = s.length();
		bool isPalindrome = true;

		if (s == "0") break;

		for (int i=0; i < len/2; i++) {
			if (s[i] != s[len-1-i]){
				isPalindrome=false;
				break;
			}
		}
		if (isPalindrome) cout << "yes\n";
		else cout << "no\n";
	}
}
