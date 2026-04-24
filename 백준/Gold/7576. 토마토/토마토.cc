#include <bits/stdc++.h>
using namespace std;
int main() {
    int M,N; cin>>M>>N;
    vector<vector<int>> g(N,vector<int>(M));
    queue<pair<int,int>> q;
    for(int i=0;i<N;i++) for(int j=0;j<M;j++) { cin>>g[i][j]; if(g[i][j]==1) q.push({i,j}); }
    int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
    while(!q.empty()) {
        auto[x,y]=q.front(); q.pop();
        for(int d=0;d<4;d++) { int nx=x+dx[d],ny=y+dy[d]; if(nx>=0&&nx<N&&ny>=0&&ny<M&&g[nx][ny]==0) { g[nx][ny]=g[x][y]+1; q.push({nx,ny}); } }
    }
    int ans=0;
    for(int i=0;i<N;i++) for(int j=0;j<M;j++) { if(g[i][j]==0) { cout<<-1; return 0; } ans=max(ans,g[i][j]); }
    cout<<ans-1;
}