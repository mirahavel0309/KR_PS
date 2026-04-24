#include <bits/stdc++.h>
using namespace std;
int main() {
    long long p[101]={0,1,1,1,2,2,3,4,5,7,9};
    for(int i=10;i<=100;i++) p[i]=p[i-2]+p[i-3];
    int T; cin>>T;
    while(T--) { int n; cin>>n; cout<<p[n]<<"\n"; }
}