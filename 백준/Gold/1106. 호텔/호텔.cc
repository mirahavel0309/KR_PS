#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,n;cin>>c>>n;
    vector<int>dp(c+101,1e9);
    dp[0]=0;
    for(int i=0;i<n;i++){
        int cost,gain;cin>>cost>>gain;
        for(int j=gain;j<=c+100;j++)
            dp[j]=min(dp[j],dp[max(0,j-gain)]+cost);
    }
    int ans=1e9;
    for(int i=c;i<=c+100;i++)ans=min(ans,dp[i]);
    cout<<ans;
}