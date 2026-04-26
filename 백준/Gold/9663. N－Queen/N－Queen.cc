#include<bits/stdc++.h>
using namespace std;
int n,ans;
bool col[15],d1[30],d2[30];
void bt(int r){
    if(r==n){ans++;return;}
    for(int c=0;c<n;c++){
        if(col[c]||d1[r+c]||d2[r-c+n])continue;
        col[c]=d1[r+c]=d2[r-c+n]=true;
        bt(r+1);
        col[c]=d1[r+c]=d2[r-c+n]=false;
    }
}
int main(){cin>>n;bt(0);cout<<ans;}