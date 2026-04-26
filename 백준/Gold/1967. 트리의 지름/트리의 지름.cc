#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> g[10001];
int dist[10001];
void bfs(int s,int n){
    fill(dist,dist+n+1,-1);
    queue<int>q;q.push(s);dist[s]=0;
    while(!q.empty()){
        int u=q.front();q.pop();
        for(auto[v,w]:g[u])if(dist[v]==-1){dist[v]=dist[u]+w;q.push(v);}
    }
}
int main(){
    int n;cin>>n;
    for(int i=0;i<n-1;i++){int a,b,c;cin>>a>>b>>c;g[a].push_back({b,c});g[b].push_back({a,c});}
    bfs(1,n);
    int far=max_element(dist,dist+n+1)-dist;
    bfs(far,n);
    cout<<*max_element(dist,dist+n+1);
}