#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin>>n;
    vector<int>a(n),score(1000001,0);
    vector<bool>has(1000001,false);
    vector<int>idx(1000001,-1);
    for(int i=0;i<n;i++){cin>>a[i];has[a[i]]=true;idx[a[i]]=i;}
    for(int i=0;i<n;i++){
        for(int mul=2;(long long)a[i]*mul<=1000000;mul++){
            if(has[a[i]*mul]){score[i]++;score[idx[a[i]*mul]]--;}
        }
    }
    for(int i=0;i<n;i++)cout<<score[i]<<" \n"[i==n-1];
}