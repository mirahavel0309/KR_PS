#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<bool> submitted(31,false);

    for (int i = 0; i < 28; i++) {
        int x;
        cin >> x;
        submitted[x] = true;
    }

    for (int i = 1; i <= 30; i++) {
        if (submitted[i] == false) cout << i << '\n';
    }
    return 0;
}