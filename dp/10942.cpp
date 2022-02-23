#include<bits/stdc++.h>
using namespace std;
int n, m;
int d[2005][2005];
int a[2005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        d[i][i] = 1;
        if(a[i-1]==a[i]) d[i-1][i] = 1;
    }
    for(int gap=2; gap<n;gap++){
        for(int i=1;i<=n-gap;i++){
            if(a[i]==a[i+gap] && d[i+1][i+gap-1]) d[i][i+gap]=1;
        }
    }
    cin>>m;
    while(m--){
        int a, b;
        cin>>a>>b;
        cout<<d[a][b]<<'\n';
    }
}