#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[20];

	for(int i = 0; i < 20; i++) arr[i] = i + 1;

	for (int t = 0; t < 10; t++) {
		int a, b;
		cin >> a >> b;
		reverse(arr + a - 1, arr + b);
	}
	
	for (int i = 0; i < 20; i ++) {
		cout << arr[i] << ' ';
	}
}