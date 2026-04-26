#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> a,cur;
void bt(int s){
    if((int)cur.size()==m){for(int x:cur)cout<<x<<" ";cout<<"\n";return;}
    int prev=-1;
    for(int i=s;i<n;i++){
        if(a[i]==prev)continue;
        prev=a[i];cur.push_back(a[i]);bt(i);cur.pop_back();
    }
}
int main(){
    cin>>n>>m;a.resize(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    n=a.size();bt(0);
}