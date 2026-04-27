#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>a,order,inCycle;
vector<int>visited,finished;

void dfs(int u){
    visited[u]=1;
    order.push_back(u);
    int v=a[u];
    if(!visited[v]){
        dfs(v);
    } else if(!finished[v]){
        bool inC=false;
        for(int x:order){
            if(x==v)inC=true;
            if(inC)inCycle[x]=1;
        }
    }
    order.pop_back();
    finished[u]=1;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int T;cin>>T;
    while(T--){
        cin>>n;
        a.resize(n+1);visited.assign(n+1,0);finished.assign(n+1,0);inCycle.assign(n+1,0);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)if(!visited[i])dfs(i);
        int cnt=0;for(int i=1;i<=n;i++)if(!inCycle[i])cnt++;
        cout<<cnt<<"\n";
    }
}