#include<bits/stdc++.h>
using namespace std;
int p[1000001];
int find(int x){return p[x]==x?x:p[x]=find(p[x]);}
void unite(int a,int b){a=find(a);b=find(b);if(a!=b)p[a]=b;}
int main(){
    int n,m;cin>>n>>m;
    vector<string>g(n);for(auto&s:g)cin>>s;
    iota(p,p+n*m,0);
    int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
    auto idx=[&](int r,int c){return r*m+c;};
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        int d=0;
        char c=g[i][j];
        if(c=='U')d=0;else if(c=='D')d=1;else if(c=='L')d=2;else d=3;
        unite(idx(i,j),idx(i+dx[d],j+dy[d]));
    }
    set<int>roots;
    for(int i=0;i<n*m;i++)roots.insert(find(i));
    cout<<roots.size();
}