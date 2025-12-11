#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (char &c : str) {
        if (islower(c)) c = toupper(c);
        else if (isupper(c)) c = tolower(c);
    }

    cout << str;
    return 0;
}