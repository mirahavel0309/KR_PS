#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N,M; cin>>N>>M;
    map<string,int> s2i; vector<string> i2s(N+1);
    for (int i=1;i<=N;i++) { cin>>i2s[i]; s2i[i2s[i]]=i; }
    while (M--) {
        string q; cin>>q;
        if (isdigit(q[0])) cout<<i2s[stoi(q)]<<"\n";
        else cout<<s2i[q]<<"\n";
    }
}