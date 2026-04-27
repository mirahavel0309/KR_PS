#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    vector<int>a(n);for(int&x:a)cin>>x;
    vector<int>lis,idx(n);
    for(int i=0;i<n;i++){
        auto it=lower_bound(lis.begin(),lis.end(),a[i]);
        idx[i]=it-lis.begin();
        if(it==lis.end())lis.push_back(a[i]);else*it=a[i];
    }
    int len=lis.size();
    cout<<len<<"\n";
    vector<int>res;
    int cur=len-1;
    for(int i=n-1;i>=0;i--)if(idx[i]==cur){res.push_back(a[i]);cur--;}
    reverse(res.begin(),res.end());
    for(int x:res)cout<<x<<" ";
}