#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N,M; cin>>N>>M;
    set<string> s;
    for (int i=0;i<N;i++) { string x; cin>>x; s.insert(x); }
    vector<string> res;
    for (int i=0;i<M;i++) { string x; cin>>x; if (s.count(x)) res.push_back(x); }
    sort(res.begin(),res.end());
    cout<<res.size()<<"\n";
    for (auto& x:res) cout<<x<<"\n";
}