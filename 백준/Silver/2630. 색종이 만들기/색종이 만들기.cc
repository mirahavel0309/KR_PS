#include <bits/stdc++.h>
using namespace std;
int g[128][128], w=0, b=0;
void solve(int r,int c,int n) {
    int s=g[r][c];
    for(int i=r;i<r+n;i++) for(int j=c;j<c+n;j++) if(g[i][j]!=s) { int h=n/2; solve(r,c,h); solve(r,c+h,h); solve(r+h,c,h); solve(r+h,c+h,h); return; }
    if(s==0) w++; else b++;
}
int main() {
    int N; cin>>N;
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>g[i][j];
    solve(0,0,N); cout<<w<<"\n"<<b;
}