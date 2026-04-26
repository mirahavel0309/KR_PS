#include<bits/stdc++.h>
using namespace std;
int s[1025][1025];
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){int x;cin>>x;s[i][j]=x+s[i-1][j]+s[i][j-1]-s[i-1][j-1];}
    while(m--){
        int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        cout<<s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1]<<"\n";
    }
}