#include<bits/stdc++.h>
using namespace std;
int p[30001];
int find(int x){return p[x]==x?x:p[x]=find(p[x]);}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m,k;cin>>n>>m>>k;
    vector<int>c(n+1);for(int i=1;i<=n;i++)cin>>c[i];
    iota(p,p+n+1,0);
    for(int i=0;i<m;i++){int a,b;cin>>a>>b;int pa=find(a),pb=find(b);if(pa!=pb)p[pa]=pb;}
    map<int,pair<int,int>>grp;
    for(int i=1;i<=n;i++){int r=find(i);grp[r].first+=c[i];grp[r].second++;}
    vector<pair<int,int>>items;
    for(auto&[_,v]:grp)items.push_back(v);
    vector<int>dp(k,0);
    for(auto[val,sz]:items)for(int j=k-1;j>=sz;j--)dp[j]=max(dp[j],dp[j-sz]+val);
    cout<<dp[k-1];
}