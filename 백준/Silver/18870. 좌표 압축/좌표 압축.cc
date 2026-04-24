#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N; cin>>N;
    vector<int> x(N); for(auto& v:x) cin>>v;
    vector<int> s=x; sort(s.begin(),s.end()); s.erase(unique(s.begin(),s.end()),s.end());
    for(int i=0;i<N;i++) cout<<(int)(lower_bound(s.begin(),s.end(),x[i])-s.begin())<<" \n"[i==N-1];
}