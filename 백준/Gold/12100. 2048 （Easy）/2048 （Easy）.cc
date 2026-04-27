#include<bits/stdc++.h>
using namespace std;
int n,ans;
typedef vector<vector<int>> Board;
Board move(Board b,int d){
    int N=b.size();
    Board res(N,vector<int>(N,0));
    if(d==0){for(int j=0;j<N;j++){int pos=0;int prev=0;for(int i=0;i<N;i++){if(!b[i][j])continue;if(b[i][j]==prev){res[pos-1][j]*=2;prev=0;}else{res[pos++][j]=b[i][j];prev=b[i][j];}}}}
    if(d==1){for(int j=0;j<N;j++){int pos=N-1;int prev=0;for(int i=N-1;i>=0;i--){if(!b[i][j])continue;if(b[i][j]==prev){res[pos+1][j]*=2;prev=0;}else{res[pos--][j]=b[i][j];prev=b[i][j];}}}}
    if(d==2){for(int i=0;i<N;i++){int pos=0;int prev=0;for(int j=0;j<N;j++){if(!b[i][j])continue;if(b[i][j]==prev){res[i][pos-1]*=2;prev=0;}else{res[i][pos++]=b[i][j];prev=b[i][j];}}}}
    if(d==3){for(int i=0;i<N;i++){int pos=N-1;int prev=0;for(int j=N-1;j>=0;j--){if(!b[i][j])continue;if(b[i][j]==prev){res[i][pos+1]*=2;prev=0;}else{res[i][pos--]=b[i][j];prev=b[i][j];}}}}
    return res;
}
void dfs(Board b,int depth){
    for(auto&row:b)for(int x:row)ans=max(ans,x);
    if(depth==5)return;
    for(int d=0;d<4;d++)dfs(move(b,d),depth+1);
}
int main(){
    cin>>n;Board b(n,vector<int>(n));
    for(auto&row:b)for(int&x:row)cin>>x;
    dfs(b,0);cout<<ans;
}