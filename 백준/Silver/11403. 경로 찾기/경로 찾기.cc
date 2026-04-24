#include <bits/stdc++.h>
using namespace std;
int d[101][101];
int main() {
    int N; cin>>N;
    for(int i=0;i<N;i++) for(int j=0;j<N;j++) cin>>d[i][j];
    for(int k=0;k<N;k++) for(int i=0;i<N;i++) for(int j=0;j<N;j++) if(d[i][k]&&d[k][j]) d[i][j]=1;
    for(int i=0;i<N;i++) { for(int j=0;j<N;j++) cout<<d[i][j]<<" "; cout<<"\n"; }
}