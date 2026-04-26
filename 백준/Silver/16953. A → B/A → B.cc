#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;cin>>a>>b;
    int ans=0;
    while(b>a){
        ans++;
        if(b%2==0)b/=2;
        else if(b%10==1)b/=10;
        else{cout<<-1;return 0;}
    }
    cout<<(a==b?ans+1:-1);
}