#include<bits/stdc++.h>
using namespace std;
struct Shark{int r,c,s,d,z;};
int R,C,M;
map<pair<int,int>,Shark> sea;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    cin>>R>>C>>M;
    for(int i=0;i<M;i++){
        Shark sh;cin>>sh.r>>sh.c>>sh.s>>sh.d>>sh.z;
        sh.r--;sh.c--;sea[{sh.r,sh.c}]=sh;
    }
    int ans=0;
    int dr[]={-1,1,0,0},dc[]={0,0,1,-1};
    for(int col=0;col<C;col++){
        for(int row=0;row<R;row++){
            if(sea.count({row,col})){ans+=sea[{row,col}].z;sea.erase({row,col});break;}
        }
        map<pair<int,int>,Shark> nsea;
        for(auto&[pos,sh]:sea){
            int r=sh.r,c=sh.c,s=sh.s,d=sh.d-1;
            int period=(d<2)?2*(R-1):2*(C-1);
            s%=period;
            while(s--){
                r+=dr[d];c+=dc[d];
                if(r<0||r>=R||c<0||c>=C){d^=1;r+=dr[d]*2;c+=dc[d]*2;}
            }
            sh.r=r;sh.c=c;sh.d=d+1;
            if(!nsea.count({r,c})||nsea[{r,c}].z<sh.z)nsea[{r,c}]=sh;
        }
        sea=nsea;
    }
    cout<<ans;
}