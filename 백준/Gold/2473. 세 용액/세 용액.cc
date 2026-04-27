#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long>a(n);for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    long long best=1e18;
    array<long long,3>ans={};
    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1;
        while(l<r){
            long long s=a[i]+a[l]+a[r];
            if(abs(s)<best){best=abs(s);ans={a[i],a[l],a[r]};}
            if(s<0)l++;else if(s>0)r--;else break;
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
}