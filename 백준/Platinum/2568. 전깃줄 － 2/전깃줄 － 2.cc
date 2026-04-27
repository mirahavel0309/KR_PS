#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>>v(n);
    for(auto&[a,b]:v)cin>>a>>b;
    sort(v.begin(),v.end());
    vector<int>b(n);for(int i=0;i<n;i++)b[i]=v[i].second;
    vector<int>lis,from(n,-1),lisIdx(n);
    for(int i=0;i<n;i++){
        auto it=lower_bound(lis.begin(),lis.end(),b[i]);
        lisIdx[i]=it-lis.begin();
        if(it==lis.end())lis.push_back(b[i]);else*it=b[i];
    }
    cout<<n-(int)lis.size()<<"\n";
    int cur=lis.size()-1;
    vector<bool>keep(n,false);
    for(int i=n-1;i>=0;i--)if(lisIdx[i]==cur&&(cur==0||(i>0&&lisIdx[i-1]==cur-1)||true)){
        if(cur>=0&&lisIdx[i]==cur){keep[i]=true;cur--;}}
    // 재구성
    vector<int>res;
    cur=lis.size()-1;
    for(int i=n-1;i>=0;i--){
        if(lisIdx[i]==cur){cur--;keep[i]=true;}
    }
    for(int i=0;i<n;i++)if(!keep[i])res.push_back(v[i].first);
    sort(res.begin(),res.end());
    for(int x:res)cout<<x<<"\n";
}