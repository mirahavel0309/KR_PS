#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int main(){
    int n;cin>>n;
    vector<array<int,3>>a(n);for(auto&x:a)cin>>x[0]>>x[1]>>x[2];
    int ans=INF;
    for(int fc=0;fc<3;fc++){
        vector<array<int,3>>dp(n);
        for(int c=0;c<3;c++)dp[0][c]=(c==fc)?a[0][c]:INF;
        for(int i=1;i<n;i++)for(int c=0;c<3;c++){
            dp[i][c]=INF;
            for(int p=0;p<3;p++)if(p!=c)dp[i][c]=min(dp[i][c],dp[i-1][p]+a[i][c]);
        }
        for(int c=0;c<3;c++)if(c!=fc)ans=min(ans,dp[n-1][c]);
    }
    cout<<ans;
}