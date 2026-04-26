#include<bits/stdc++.h>
using namespace std;
vector<int> pre;
void post(int l,int r){
    if(l>r)return;
    int root=pre[l],mid=r+1;
    for(int i=l+1;i<=r;i++)if(pre[i]>root){mid=i;break;}
    post(l+1,mid-1);
    post(mid,r);
    cout<<root<<"\n";
}
int main(){
    int x;
    while(cin>>x)pre.push_back(x);
    post(0,pre.size()-1);
}