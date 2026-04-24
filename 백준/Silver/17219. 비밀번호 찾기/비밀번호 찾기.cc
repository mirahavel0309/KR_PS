#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N,M; cin>>N>>M;
    unordered_map<string,string> mp;
    for(int i=0;i<N;i++) { string a,b; cin>>a>>b; mp[a]=b; }
    while(M--) { string q; cin>>q; cout<<mp[q]<<"\n"; }
}