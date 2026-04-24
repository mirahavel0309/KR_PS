#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin>>T;
    while(T--) {
        int k; cin>>k;
        map<int,int> m;
        while(k--) {
            char op; int n; cin>>op>>n;
            if(op=='I') m[n]++;
            else {
                if(m.empty()) continue;
                if(n==1) { auto it=--m.end(); if(--it->second==0) m.erase(it); }
                else { auto it=m.begin(); if(--it->second==0) m.erase(it); }
            }
        }
        if(m.empty()) cout<<"EMPTY\n";
        else cout<<m.rbegin()->first<<" "<<m.begin()->first<<"\n";
    }
}