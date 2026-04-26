#include<bits/stdc++.h>
using namespace std;
int r,c,ans;
char g[21][21];
int dx[]={0,0,1,-1},dy[]={1,-1,0,0};
void dfs(int x,int y,int vis,int cnt){
    ans=max(ans,cnt);
    for(int d=0;d<4;d++){
        int nx=x+dx[d],ny=y+dy[d];
        if(nx<0||nx>=r||ny<0||ny>=c)continue;
        int bit=1<<(g[nx][ny]-'A');
        if(vis&bit)continue;
        dfs(nx,ny,vis|bit,cnt+1);
    }
}
int main(){
    cin>>r>>c;
    for(int i=0;i<r;i++)cin>>g[i];
    dfs(0,0,1<<(g[0][0]-'A'),1);
    cout<<ans;
}