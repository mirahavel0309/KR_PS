#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;cin>>T;
    while(T--){
        int n,k;cin>>n>>k;
        vector<int>d(n+1),indeg(n+1,0),dp(n+1,0);
        vector<vector<int>>g(n+1);
        for(int i=1;i<=n;i++)cin>>d[i];
        for(int i=0;i<k;i++){int a,b;cin>>a>>b;g[a].push_back(b);indeg[b]++;}
        int w;cin>>w;
        queue<int>q;
        for(int i=1;i<=n;i++)if(!indeg[i]){q.push(i);dp[i]=d[i];}
        while(!q.empty()){
            int u=q.front();q.pop();
            for(int v:g[u]){
                dp[v]=max(dp[v],dp[u]+d[v]);
                if(--indeg[v]==0)q.push(v);
            }
        }
        cout<<dp[w]<<"\n";
    }
}