#include <bits/stdc++.h>
using namespace std;
int main() {
    long long fib[41][2];
    fib[0][0]=1; fib[0][1]=0;
    fib[1][0]=0; fib[1][1]=1;
    for (int i=2;i<=40;i++) { fib[i][0]=fib[i-1][0]+fib[i-2][0]; fib[i][1]=fib[i-1][1]+fib[i-2][1]; }
    int T; cin>>T;
    while (T--) { int n; cin>>n; cout<<fib[n][0]<<" "<<fib[n][1]<<"\n"; }
}