#include<bits/stdc++.h>
using namespace std;
vector<int>g[100001];
int sz[100001];
void dfs(int u,int p){sz[u]=1;for(int v:g[u])if(v!=p){dfs(v,u);sz[u]+=sz[v];}}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,r,q;cin>>n>>r>>q;
    for(int i=0;i<n-1;i++){int a,b;cin>>a>>b;g[a].push_back(b);g[b].push_back(a);}
    dfs(r,0);
    while(q--){int u;cin>>u;cout<<sz[u]<<"\n";}
}