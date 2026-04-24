#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m; cin>>n>>m;
    vector<vector<int>> g(n,vector<int>(m));
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) { cin>>g[i][j]; if(g[i][j]==2) { q.push({i,j}); g[i][j]=0; } }
    vector<vector<int>> dist(n,vector<int>(m,-1));
    auto[si,sj]=q.front(); dist[si][sj]=0;
    int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
    while(!q.empty()) {
        auto[x,y]=q.front(); q.pop();
        for(int d=0;d<4;d++) { int nx=x+dx[d],ny=y+dy[d]; if(nx>=0&&nx<n&&ny>=0&&ny<m&&g[nx][ny]==1&&dist[nx][ny]==-1) { dist[nx][ny]=dist[x][y]+1; q.push({nx,ny}); } }
    }
    for(int i=0;i<n;i++) { for(int j=0;j<m;j++) { if(g[i][j]==0&&!(i==si&&j==sj)) cout<<0; else cout<<dist[i][j]; if(j<m-1) cout<<" "; } cout<<"\n"; }
}