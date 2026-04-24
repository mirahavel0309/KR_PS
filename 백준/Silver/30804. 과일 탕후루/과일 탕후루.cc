#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin>>N;
    vector<int> s(N); for(auto& x:s) cin>>x;
    map<int,int> cnt;
    int ans=0,l=0;
    for(int r=0;r<N;r++) {
        cnt[s[r]]++;
        while(cnt.size()>2) { if(--cnt[s[l]]==0) cnt.erase(s[l]); l++; }
        ans=max(ans,r-l+1);
    }
    cout<<ans;
}