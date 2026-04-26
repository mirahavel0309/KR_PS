#include<bits/stdc++.h>
using namespace std;
vector<int> g[100001];
int par[100001];
int main(){
    int n;cin>>n;
    for(int i=0;i<n-1;i++){int a,b;cin>>a>>b;g[a].push_back(b);g[b].push_back(a);}
    queue<int>q;q.push(1);par[1]=-1;
    vector<bool>vis(n+1,false);vis[1]=true;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int v:g[u])if(!vis[v]){vis[v]=true;par[v]=u;q.push(v);}
    }
    for(int i=2;i<=n;i++)cout<<par[i]<<"\n";
}