#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long>x(n),y(n);
    for(int i=0;i<n;i++)cin>>x[i]>>y[i];
    long long s=0;
    for(int i=0;i<n;i++)s+=x[i]*y[(i+1)%n]-x[(i+1)%n]*y[i];
    printf("%.1f\n",abs(s)/2.0);
}