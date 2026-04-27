#include<bits/stdc++.h>
using namespace std;
int p[4000001];
int find(int x){return p[x]==x?x:p[x]=find(p[x]);}
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n,m,k;cin>>n>>m>>k;
    iota(p,p+n+2,0);
    vector<int>cards(m);
    for(int&x:cards)cin>>x;
    sort(cards.begin(),cards.end());
    while(k--){
        int x;cin>>x;
        auto it=upper_bound(cards.begin(),cards.end(),x);
        int idx=it-cards.begin();
        int f=find(idx);
        cout<<cards[f]<<"\n";
        p[f]=f+1;
    }
}