#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M; cin>>N>>M;
    vector<string> g(N); for(auto& r:g) cin>>r;
    int sx,sy; for(int i=0;i<N;i++) for(int j=0;j<M;j++) if(g[i][j]=='I') { sx=i; sy=j; }
    int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
    queue<pair<int,int>> q; q.push({sx,sy});
    vector<vector<bool>> vis(N,vector<bool>(M,false)); vis[sx][sy]=true;
    int cnt=0;
    while(!q.empty()) { auto[x,y]=q.front(); q.pop(); for(int d=0;d<4;d++) { int nx=x+dx[d],ny=y+dy[d]; if(nx>=0&&nx<N&&ny>=0&&ny<M&&!vis[nx][ny]&&g[nx][ny]!='X') { vis[nx][ny]=true; if(g[nx][ny]=='P') cnt++; q.push({nx,ny}); } } }
    if(cnt==0) cout<<"TT"; else cout<<cnt;
}