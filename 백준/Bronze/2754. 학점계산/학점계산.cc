#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    map<string, double> grade = {
        {"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7},
        {"B+", 3.3}, {"B0", 3.0}, {"B-", 2.7},
        {"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7},
        {"D+", 1.3}, {"D0", 1.0}, {"D-", 0.7},
        {"F", 0.0}
    };

    string s;
    cin >> s;

    cout << fixed << setprecision(1) << grade[s];
}
