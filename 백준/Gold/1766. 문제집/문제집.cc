#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>>g(n+1);
    vector<int>indeg(n+1,0);
    for(int i=0;i<m;i++){int a,b;cin>>a>>b;g[a].push_back(b);indeg[b]++;}
    priority_queue<int,vector<int>,greater<>>pq;
    for(int i=1;i<=n;i++)if(!indeg[i])pq.push(i);
    while(!pq.empty()){
        int u=pq.top();pq.pop();cout<<u<<" ";
        for(int v:g[u])if(--indeg[v]==0)pq.push(v);
    }
}