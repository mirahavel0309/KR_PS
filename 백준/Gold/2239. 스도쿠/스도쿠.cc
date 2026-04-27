#include<bits/stdc++.h>
using namespace std;
int g[9][9];
bool row[9][10],col[9][10],box[9][10];
bool solve(int pos){
    if(pos==81)return true;
    int r=pos/9,c=pos%9;
    if(g[r][c]){return solve(pos+1);}
    for(int d=1;d<=9;d++){
        if(row[r][d]||col[c][d]||box[(r/3)*3+c/3][d])continue;
        row[r][d]=col[c][d]=box[(r/3)*3+c/3][d]=true;
        g[r][c]=d;
        if(solve(pos+1))return true;
        row[r][d]=col[c][d]=box[(r/3)*3+c/3][d]=false;
        g[r][c]=0;
    }
    return false;
}
int main(){
    for(int i=0;i<9;i++){string s;cin>>s;for(int j=0;j<9;j++){g[i][j]=s[j]-'0';if(g[i][j]){row[i][g[i][j]]=col[j][g[i][j]]=box[(i/3)*3+j/3][g[i][j]]=true;}}}
    solve(0);
    for(int i=0;i<9;i++){for(int j=0;j<9;j++)cout<<g[i][j];cout<<"\n";}
}