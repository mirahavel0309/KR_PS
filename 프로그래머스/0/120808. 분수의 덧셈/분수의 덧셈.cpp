#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2;
    
    int g = gcd(numer, denom);
    
    answer.push_back(numer / g);
    answer.push_back(denom / g);
    
    return answer;
}
