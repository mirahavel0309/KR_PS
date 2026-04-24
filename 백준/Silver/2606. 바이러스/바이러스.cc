#include <bits/stdc++.h>
using namespace std;
vector<int> adj[101];
bool vis[101];
int cnt=0;
void dfs(int v) { vis[v]=true; for(int u:adj[v]) if(!vis[u]) { cnt++; dfs(u); } }
int main() {
    int N,M; cin>>N>>M;
    while(M--) { int a,b; cin>>a>>b; adj[a].push_back(b); adj[b].push_back(a); }
    dfs(1); cout<<cnt;
}