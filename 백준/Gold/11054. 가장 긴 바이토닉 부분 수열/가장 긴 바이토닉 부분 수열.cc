#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> a(n),L(n,1),R(n,1);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++)for(int j=0;j<i;j++)if(a[j]<a[i])L[i]=max(L[i],L[j]+1);
    for(int i=n-2;i>=0;i--)for(int j=i+1;j<n;j++)if(a[j]<a[i])R[i]=max(R[i],R[j]+1);
    int ans=0;
    for(int i=0;i<n;i++)ans=max(ans,L[i]+R[i]-1);
    cout<<ans;
}