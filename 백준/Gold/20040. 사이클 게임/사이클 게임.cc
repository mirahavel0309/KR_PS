#include<bits/stdc++.h>
using namespace std;
int p[500001];
int find(int x){return p[x]==x?x:p[x]=find(p[x]);}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m;cin>>n>>m;
    iota(p,p+n,0);
    for(int i=1;i<=m;i++){
        int a,b;cin>>a>>b;
        int pa=find(a),pb=find(b);
        if(pa==pb){cout<<i;return 0;}
        p[pa]=pb;
    }
    cout<<0;
}