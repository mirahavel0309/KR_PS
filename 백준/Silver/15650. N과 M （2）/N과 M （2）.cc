#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> cur;
void bt(int s){
    if((int)cur.size()==m){for(int x:cur)cout<<x<<" ";cout<<"\n";return;}
    for(int i=s;i<=n;i++){cur.push_back(i);bt(i+1);cur.pop_back();}
}
int main(){cin>>n>>m;bt(1);}