#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;cin>>n>>s;
    vector<int>a(n);for(int&x:a)cin>>x;
    int l=0,sum=0,ans=1e9;
    for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>=s){ans=min(ans,r-l+1);sum-=a[l++];}
    }
    cout<<(ans==1e9?0:ans);
}