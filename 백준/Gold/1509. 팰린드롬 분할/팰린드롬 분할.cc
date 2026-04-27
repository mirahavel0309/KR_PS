#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int n=s.size();
    vector<vector<bool>>pal(n,vector<bool>(n,false));
    for(int i=0;i<n;i++)pal[i][i]=true;
    for(int i=0;i<n-1;i++)pal[i][i+1]=(s[i]==s[i+1]);
    for(int len=3;len<=n;len++)for(int i=0;i+len-1<n;i++){int j=i+len-1;pal[i][j]=(s[i]==s[j]&&pal[i+1][j-1]);}
    vector<int>dp(n+1,1e9);dp[0]=0;
    for(int i=1;i<=n;i++)for(int j=0;j<i;j++)if(pal[j][i-1])dp[i]=min(dp[i],dp[j]+1);
    cout<<dp[n];
}