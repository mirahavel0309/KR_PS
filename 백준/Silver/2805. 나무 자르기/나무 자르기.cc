#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; long long M; cin>>N>>M;
    vector<long long> v(N); for(auto& x:v) cin>>x;
    long long lo=0,hi=*max_element(v.begin(),v.end());
    while(lo<hi) {
        long long mid=(lo+hi+1)/2;
        long long s=0; for(auto x:v) if(x>mid) s+=x-mid;
        if(s>=M) lo=mid; else hi=mid-1;
    }
    cout<<lo;
}