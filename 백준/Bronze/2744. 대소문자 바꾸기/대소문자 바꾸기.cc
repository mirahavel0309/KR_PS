#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char &c : s) {
        if (islower(c)) c = toupper(c);
        else if (isupper(c)) c = tolower(c);
    }
    cout << s;
    return 0;
}