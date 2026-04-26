#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n;
    vector<int>a(n);for(int&x:a)cin>>x;
    cin>>m;vector<int>b(m);for(int&x:b)cin>>x;
    vector<int> res;
    int ia=0,ib=0;
    while(ia<n&&ib<m){
        int best=-1;
        for(int i=ia;i<n;i++)for(int j=ib;j<m;j++)if(a[i]==b[j])best=max(best,a[i]);
        if(best==-1)break;
        while(ia<n&&a[ia]!=best)ia++;
        while(ib<m&&b[ib]!=best)ib++;
        res.push_back(best);ia++;ib++;
    }
    cout<<res.size()<<"\n";
    for(int x:res)cout<<x<<" ";
}