#include<bits/stdc++.h>
using namespace std;
int p[100001];
int find(int x){return p[x]==x?x:p[x]=find(p[x]);}
int main(){
    int n;cin>>n;
    vector<array<int,4>>pts(n);
    for(int i=0;i<n;i++){cin>>pts[i][0]>>pts[i][1]>>pts[i][2];pts[i][3]=i;}
    vector<tuple<int,int,int>>edges;
    for(int d=0;d<3;d++){
        sort(pts.begin(),pts.end(),[d](auto&a,auto&b){return a[d]<b[d];});
        for(int i=1;i<n;i++)edges.push_back({abs(pts[i][d]-pts[i-1][d]),pts[i][3],pts[i-1][3]});
    }
    sort(edges.begin(),edges.end());
    iota(p,p+n,0);
    long long ans=0;
    for(auto[c,a,b]:edges){int pa=find(a),pb=find(b);if(pa!=pb){p[pa]=pb;ans+=c;}}
    cout<<ans;
}