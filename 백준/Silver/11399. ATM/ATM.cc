#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin>>N;
    vector<int> v(N); for(auto& x:v) cin>>x;
    sort(v.begin(),v.end());
    int sum=0,ans=0;
    for(int x:v) { sum+=x; ans+=sum; }
    cout<<ans;
}