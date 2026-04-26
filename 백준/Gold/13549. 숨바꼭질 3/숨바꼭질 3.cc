#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int> d(100001,INT_MAX);
    deque<int> dq;
    d[n]=0;dq.push_back(n);
    while(!dq.empty()){
        int x=dq.front();dq.pop_front();
        if(x==k){cout<<d[x];return 0;}
        if(x*2<=100000&&d[x*2]>d[x]){d[x*2]=d[x];dq.push_front(x*2);}
        for(int nx:{x-1,x+1})if(nx>=0&&nx<=100000&&d[nx]>d[x]+1){d[nx]=d[x]+1;dq.push_back(nx);}
    }
    cout<<d[k];
}