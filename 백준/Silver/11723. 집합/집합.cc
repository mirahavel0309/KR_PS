#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int M; cin>>M;
    int S=0;
    while(M--) {
        string op; cin>>op;
        if(op=="add") { int x; cin>>x; S|=(1<<x); }
        else if(op=="remove") { int x; cin>>x; S&=~(1<<x); }
        else if(op=="check") { int x; cin>>x; cout<<((S>>x)&1)<<"\n"; }
        else if(op=="toggle") { int x; cin>>x; S^=(1<<x); }
        else if(op=="all") S=(1<<21)-1;
        else S=0;
    }
}