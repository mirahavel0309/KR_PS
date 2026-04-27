#include<bits/stdc++.h>
using namespace std;
int n,m;
char g[10][11];
struct S{int ry,rx,by,bx,cnt;};

int bfs(S s){
    int vis[10][10][10][10]={};
    queue<S>q;
    q.push(s);vis[s.ry][s.rx][s.by][s.bx]=1;
    int dy[]={-1,1,0,0},dx[]={0,0,-1,1};
    while(!q.empty()){
        auto[ry,rx,by,bx,cnt]=q.front();q.pop();
        if(cnt>10)break;
        if(g[ry][rx]=='O'&&g[by][bx]!='O')return cnt;
        for(int i=0;i<4;i++){
            int nry=ry,nrx=rx,nby=by,nbx=bx;
            while(g[nry][nrx]!='#'&&g[nry][nrx]!='O'){nry+=dy[i];nrx+=dx[i];}
            if(g[nry][nrx]=='#'){nry-=dy[i];nrx-=dx[i];}
            while(g[nby][nbx]!='#'&&g[nby][nbx]!='O'){nby+=dy[i];nbx+=dx[i];}
            if(g[nby][nbx]=='#'){nby-=dy[i];nbx-=dx[i];}
            if(nry==nby&&nrx==nbx&&g[nry][nrx]!='O'){
                int rd=abs(nry-ry)+abs(nrx-rx),bd=abs(nby-by)+abs(nbx-bx);
                if(bd>rd){nby-=dy[i];nbx-=dx[i];}else{nry-=dy[i];nrx-=dx[i];}
            }
            if(!vis[nry][nrx][nby][nbx]){vis[nry][nrx][nby][nbx]=1;q.push({nry,nrx,nby,nbx,cnt+1});}
        }
    }
    return -1;
}

int main(){
    cin>>n>>m;
    S s{};
    for(int i=0;i<n;i++){cin>>g[i];for(int j=0;j<m;j++){if(g[i][j]=='R'){s.ry=i;s.rx=j;}if(g[i][j]=='B'){s.by=i;s.bx=j;}}}
    cout<<bfs(s);
}