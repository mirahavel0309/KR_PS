#include<bits/stdc++.h>
using namespace std;
int n,m;
string g[1001];
int dist[1001][1001][2];
int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>g[i];
    memset(dist,-1,sizeof(dist));
    queue<tuple<int,int,int>> q;
    q.push({0,0,0});dist[0][0][0]=1;
    while(!q.empty()){
        auto[x,y,w]=q.front();q.pop();
        if(x==n-1&&y==m-1){cout<<dist[x][y][w];return 0;}
        for(int d=0;d<4;d++){
            int nx=x+dx[d],ny=y+dy[d];
            if(nx<0||nx>=n||ny<0||ny>=m)continue;
            if(g[nx][ny]=='1'){
                if(w==0&&dist[nx][ny][1]==-1){dist[nx][ny][1]=dist[x][y][w]+1;q.push({nx,ny,1});}
            } else {
                if(dist[nx][ny][w]==-1){dist[nx][ny][w]=dist[x][y][w]+1;q.push({nx,ny,w});}
            }
        }
    }
    cout<<-1;
}