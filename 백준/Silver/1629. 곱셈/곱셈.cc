#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pw(ll a,ll b,ll c){
    if(b==0)return 1%c;
    ll h=pw(a,b/2,c);h=h*h%c;
    if(b%2)h=h*a%c;
    return h;
}
int main(){ll a,b,c;cin>>a>>b>>c;cout<<pw(a,b,c);}