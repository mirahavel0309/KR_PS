#include<bits/stdc++.h>
using namespace std;
int n,g[17][17];
long long dp[17][17][3];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>g[i][j];
    dp[0][1][0]=1;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++){
        if(g[i][j])continue;
        if(j+1<n&&!g[i][j+1]){dp[i][j+1][0]+=dp[i][j][0]+dp[i][j][2];}
        if(i+1<n&&!g[i+1][j]){dp[i+1][j][1]+=dp[i][j][1]+dp[i][j][2];}
        if(i+1<n&&j+1<n&&!g[i+1][j]&&!g[i][j+1]&&!g[i+1][j+1]){dp[i+1][j+1][2]+=dp[i][j][0]+dp[i][j][1]+dp[i][j][2];}
    }
    cout<<dp[n-1][n-1][0]+dp[n-1][n-1][1]+dp[n-1][n-1][2];
}