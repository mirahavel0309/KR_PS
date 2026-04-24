#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M; cin>>N>>M;
    int tp[101]={};
    for(int i=1;i<=100;i++) tp[i]=i;
    for(int i=0;i<N+M;i++) { int a,b; cin>>a>>b; tp[a]=b; }
    vector<int> dist(101,-1); dist[1]=0;
    queue<int> q; q.push(1);
    while(!q.empty()) { int x=q.front(); q.pop(); for(int d=1;d<=6;d++) { int nx=x+d; if(nx>100) continue; nx=tp[nx]; if(dist[nx]==-1) { dist[nx]=dist[x]+1; q.push(nx); } } }
    cout<<dist[100];
}