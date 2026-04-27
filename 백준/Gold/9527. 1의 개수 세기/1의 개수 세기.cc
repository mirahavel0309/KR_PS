#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll count(ll n){
    ll res=0,b=1;
    while(b<=n){res+=n/b/2*b+(n/b%2?n%b+1:0);b*=2;}
    return res;
}
int main(){ll a,b;cin>>a>>b;cout<<count(b)-count(a-1);}