#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> a,cur;
bool used[9];
void bt(){
    if((int)cur.size()==m){for(int x:cur)cout<<x<<" ";cout<<"\n";return;}
    int prev=-1;
    for(int i=0;i<n;i++){
        if(used[i]||a[i]==prev)continue;
        prev=a[i];used[i]=true;cur.push_back(a[i]);
        bt();
        used[i]=false;cur.pop_back();
    }
}
int main(){
    cin>>n>>m;a.resize(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    bt();
}