#include <bits/stdc++.h>
using namespace std;
int dist[101][101];
int main() {
    int N,M; cin>>N>>M;
    for (int i=1;i<=N;i++) for (int j=1;j<=N;j++) dist[i][j]=(i==j)?0:1e9;
    for (int i=0;i<M;i++) { int a,b; cin>>a>>b; dist[a][b]=dist[b][a]=1; }
    for (int k=1;k<=N;k++) for (int i=1;i<=N;i++) for (int j=1;j<=N;j++) dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
    int ans=1, minSum=INT_MAX;
    for (int i=1;i<=N;i++) { int s=0; for (int j=1;j<=N;j++) s+=dist[i][j]; if (s<minSum) { minSum=s; ans=i; } }
    cout<<ans;
}