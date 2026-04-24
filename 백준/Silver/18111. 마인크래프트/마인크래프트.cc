#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M; long long B; cin>>N>>M>>B;
    vector<int> v(N*M);
    for(auto& x:v) cin>>x;
    long long ans=LLONG_MAX, height=0;
    for(int h=0;h<=256;h++) {
        long long add=0,rem=0;
        for(int x:v) { if(x>h) rem+=x-h; else add+=h-x; }
        if(rem+B<add) continue;
        long long t=rem*2+add;
        if(t<ans||(t==ans)) { ans=t; height=h; }
    }
    cout<<ans<<" "<<height;
}